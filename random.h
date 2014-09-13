#ifndef _RANDOM_H_
#define _RANDOM_H_

#include <climits>
#include <stdint.h>

namespace hstd {

// Xor-Shiftによる乱数ジェネレータ
class XorShiftFloat {
	unsigned int seed_[4];
	const float coefficient_;
	const float coefficient2_;
public:
	unsigned int next(void) { 
		const unsigned int t = seed_[0] ^ (seed_[0] << 11);
		seed_[0] = seed_[1]; 
		seed_[1] = seed_[2];
		seed_[2] = seed_[3];
		return seed_[3] = (seed_[3] ^ (seed_[3] >> 19)) ^ (t ^ (t >> 8)); 
	}

	// [0, 1]
	float next01(void) {
		return (float)next() * coefficient_;
	}
	
	// [min_value, max_value]
	float next(float min_value, float max_value) {
		const float inv = (max_value - min_value);
		return ((float)next() *  (inv * coefficient_)) + min_value;
	}

	// [0, 1)
	float next01o(void) {
		return (next() >> 8) * coefficient2_;
	}
	
	// [min_value, max_value)
	float nexto(float min_value, float max_value) {
		return next01o() * (max_value - min_value) + min_value;
	}

	XorShiftFloat(const unsigned int initial_seed) :
	coefficient_(1.0f / UINT_MAX), coefficient2_(1.0f / 16777216.0f) {
		unsigned int s = initial_seed;
		for (int i = 1; i <= 4; i++){
			seed_[i-1] = s = 1812433253U * (s^(s>>30)) + i;
		}
	}
};

typedef XorShiftFloat Random;


};



#endif
