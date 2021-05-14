/**
  * Author   : YU ILHAE
  * DATE     : 2021. 05. 05.
  * CONTENTS : plotting 3D donut (solid of revolution).
**/

#include <cmath>
#include <iostream>
#include <cstring>
#include <windows.h>

#define PI  3.14159
#define PI2 6.28318
#define E   0.05236
                                 void  usleep (__int64);
                            int main(){char S [ 25 ][81];float D
                   [25][80];int R1 = 5, R2 = 20, D1 =  100, D2 = 50,rx,
               ry, i, j;float x, y, z, A = 0.0, B = 0.0,  cosA, cosB, sinA,
             sinB, E1, E2, sinE1, cosE1, sinE2, cosE2,  RRCOS, L, sBcE1, cAcE1,
          sAsE1, cAsE1, sAcE1, sAsB, sAcB, cAsB,R1cAsBsE1, cAcB, R1cAcBsE1,R1sAsE1;
        printf("%s", "\x1b[2J");while ( true ){memset(S, 32, 2025); for(i=0; i<25;i++)
     S[i][80] ='\0';memset(D/*JMY*/,  0, 8000);A = A+E < PI2 ? A+E : 0; B = B+1.3*E< PI2
    ? B+1.3*E :0;cosA = cos(A);cosB = cos(B);sinA =sin(A);sinB = sin(B);sAsB = sinA /**/*
    sinB ;sAcB = sinA*cosB; cAsB = cosA*sinB;cAcB = cosA *cosB; for(E1 = 0;  E1 < PI2 ; E1
   +=E){sinE1=sin(E1);cosE1=cos(E1);RRCOS          =R2+R1*2*cosE1;sBcE1 = sinB* cosE1;cAcE1
  = cosA * cosE1; sAsE1 = sinA*sinE1;                  cAsE1=cosA*sinE1;sAcE1 =sinA * cosE1;
  R1cAsBsE1= R1*cAsB*sinE1;R1cAcBsE1                     =R1*cAcB*sinE1; R1sAsE1 =R1 * sinA*
  sinE1;for(E2 = 0;E2< PI2 ; E2 +=E                       ){sinE2= sin(E2);cosE2=cos(E2); L=
 sBcE1* cosE2-cAcE1*sinE2 - sAsE1+                         cosB*(cAsE1- sAcE1*sinE2);if(L<0)
 /*JMY*/continue; x = RRCOS*(cosB*                          cosE2 +sAsB*sinE2)-R1cAsBsE1; y=
 RRCOS* (sinB*cosE2-sAcB*sinE2) +                           R1cAcBsE1;z=cosA *RRCOS *sinE2 +
  R1sAsE1 + D1; rx = round(40+x*50                         *1/z) ;ry = round (12+y*50*1 /z);
  if(rx >=0 && rx <80 &&ry>= 0 &&ry                       <25) if(1/z>D[ry][rx])S[ry][rx] =
  ".,-~:;=!*#$@"[(int)(L*8)]; }}printf                  ("%s","\x1b[H"); for(i = 0; i <25;
   i++){printf("%s",S[i]);putchar('\n');}usleep  (30000);}return 0;} void usleep (__int64
    usec){ HANDLE timer;LARGE_INTEGER ft;ft.QuadPart=-(10*usec);timer=CreateWaitableTimer
     (NULL,TRUE,NULL);SetWaitableTimer ( timer,&ft,0, NULL,NULL,0);WaitForSingleObject
        (timer,INFINITE); CloseHandle(timer);} /*The Doughnut or Donut is a type of
          leavened fried dough. It is popular in many countries and is prepared in
            various forms as a sweet snack that can be homemade or purchased in
              bakeries, supermarkets, food stalls, and franchised specialty
                vendors. 'Doughnut' is the traditional spelling, whilst
                   'donut' is the simplified version. Both terms are
                            often used interchangeably in the
                                    English-language*/


