akari2
=====

"akari2" is a pysically based renderer.
In Japanese, the word "akari" means "a light source" or one of the cutest girl in Manga.

Copyright (c) 2014 hole
This software is released under the MIT License (http://kagamin.net/hole/license.txt).

An HDR image "Barce_Rooftop_C_3k.hdr" is from sIBL Archive (http://www.hdrlabs.com/sibl/archive.html).
This image is licensed under the Creative Commons Attribution-Noncommercial-Share Alike 3.0 License.

<pre>

  
                                                                         ffLt11iiitiif1i::iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii1tiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiititiiiiiiiiii1,.;11iiiiiiiiiiiii11t;                      
                                                                         LfLLLff1i:,:;iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiitLiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii1t1iiiiiiiit1iiiiii11111111iiiiitiiti1.                  
                                                                         tLf1:,,,:;;;;;iiiiiiiiiiiiiiiiiiiiiiiiiiiiii1Lfiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii1iiiiiiiiiiiiiiiiifiiiii1tii1tftttfttttt1iiiii1t1tii1ti1,                
                                                                       :;,,,,,,,,,,,,,,,,,,,:::::::::;iiiiiiiiiiiiiifLtiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiitiiiiiiiiiiiiiiiiitiiit1t1iiiiiittiiiiiiiiittiiitiiiitiii               
                                                                   .;,,,,,,,,,::;iiiiiiiiiiiiiiiiiiiiiiiiiiitfiiii1LLtiiii1iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiitiiiiiiiiiiiiiiiiiit1f1iiiiiiiit11iiiiiiiiiiii1ttiiiittiii              
                                                                .;,,,,,:;1iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiit;;1iiiitfLtiii11iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii1tiiiiiiiiiiiiiiiiiifiiiiiiiiiti1tiiiiiiiiiiiiiitiiiittiit;             
                                                              ;:,,:;iit1iiiiiiiiiiiiiiiiiiiiiiitiiiiii1i::i1iiiitLt1iiitiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiitiiiiiiiiiiiiiiiiiii1iiiiiiiitiitiiiiiiiiiiiiitiiiiittifft             
                                                           .;,:iii1i;1iiiiiiiiiiiiiiiiiiiiiiiftiiiiit;:::;1iiiitt:;1iitiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii;::;iiitiiiiiiiiiiiiiiiiiiiitiiiiii11iitiiiiiiiiiiiit1iiiiittffft             
                                                         .;:iiii. .1iiii1iiiiiiiiiiiiiiiii1fL1iiii1i:::::tiiiit,,:1iitiiiiiiiiiiiiiiiiiiii1iiiiiiitiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii:,,:;iiiiiiiiiiiiii,ff1iiii11iiitiiiiiiiiiitiiiiiitfCfff;             
                                                        i;i1;    iiiiifiiiiiiiiiiiiiiiii1ffLiiiii1::::::i1iii1..::ti11iiiiiiiiiiiiiiiiiifiiiiiiiitiiiiiiiiiiiiiiiiiiiiiiiii1iiiiiii11iii;:,,,:;iiiiiiii:;Lff1ii1tiiiitiiiiiiiitiiiiitLLLLfft              
                                                      :1ii      1iii1tiiiiiiiiiiiiiiii1fffLiiiit;:::::::tiiii...::titiiiiiiiiiiiiiiiiiffiiiiitii11iiiiiiit:tiiiiiiiiiiiiiitL1iiiiii11iiiiiiii:,,,,,;iii,,fffffLffiiiiitiiiii1ti1tLffLLLLff1               
                                                     ii:       1iiitiiiiiiiiit1iiiiiiffffLii11fi;::::::,1i1ft1:.::ttiiiiiiiiiiiiiiii1Lfiiiiti1iitiiiiiit:::1iiiiiiiiiiiiiiLffiiiiii11iiiiiiiiiii;,,,,,,,,1CfffffLLffLLLCLLLCfffffffCfLCff.                
                                                    1:        1iiitiiiiiiii1ftiiiii1LfffL1iii1:::::::,.:1i1.....f:1tiii1iiiiiiiiiiitLftiit::tiitiiiiit,,:::i1iiiiiiiiiiiitffffiiiii11iiiiiiiiiiiii;,,,,,,;LfCLfffLLfffffLCffffffLCffLL1                   
                                                   :         iiiitiiiiiiiitLfiiiiitffffffiii1:::::::,..;it......::i1ii11iiiiiiiiiiffffi1::::tiitiii1;...,:::tiiiiiiiiiii1;;Lfftiiii11iiiiiiiiiiiiiii,,,,,:LffffLCLLCfLCLffffffCLLLCi                      
                                                            .1iitiiiiiiiiffffiiiiffffffLiii1:::::::....i1:......::tiiiLiiiiiiiiiifffff.,:::i1ii111f::,,..:::tiiiiiiiiii1i::tffL1iiit1iiiiiiiiiiiiiiii:,,,,LfffffffLffffffffffffffff1i1,                   
                      ;......;:.                            ;iitiiiiiiiifffftiiiffffffffiit:::::::.....;1.......,:tit:tiiiiiiiiifffL,..::::tiiiiii........;1L1iiiiiiii1;::::Lfftiiitiiiiiiiiiiiiiiiiii:,,,LffffffLLffffffLfffLLftiiiiiii;                 
                     .:..........;.                         iitii11iiiiffffftiifffffffLtit,::::::......;;..;,....:1t::tiiiiiiiitLL1....::::1iii1:.........,:tiii1f1ii1;..:::tfffiiifiiiiiiiiiiiiiiiiiii,,,LffffffCffffffffLfftifiiii11iiii;               
                      ,,...........:.                       1tii1iiiiifffffffitfffffffL11:::::::1G@@@@@@8t,..:i,.,f,::tiiiiiii1LL:....,::::1ii1:...........,tiiiiiiit1....::;LfL1iifiiiiiiiiiii;;iiiiii;,:LfffffCffffffffffCfiiitiiii1::1ii1.             
                       ,,............;                      t1ii.1iiitfffffff1LfffffffLi1.::L@@@@8L1i;;it0@@t..i:..:::1iiiiiiiLL......,:::,ii1:............,tiiiiiit,...i,.::Lfftif1iiiiii;;;:.;;;;;;iii::LffffCfffffLfffffLLtiiitiiiii:  1ii;            
                         ;............;                     1i; ;iiiifffffCLffffffffff;t,:8@@0i;;;iG@01,:f@Cf@:....::::tiiiiitL.......,::,.:1:.............,1iiiii1........1:ffft1Liiiiii;;.,;;;;;;;;;iii;LfffCfffffLLffffffCfiiiitiiiii:   ;ii           
                           ;...........:                   ;i;  ;iiitfffLLLLffffffffL:;1C@@G;;;;i@@i.......8@GL;...,:::1iiiiiC.........::...1..............;1iii1;..........,tLffLfiiiii;;,.;;;;;;;;;;;;;;;;iLffffffCfffffffCfiiii1iiiii1,    ;i          
                             ;.........:.                . 1i   ;iiifffL1LfCffffffffC:,f,08;;: C@@@i..... 1CC80i....::::1iiit:.........:...................1iiit.............1LffLiiiiii;;;;;;;;;;;;;;;;;;;;;iLffffLLfffffffLfiiiiiiiiiii1.               
                              ;.........:            ,:....t    :ii1LfLitffCfffffffCLi...CG;, f@8CCCCL ..:CCCC01,...,:::,1ii1.............................:1it,..............iLfLtiiiiii;;;;;;;;;;;;;;;;;;;;;1LffffLffffffffffiiiiiiiiiiiii               
                               ;.........:          ;.......;    1itfLiifffLLffffffCff...:G,..@GCCCCCCCCCCCCCCGL.....:::,.ii;.............................t1:................iLfLiiiiiiii;;;;;;;;;;;;;;;;;;;tLLLLLLLLfffffffffiiiiiiiit;                  
                                ;.........;        ;........;    ;itL1iiffffCfffffLLfL,...:,.,@CCCLtf1111tfCCC0i......::,..:;............................f:..................1fLiiiiiii:iii;;;;;;;;;;;;;;ifffffffffffffffffffff1ii1                       
                                 ;........,,      :.........,,    1tfiiifffffCffffCffLi...... GGLf111G0Li11fCCG........,,..................,,,,..............................fL1i;.  ,iiiiiiiiiiiiiiiiitLffffffffffffffffffLtiiiiii                       
                                  ;........;       ;........,,    .fiiiitfffffCfffCffff........0Gt1i:::i1i1fGC..........................,,.................,;,..............:L, .i1tiiiiiiiiiiiiiiiiiiiLfffffffffffffffff1iiiiiiii:                       
                                   ;....,i:...........i,....;      1iiii1LfftffCffCfffL.........,8C1;:;111Gf...............................,1C@@@@@@@@@@@8Ci................ :iiitL1iiiiiiiiiiiiiiiiiiffffffffffffffLtiiiiii11iii1                        
                                   :.....................i..:;    ,1iiiiitffitffCfCffff.,,,,,,,,,.,itffi.................................,tfi;::;i1L0@@@@@@@@@@@G:.........;tiiifffiiiiiiiiiiiiiiiiii1Lffffffffff1iiiiiiiiii1fiii;                        
                                  ;.......................,:..;   iiiiiiiiftiifffLGffft,,,:,,,,,,,.........................................................:C@@@@@@@0:....iiiiiffL1iiiiiiiiiiiiiiiiiiLfffffffffiiiiiiiiiiiii1fii1                         
                                .:..................:;iii,.::..:. 1iiiiiiii1i1fffffffL;,,,,:,:,,,,...............,..............................................i@@@i:.,.tiiitffffiiiiiiiiiiiiiiiiiiLffffffffffiiiiiiiiiiiii1fi1,                         
                               :..............i;...........1:...::1iii11iiiiitfffffffL:.,,,,,,,,........................................................,,,,,,,,,,.....;1ii1fffffiiiiiiiiiiiiiiiiiiLfffffffffffiiiiiiiiiiiiitfi;                          
                              .:...........,................i....iiii1;1iiiiiffffffffL;................................................................,,,,,,,,,,,,,.,tii1ffffff1iiiiiiiiiiiiiiiiiLffffffffffftiiiiiiiiiiiiiLt;                           
                               .:............................;....1ii;:iiiiiiffffffffft.................................................................,,,,,,,,,,,,tiitffffffftiiiiiiiii1iiiiiiiLffffffffffff1iiiiiiiiiiiiiLi                            
                                 ;..................,i:....,i,....ii1 ,1iiiiifffffffffL;...................................................................,,,,,,:tit;Lffffffftiiii1iiiitiiiiii1LffffffffffffL1iiiiiiiiiiii1:                             
                                 :...............i,.........,:....;i; ,1iiiiiffffffffffL1......................................................................1it,.tfffffffftiiitiiiiitiiiiiitLffffffffffffffiiiiiiiiiiiii1                              
                                  :..........................;....:1:  1iiiiiffffffffLfffL;.......................1L1111;::::::::::;i,......................1t;...:Lfffffffftiiftiiiit1iiiiiiLffffffffffffffftiiiiiiiiiiii1,                              
                                  ;....................::....i....:1,  1iiiiifffffffLLfffffL1.....................;11;:::::::::::::::i..................,:,.....,Lfffffffff11ffiiiiitiiiiiitLfffffffffffffffL1iiiiiitiiiiii                               
                                   ;..................:;::,.......:1;  ;iiiiitffffffCfffffffffL;...................,i:::::::::::::::i,........................,Lfffffffffffffiiiiifiiiiii1Lffffffffffffffffffiiiiiii 1iii1                                
                                    :................i::::,.......,,;   1iiiiifffffLLffffffffffffL;...................,,::::::::;;:.........................,LfffffffffffffiiiiifiiiiiiiLffffffffffffffffffftiiiiii  1ii1.                                
                                      ;............i:1::::,........:.   ;iiiiitffffLLffffLLffffffLLfLt....................................................;Lfffffffffffftiiiit1iiiiiiiLfffffffffffffffffLffL1iiiii   1i1.                                 
                                      ,,..............::::,.........:    1iiiiiffffLLffft iffffffCfL:   ,;..............................................iLfffffffffffLtiiitfCiiiiiiiLGCfffffffLfffffffLCffffiiiii   .11                                   
                                       ,,...........................;    ,1iii1ifffLLffi   iffffLLL.   ,ifLCCi.......................................,1Lffffffffffff1i11;:LGiiitiiLGGGGGGLffffCfffffff.fffL1iii:    1:                                    
                                        .:.........................:.     ;iii;iiffLLf;     .fffLCCLLLLCGGGGGGGGGt,.........................,;i;::::iLffffffffffftt1;::::CGfiitiCGGGGGGGGCLCCfCffffL:  1fftii1.    :                                      
                                          :........................;       ;ii; :itLLitLLLf ;CCLCCLLLLLCGGGGCCCCCCCCGCf;.......,:;tLGG;;::::::::::;LfffffffffLfi::::::::CGG1iLGGGGGGGGGGGCLLLLCCLL:    1ffiii                                             
                                            ;.....................:         :i1  .1itiCLLLf :CLLCLLLLLLCGCLLLLLLLLLCGGGGGGGGGGG1::;8C::::::::::::fffffffLL1;:::::::::::CGGGitGGGGGGGGGGGCLLLLLLLLLLt,  1fi1.                                              
                                          :1t,...................,tt.         t,  :;t;CLLLL.,CLLLLLLLLLCCLLLLLLLLLLCGGGGGGGGGG::::::1::::::::::1LfffLfi:::::::::::::::LGGGGiGGGGGGCLCGGGLLLLLLLLLLLLLLLLt:                                                
                                       ;t11t;....................LLt1t.     .;.,.....;CLLLL..LLLLLLLLLLLLLLLLLLLLLLCGGGGGGGGG;:::::::1::::::::ffLLi:::::::::::::::::LGGGGGGfGGGCLLLLLCGCLLLLLLLLLLLLLLLLLLLt,                                             
                                    ;t111tLt....................1LLLt11i  :..........,CLLLC: fLLLLLLLLLLLLLLLLLLLLLLGGGGGGGG;::::::::;;::::::Lf;:::::::::::::::::LGGGGGGGGG0CCLLLLLLLLCLLLLLLLLLLLLLLLLLLLLCCt;:,                                         
                                 ,t111tLLLf.....................LLLLL111t.......,,....LLLLL1 ;CLLLLLLLLLLLLLLLLLLLLLLCGGGGG1::::::::::::::::::::::::::::::::::fGGGGGGGGGGCCLLLLLLLLLLLLLLLLLLLLLLLLLLLCL1,.  ,ifLLLf:                                     
                               it111fLLLLL.....................;LLLLC111t;......,,....1CLLLL..LLLLLLLLLLLLLLLLLLLLLLLLCGGGL::::::::::::::::::::::::::::::::tGGGGGGGGGGCLLLLLLLLLLLLLLLLLLLLLLLLLLLCt:. .:tLCLLLCCLf1tGCt.                                 
                            .1111tLLLLLLL,.....................LLLLLL111ti.............CLLLCi.:CLLLLLLLLLLLLLLLLLLLLLLLLCG::::::::::::::::::::::::::::::1GGGGGGGGCCLLLLLLLLLLLLLLLLLLLLLLLLLLLC1,  ,1LCLLLCLi, ........1G;                                
                           1111fCLLLLLLL;.....................iLLLLL1111t........,.....:CLLLC,.1CLLLLLLLLLLLLLLLLLLLLLLLLCCCCGGGGGL1:::::::::::::::::;CGGGGGCCLLLLLLLLLLLLLLLLLLLLLLLLLLLLCt,  ,tCLLLCLi. ................:.                              

</pre>
