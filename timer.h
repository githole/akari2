#ifndef _TIMER_H_
#define _TIMER_H_


namespace hstd {
	
#ifdef _WIN32

#define NOMINMAX
#include <Windows.h>

class Timer {
private:
	LARGE_INTEGER nFreq_, nBefore_, nAfter_;
public:
	Timer() {}

	void begin() {
		QueryPerformanceFrequency(&nFreq_);
		QueryPerformanceCounter(&nBefore_);
	}

	// ms
	float end() {
		QueryPerformanceCounter(&nAfter_);

		return ((nAfter_.QuadPart - nBefore_.QuadPart) * 1000.0f / nFreq_.QuadPart);
	}
};

#else
#include <sys/time.h>

class Timer {
private:
	double begin_ms, end_ms;
public:
	Timer() {}

	void begin() {
		timeval tv;
		gettimeofday(&tv, NULL);
		begin_ms = (tv.tv_sec) * 1000 + (tv.tv_usec) / 1000;
	}

	// ms
	float end() {
		timeval tv;
		gettimeofday(&tv, NULL);
		end_ms = (tv.tv_sec) * 1000 + (tv.tv_usec) / 1000;

		return end_ms - begin_ms;
	}
};

#endif

} // namespace hstd

#endif // _TIMER_H_
