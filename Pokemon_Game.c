#include <drawlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void home();
void full();
void fushigi1(int,int);
void fushigi2(int,int);
void fushigi0(int,int);
void hito1(int,int);
void hito2(int,int);
void hito0(int,int);
void zeni1(int,int);
void zeni2(int,int);
void zeni0(int,int);
void ball(int,int);

int main(){

 int t, k, x, y, i, j, n;
 int m, s;
 int ok = '\n';

 dl_initialize(2.0);

 for(;;){

  n=0;
  s=200;
  m=0;
  j=0;
  i=0;
  k=0;
  x=0;
  y=0;

  dl_stop();
  dl_clear(DL_RGB(255,225,90));
  dl_rectangle(x+0,y+0,x+10,y+10,DL_RGB(255, 255, 180),1,1);
  dl_resume();

  while(i != 1){
   while(dl_get_event(&t, &k, &x, &y)){
    if(t == DL_EVENT_KEY){
     if(k == ok){
      i = 1;
      break;
     }
    }
   if(DL_EVENT_L_DOWN || DL_EVENT_R_DOWN){
    if((x>0 &&x<10) && (y>0 && y<10)){
     for(;;){
     full();
     while(dl_get_event(&t, &k, &x, &y)){
      if(t == DL_EVENT_KEY){
       if(k == 32){
         sleep(0.5);
         exit(0);
         }
        }
       }
     }
    }
   }   
   }
   home();
  }

  k=0;
  x=0;
  y=0;
  
  dl_clear(DL_C("white"));

  srand(time(NULL));
  j = rand() % 3 + 1;

  switch(j){
//フシギダネ
   case 1: while(i != 0){
           fushigi0(200,50); 
             while(dl_get_event(&t,&k,&x,&y)){
              if(DL_EVENT_L_DOWN || DL_EVENT_R_DOWN){
               if((x>200 &&x<400) && (y>260 && y<460)){
                i = 0;
                break;
               }
              }
             }
            }
          while(n != 5){
           dl_stop();
           dl_clear(DL_C("white"));
           dl_text("70%", 10,40,1.5,DL_C("black"),3);
           dl_text("Catching", 10,80,1.5,DL_C("black"),3);
           dl_text("Rate", 10,120,1.5,DL_C("black"),3);
           fushigi1(200,60);
           dl_resume();
           dl_wait(0.5);
           dl_stop();
           dl_clear(DL_C("white"));
           dl_text("70%", 10,40,1.5,DL_C("black"),3);
           dl_text("Catching", 10,80,1.5,DL_C("black"),3);
           dl_text("Rate", 10,120,1.5,DL_C("black"),3);
           ball(200,60);
           dl_resume();
           dl_wait(0.5);
           n+=1;
            }
          srand(time(NULL));
          m = rand() % 100 +1;
          if(m>0 && m<=30)
           m = 1;
          else
           m = 2;
          switch(m){
           case 1: while(i != 1){
                    dl_stop();
                    dl_clear(DL_C("white"));
                    fushigi1(s,80);
                    dl_text("Flee...", 200,300,2.0,DL_RGB(180,110,60),5);
                    if(s<-100)
                    dl_text("It's Gone...", 170,230,2.0,DL_RGB(180,110,60),5);
                    dl_text("Enter:Retry", 10,430,1.5,DL_C("black"),3);
                    dl_text("Space:Exit", 330,430,1.5,DL_C("black"),3);
                    dl_resume();
                    dl_wait(0.01);
                    s-=10;
                    while(dl_get_event(&t, &k, &x, &y)){
                     if(t == DL_EVENT_KEY){
                      if(k == ok){
                       i = 1;
                       break;
                          }
                      if(k == 32){
                       sleep(0.5);
                       exit(0);
                          }
                         }
                        }
                       }
                   break;
           case 2: while(i != 1){
                    dl_stop();
                    dl_clear(DL_C("white"));
                    ball(200,80);
                    dl_text("Good!", 210,370,2.0,DL_RGB(180,110,60),5);
                    dl_text("Enter:Retry", 10,430,1.5,DL_C("black"),3);
                    dl_text("Space:Exit", 330,430,1.5,DL_C("black"),3);
                    dl_resume();
                    dl_wait(1.0);
                    while(dl_get_event(&t, &k, &x, &y)){
                     if(t == DL_EVENT_KEY){
                      if(k == ok){
                       i = 1;
                       break;
                         }
                      if(k == 32){
                       sleep(0.5);
                       exit(0);
                          }
                        }
                       }
                      }
                  break;
                     }
                 break;
//ヒトカゲ
   case 2: while(i != 0){
            hito0(200,50);
             while(dl_get_event(&t,&k,&x,&y)){
              if(DL_EVENT_L_DOWN || DL_EVENT_R_DOWN){
               if((x>200 &&x<400) && (y>260 && y<460)){
                i = 0;
                break;
               }
              }
             }
            }
          while(n != 5){
           dl_stop();
           dl_clear(DL_C("white"));
           dl_text("30%", 10,40,1.5,DL_C("black"),3);
           dl_text("Catching", 10,80,1.5,DL_C("black"),3);
           dl_text("Rate", 10,120,1.5,DL_C("black"),3);
           hito1(200,60);
           dl_resume();
           dl_wait(0.5);
           dl_stop();
           dl_clear(DL_C("white"));
           dl_text("30%", 10,40,1.5,DL_C("black"),3);
           dl_text("Catching", 10,80,1.5,DL_C("black"),3);
           dl_text("Rate", 10,120,1.5,DL_C("black"),3);
           ball(200,60);
           dl_resume();
           dl_wait(0.5);
           n+=1;
            }
          srand(time(NULL));
          m = rand() % 100 +1;
          if(m>0 && m<=70)
           m = 1;
          else
           m = 2;
          switch(m){
           case 1: while(i != 1){
                    dl_stop();
                    dl_clear(DL_C("white"));
                    hito1(s,80);
                    dl_text("Flee...", 200,300,2.0,DL_RGB(180,110,60),5);
                    if(s<-100)
                    dl_text("It's Gone...", 170,230,2.0,DL_RGB(180,110,60),5);
                    dl_text("Enter:Retry", 10,430,1.5,DL_C("black"),3);
                    dl_text("Space:Exit", 330,430,1.5,DL_C("black"),3);
                    dl_resume();
                    dl_wait(0.01);
                    s-=10;
                    while(dl_get_event(&t, &k, &x, &y)){
                     if(t == DL_EVENT_KEY){
                      if(k == ok){
                       i = 1;
                       break;
                          }
                      if(k == 32){
                       sleep(0.5);
                       exit(0);
                          }
                         }
                        }
                       }
                   break;
           case 2: while(i != 1){
                    dl_stop();
                    dl_clear(DL_C("white"));
                    ball(200,80);
                    dl_text("Excellent!!!", 150,370,2.0,DL_RGB(180,110,60),5);
                    dl_text("Enter:Retry", 10,430,1.5,DL_C("black"),3);
                    dl_text("Space:Exit", 330,430,1.5,DL_C("black"),3);
                    dl_resume();
                    dl_wait(1.0);
                    while(dl_get_event(&t, &k, &x, &y)){
                     if(t == DL_EVENT_KEY){
                      if(k == ok){
                       i = 1;
                       break;
                         }
                      if(k == 32){
                       sleep(0.5);
                       exit(0);
                          }
                        }
                       }
                      }
                  break;
                     }
                 break;
//ゼニガメ
   case 3: while(i != 0){
            zeni0(200,60);
             while(dl_get_event(&t,&k,&x,&y)){
              if(DL_EVENT_L_DOWN || DL_EVENT_R_DOWN){
               if((x>200 &&x<400) && (y>260 && y<460)){
                i = 0;
                break;
               }
              }
             }
            }
          while(n != 5){
           dl_stop();
           dl_clear(DL_C("white"));
           dl_text("50%", 10,40,1.5,DL_C("black"),3);
           dl_text("Catching", 10,80,1.5,DL_C("black"),3);
           dl_text("Rate", 10,120,1.5,DL_C("black"),3);
           zeni1(200,60);
           dl_resume();
           dl_wait(0.5);
           dl_stop();
           dl_clear(DL_C("white"));
           dl_text("50%", 10,40,1.5,DL_C("black"),3);
           dl_text("Catching", 10,80,1.5,DL_C("black"),3);
           dl_text("Rate", 10,120,1.5,DL_C("black"),3);
           ball(200,60);
           dl_resume();
           dl_wait(0.5);
           n+=1;
            }
          srand(time(NULL));
          m = rand() % 100 +1;
          if(m>0 && m<=50)
           m = 1;
          else
           m = 2;
          switch(m){
           case 1: while(i != 1){
                    dl_stop();
                    dl_clear(DL_C("white"));
                    zeni1(s,80);
                    dl_text("Flee...", 200,300,2.0,DL_RGB(180,110,60),5);
                    if(s<-100)
                    dl_text("It's Gone...", 170,230,2.0,DL_RGB(180,110,60),5);
                    dl_text("Enter:Retry", 10,430,1.5,DL_C("black"),3);
                    dl_text("Space:Exit", 330,430,1.5,DL_C("black"),3);
                    dl_resume();
                    dl_wait(0.01);
                    s-=10;
                    while(dl_get_event(&t, &k, &x, &y)){
                     if(t == DL_EVENT_KEY){
                      if(k == ok){
                       i = 1;
                       break;
                          }
                      if(k == 32){
                       sleep(0.5);
                       exit(0);
                          }
                         }
                        }
                       }
                   break;
           case 2: while(i != 1){
                    dl_stop();
                    dl_clear(DL_C("white"));
                    ball(200,80);
                    dl_text("Great!!", 200,370,2.0,DL_RGB(180,110,60),5);
                    dl_text("Enter:Retry", 10,430,1.5,DL_C("black"),3);
                    dl_text("Space:Exit", 330,430,1.5,DL_C("black"),3);
                    dl_resume();
                    dl_wait(1.0);
                    while(dl_get_event(&t, &k, &x, &y)){
                     if(t == DL_EVENT_KEY){
                      if(k == ok){
                       i = 1;
                       break;
                         }
                      if(k == 32){
                       sleep(0.5);
                       exit(0);
                          }
                        }
                       }
                      }
                  break;
                     }
                 break;
  }
 }
 return 0;
}

void home(){
 dl_stop();
 dl_rectangle(111,141,180,150,DL_C("black"),1,1);
 dl_rectangle(101,151,110,160,DL_C("black"),1,1);
 dl_rectangle(181,151,190,160,DL_C("black"),1,1);
 dl_rectangle(91,161,100,180,DL_C("black"),1,1);
 dl_rectangle(191,161,200,180,DL_C("black"),1,1);
 dl_rectangle(81,181,90,210,DL_C("black"),1,1);
 dl_rectangle(201,181,210,210,DL_C("black"),1,1);
 dl_rectangle(91,211,100,230,DL_C("black"),1,1);
 dl_rectangle(191,211,200,230,DL_C("black"),1,1);
 dl_rectangle(101,231,110,240,DL_C("black"),1,1);
 dl_rectangle(181,231,190,240,DL_C("black"),1,1);
 dl_rectangle(111,241,180,250,DL_C("black"),1,1);
 dl_rectangle(91,191,120,200,DL_C("black"),1,1);
 dl_rectangle(171,191,200,200,DL_C("black"),1,1);
 dl_rectangle(141,191,150,200,DL_C("black"),1,1);
 dl_rectangle(121,181,130,210,DL_C("black"),1,1);
 dl_rectangle(161,181,170,210,DL_C("black"),1,1);
 dl_rectangle(131,171,160,180,DL_C("black"),1,1);
 dl_rectangle(131,211,160,220,DL_C("black"),1,1);
 dl_rectangle(221,171,230,220,DL_C("black"),1,1);
 dl_rectangle(231,171,260,180,DL_C("black"),1,1);
 dl_rectangle(251,181,260,190,DL_C("black"),1,1);
 dl_rectangle(231,191,260,200,DL_C("black"),1,1);
 dl_rectangle(271,191,280,210,DL_C("black"),1,1);
 dl_rectangle(281,181,300,190,DL_C("black"),1,1);
 dl_rectangle(301,191,310,210,DL_C("black"),1,1);
 dl_rectangle(281,211,300,220,DL_C("black"),1,1);
 dl_rectangle(321,171,330,220,DL_C("black"),1,1);
 dl_rectangle(331,201,340,210,DL_C("black"),1,1);
 dl_rectangle(341,191,350,200,DL_C("black"),1,1);
 dl_rectangle(341,211,350,220,DL_C("black"),1,1);
 dl_rectangle(361,191,370,210,DL_C("black"),1,1);
 dl_rectangle(371,181,390,190,DL_C("black"),1,1);
 dl_rectangle(391,191,400,200,DL_C("black"),1,1);
 dl_rectangle(381,201,390,210,DL_C("black"),1,1);
 dl_rectangle(371,211,400,220,DL_C("black"),1,1);
 dl_rectangle(371,161,380,170,DL_C("black"),1,1);
 dl_rectangle(381,151,390,160,DL_C("black"),1,1);
 dl_rectangle(411,181,420,220,DL_C("black"),1,1);
 dl_rectangle(421,181,430,190,DL_C("black"),1,1);
 dl_rectangle(431,181,440,220,DL_C("black"),1,1);
 dl_rectangle(441,181,450,190,DL_C("black"),1,1);
 dl_rectangle(451,181,460,220,DL_C("black"),1,1);
 dl_rectangle(471,191,480,210,DL_C("black"),1,1);
 dl_rectangle(481,181,500,190,DL_C("black"),1,1);
 dl_rectangle(501,191,510,210,DL_C("black"),1,1);
 dl_rectangle(481,211,500,220,DL_C("black"),1,1);
 dl_rectangle(521,181,530,220,DL_C("black"),1,1);
 dl_rectangle(531,191,540,200,DL_C("black"),1,1);
 dl_rectangle(541,181,550,190,DL_C("black"),1,1);
 dl_rectangle(551,181,560,220,DL_C("black"),1,1);
 dl_rectangle(231,261,240,310,DL_C("black"),1,1);
 dl_rectangle(241,261,260,270,DL_C("black"),1,1);
 dl_rectangle(241,301,260,310,DL_C("black"),1,1);
 dl_rectangle(261,271,270,300,DL_C("black"),1,1);
 dl_rectangle(291,281,300,300,DL_C("black"),1,1);
 dl_rectangle(321,281,330,300,DL_C("black"),1,1);
 dl_rectangle(301,271,320,280,DL_C("black"),1,1);
 dl_rectangle(301,301,320,310,DL_C("black"),1,1);
 dl_rectangle(351,271,390,280,DL_C("black"),1,1);
 dl_rectangle(361,261,370,310,DL_C("black"),1,1);
 dl_rectangle(371,301,390,310,DL_C("black"),1,1);
 dl_rectangle(411,301,420,310,DL_C("black"),1,1);
 dl_rectangle(111,151,180,160,DL_C("red"),1,1);
 dl_rectangle(101,161,190,170,DL_C("red"),1,1);
 dl_rectangle(101,171,130,180,DL_C("red"),1,1);
 dl_rectangle(161,171,190,180,DL_C("red"),1,1);
 dl_rectangle(91,181,120,190,DL_C("red"),1,1);
 dl_rectangle(171,181,200,190,DL_C("red"),1,1);
 dl_rectangle(131,181,160,190,DL_C("white"),1,1);
 dl_rectangle(131,191,140,200,DL_C("white"),1,1);
 dl_rectangle(151,191,160,200,DL_C("white"),1,1);
 dl_rectangle(131,201,160,210,DL_C("white"),1,1);
 dl_rectangle(171,201,200,210,DL_C("white"),1,1);
 dl_rectangle(91,201,120,210,DL_C("white"),1,1);
 dl_rectangle(161,211,190,220,DL_C("white"),1,1);
 dl_rectangle(101,211,130,220,DL_C("white"),1,1);
 dl_rectangle(101,221,190,230,DL_C("white"),1,1);
 dl_rectangle(111,231,180,240,DL_C("white"),1,1);
 dl_text("<-Press Enter->", 100,435,1.5,DL_C("black"),3);
 dl_resume();
 dl_wait(0.1);
 return ;
}

void fushigi1(int x,int y){
 dl_rectangle(x+121,y+1,x+130,y+10,DL_C("black"),1,1);
 dl_rectangle(x+141,y+1,x+150,y+10,DL_C("black"),1,1);
 dl_rectangle(x+111,y+11,x+120,y+30,DL_C("black"),1,1);
 dl_rectangle(x+131,y+11,x+140,y+20,DL_C("black"),1,1);
 dl_rectangle(x+151,y+11,x+160,y+30,DL_C("black"),1,1);
 dl_rectangle(x+101,y+21,x+110,y+30,DL_C("black"),1,1);
 dl_rectangle(x+81,y+31,x+100,y+40,DL_C("black"),1,1);
 dl_rectangle(x+161,y+31,x+180,y+40,DL_C("black"),1,1);
 dl_rectangle(x+71,y+41,x+80,y+50,DL_C("black"),1,1);
 dl_rectangle(x+181,y+41,x+190,y+50,DL_C("black"),1,1);
 dl_rectangle(x+31,y+51,x+40,y+60,DL_C("black"),1,1);
 dl_rectangle(x+61,y+51,x+70,y+60,DL_C("black"),1,1);
 dl_rectangle(x+191,y+51,x+200,y+90,DL_C("black"),1,1);
 dl_rectangle(x+21,y+61,x+30,y+90,DL_C("black"),1,1);
 dl_rectangle(x+41,y+61,x+60,y+70,DL_C("black"),1,1);
 dl_rectangle(x+11,y+91,x+20,y+110,DL_C("black"),1,1);
 dl_rectangle(x+181,y+91,x+190,y+100,DL_C("black"),1,1);
 dl_rectangle(x+171,y+101,x+180,y+120,DL_C("black"),1,1);
 dl_rectangle(x+1,y+111,x+10,y+130,DL_C("black"),1,1);
 dl_rectangle(x+181,y+121,x+190,y+150,DL_C("black"),1,1);
 dl_rectangle(x+11,y+131,x+20,y+150,DL_C("black"),1,1);
 dl_rectangle(x+21,y+151,x+40,y+160,DL_C("black"),1,1);
 dl_rectangle(x+11,y+131,x+20,y+150,DL_C("black"),1,1);
 dl_rectangle(x+171,y+151,x+180,y+160,DL_C("black"),1,1);
 dl_rectangle(x+151,y+161,x+170,y+170,DL_C("black"),1,1);
 dl_rectangle(x+41,y+161,x+100,y+170,DL_C("black"),1,1);
 dl_rectangle(x+91,y+171,x+100,y+180,DL_C("black"),1,1);
 dl_rectangle(x+141,y+171,x+150,y+180,DL_C("black"),1,1);
 dl_rectangle(x+101,y+181,x+140,y+190,DL_C("black"),1,1);
 dl_rectangle(x+81,y+121,x+90,y+130,DL_C("black"),1,1);
 dl_rectangle(x+61,y+131,x+80,y+140,DL_C("black"),1,1);
 dl_rectangle(x+61,y+141,x+70,y+150,DL_C("black"),1,1);
 dl_rectangle(x+121,y+11,x+130,y+20,DL_RGB(150, 210, 110),1,1);
 dl_rectangle(x+141,y+11,x+150,y+20,DL_RGB(150, 210, 110),1,1);
 dl_rectangle(x+131,y+21,x+140,y+30,DL_RGB(150, 210, 110),1,1);
 dl_rectangle(x+121,y+21,x+130,y+30,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+141,y+21,x+150,y+30,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+101,y+31,x+110,y+40,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+131,y+31,x+140,y+80,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+151,y+31,x+160,y+50,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+81,y+41,x+90,y+60,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+91,y+41,x+100,y+50,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+41,x+120,y+60,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+161,y+41,x+170,y+60,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+101,y+51,x+110,y+70,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+141,y+51,x+150,y+80,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+171,y+51,x+180,y+70,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+121,y+61,x+130,y+80,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+151,y+61,x+160,y+80,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+61,y+81,x+80,y+90,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+51,y+91,x+80,y+100,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+21,y+111,x+30,y+120,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+121,y+111,x+130,y+120,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+161,y+111,x+170,y+120,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+51,y+121,x+60,y+130,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+121,x+160,y+130,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+101,y+131,x+130,y+140,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+141,y+131,x+160,y+140,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+21,y+141,x+30,y+150,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+91,y+141,x+120,y+150,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+151,y+141,x+180,y+150,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+41,y+151,x+100,y+160,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+151,x+120,y+160,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+151,x+120,y+160,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+151,y+151,x+160,y+160,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+101,y+161,x+140,y+170,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+171,x+120,y+180,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+31,x+130,y+40,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+141,y+31,x+150,y+50,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+101,y+41,x+110,y+50,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+121,y+41,x+130,y+60,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+171,y+41,x+180,y+50,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+91,y+51,x+100,y+60,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+151,y+51,x+160,y+60,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+181,y+51,x+190,y+60,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+61,y+61,x+70,y+70,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+81,y+61,x+90,y+70,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+111,y+61,x+120,y+90,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+161,y+61,x+170,y+100,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+151,y+101,x+160,y+110,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+161,y+121,x+180,y+140,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+121,y+141,x+140,y+160,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+101,y+151,x+110,y+160,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+71,y+51,x+80,y+70,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+91,y+61,x+100,y+80,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+181,y+61,x+190,y+90,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+101,y+71,x+110,y+90,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+171,y+71,x+180,y+100,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+121,y+81,x+160,y+90,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+131,y+91,x+160,y+100,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+131,y+101,x+150,y+110,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+71,y+71,x+90,y+80,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+91,y+81,x+100,y+90,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+101,y+91,x+130,y+100,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+121,y+101,x+130,y+110,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+111,y+111,x+120,y+120,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+131,y+111,x+160,y+120,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+161,y+101,x+170,y+110,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+71,y+121,x+80,y+130,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+91,y+121,x+100,y+130,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+131,y+131,x+140,y+140,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+141,y+141,x+150,y+170,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+131,y+171,x+140,y+180,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+61,y+71,x+70,y+80,DL_RGB(120, 170, 130),1,1);
 dl_rectangle(x+51,y+81,x+60,y+90,DL_RGB(120, 170, 130),1,1);
 dl_rectangle(x+81,y+81,x+90,y+90,DL_RGB(120, 170, 130),1,1);
 dl_rectangle(x+91,y+91,x+100,y+100,DL_RGB(120, 170, 130),1,1);
 dl_rectangle(x+21,y+101,x+30,y+110,DL_RGB(120, 170, 130),1,1);
 dl_rectangle(x+61,y+111,x+70,y+120,DL_RGB(120, 170, 130),1,1);
 dl_rectangle(x+11,y+121,x+20,y+130,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+21,y+91,x+30,y+100,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+21,y+121,x+30,y+140,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+31,y+61,x+40,y+150,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+41,y+71,x+50,y+150,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+51,y+71,x+60,y+80,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+51,y+101,x+60,y+120,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+51,y+131,x+60,y+150,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+61,y+101,x+120,y+110,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+61,y+121,x+70,y+130,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+71,y+111,x+110,y+120,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+81,y+91,x+90,y+100,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+101,y+121,x+110,y+130,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+161,y+151,x+170,y+160,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+11,y+111,x+20,y+120,DL_RGB(200, 50, 50),1,1);
 dl_rectangle(x+71,y+141,x+80,y+150,DL_RGB(200, 50, 50),1,1);
 dl_rectangle(x+81,y+131,x+100,y+140,DL_C("white"),1,1);
 dl_rectangle(x+81,y+141,x+90,y+150,DL_C("white"),1,1);
 dl_rectangle(x+101,y+171,x+110,y+180,DL_C("white"),1,1);
 dl_rectangle(x+121,y+171,x+130,y+180,DL_C("white"),1,1);
 return ;
}

void fushigi2(int x,int y){
 dl_rectangle(x+121,y+1,x+150,y+10,DL_C("black"),1,1);
 dl_rectangle(x+111,y+11,x+120,y+30,DL_C("black"),1,1);
 dl_rectangle(x+151,y+11,x+160,y+30,DL_C("black"),1,1);
 dl_rectangle(x+101,y+21,x+110,y+30,DL_C("black"),1,1);
 dl_rectangle(x+81,y+31,x+100,y+40,DL_C("black"),1,1);
 dl_rectangle(x+161,y+31,x+180,y+40,DL_C("black"),1,1);
 dl_rectangle(x+71,y+41,x+80,y+50,DL_C("black"),1,1);
 dl_rectangle(x+181,y+41,x+190,y+50,DL_C("black"),1,1);
 dl_rectangle(x+31,y+51,x+40,y+60,DL_C("black"),1,1);
 dl_rectangle(x+61,y+51,x+70,y+60,DL_C("black"),1,1);
 dl_rectangle(x+191,y+51,x+200,y+90,DL_C("black"),1,1);
 dl_rectangle(x+21,y+61,x+30,y+90,DL_C("black"),1,1);
 dl_rectangle(x+41,y+61,x+60,y+70,DL_C("black"),1,1);
 dl_rectangle(x+11,y+91,x+20,y+110,DL_C("black"),1,1);
 dl_rectangle(x+181,y+91,x+190,y+100,DL_C("black"),1,1);
 dl_rectangle(x+171,y+101,x+180,y+120,DL_C("black"),1,1);
 dl_rectangle(x+1,y+111,x+10,y+130,DL_C("black"),1,1);
 dl_rectangle(x+181,y+121,x+190,y+160,DL_C("black"),1,1);
 dl_rectangle(x+11,y+131,x+20,y+150,DL_C("black"),1,1);
 dl_rectangle(x+21,y+151,x+40,y+160,DL_C("black"),1,1);
 dl_rectangle(x+11,y+131,x+20,y+150,DL_C("black"),1,1);
 dl_rectangle(x+171,y+161,x+180,y+170,DL_C("black"),1,1);
 dl_rectangle(x+151,y+171,x+170,y+180,DL_C("black"),1,1);
 dl_rectangle(x+41,y+161,x+100,y+170,DL_C("black"),1,1);
 dl_rectangle(x+91,y+171,x+100,y+190,DL_C("black"),1,1);
 dl_rectangle(x+141,y+181,x+150,y+190,DL_C("black"),1,1);
 dl_rectangle(x+101,y+191,x+140,y+200,DL_C("black"),1,1);
 dl_rectangle(x+81,y+121,x+90,y+130,DL_C("black"),1,1);
 dl_rectangle(x+61,y+141,x+70,y+150,DL_C("black"),1,1);
 dl_rectangle(x+61,y+131,x+80,y+140,DL_C("black"),1,1);
 dl_rectangle(x+121,y+11,x+150,y+20,DL_RGB(150, 210, 110),1,1);
 dl_rectangle(x+131,y+21,x+140,y+30,DL_RGB(150, 210, 110),1,1);
 dl_rectangle(x+121,y+21,x+130,y+30,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+141,y+21,x+150,y+30,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+101,y+31,x+110,y+40,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+131,y+31,x+140,y+80,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+151,y+31,x+160,y+50,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+81,y+41,x+90,y+60,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+91,y+41,x+100,y+50,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+41,x+120,y+60,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+161,y+41,x+170,y+60,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+101,y+51,x+110,y+70,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+141,y+51,x+150,y+80,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+171,y+51,x+180,y+70,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+121,y+61,x+130,y+80,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+151,y+61,x+160,y+80,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+61,y+81,x+80,y+90,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+51,y+91,x+80,y+100,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+21,y+111,x+30,y+120,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+121,y+111,x+130,y+120,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+161,y+111,x+170,y+120,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+51,y+121,x+60,y+130,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+121,x+160,y+130,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+101,y+131,x+130,y+140,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+141,y+131,x+160,y+140,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+21,y+141,x+30,y+150,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+91,y+141,x+120,y+150,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+151,y+141,x+170,y+150,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+41,y+151,x+100,y+160,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+151,x+120,y+160,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+151,x+120,y+160,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+151,y+151,x+160,y+160,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+161,x+130,y+170,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+171,x+120,y+180,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+151,y+161,x+160,y+170,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+161,y+151,x+180,y+160,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+101,y+171,x+140,y+180,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+181,x+120,y+190,DL_RGB(100, 140, 80),1,1);
 dl_rectangle(x+111,y+31,x+130,y+40,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+141,y+31,x+150,y+50,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+101,y+41,x+110,y+50,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+121,y+41,x+130,y+60,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+171,y+41,x+180,y+50,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+91,y+51,x+100,y+60,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+151,y+51,x+160,y+60,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+181,y+51,x+190,y+60,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+61,y+61,x+70,y+70,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+81,y+61,x+90,y+70,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+111,y+61,x+120,y+90,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+161,y+61,x+170,y+100,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+151,y+101,x+160,y+110,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+161,y+121,x+180,y+140,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+121,y+141,x+140,y+160,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+101,y+151,x+110,y+170,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+131,y+161,x+140,y+170,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+171,y+141,x+180,y+150,DL_RGB(30, 80, 50),1,1);
 dl_rectangle(x+71,y+51,x+80,y+70,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+91,y+61,x+100,y+80,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+181,y+61,x+190,y+90,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+101,y+71,x+110,y+90,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+171,y+71,x+180,y+100,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+121,y+81,x+160,y+90,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+131,y+91,x+160,y+100,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+131,y+101,x+150,y+110,DL_RGB(0, 100, 70),1,1);
 dl_rectangle(x+71,y+71,x+90,y+80,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+91,y+81,x+100,y+90,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+101,y+91,x+130,y+100,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+121,y+101,x+130,y+110,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+111,y+111,x+120,y+120,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+131,y+111,x+160,y+120,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+161,y+101,x+170,y+110,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+71,y+121,x+80,y+130,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+91,y+121,x+100,y+130,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+131,y+131,x+140,y+140,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+141,y+141,x+150,y+180,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+131,y+181,x+140,y+190,DL_RGB(60, 60, 60),1,1);
 dl_rectangle(x+61,y+71,x+70,y+80,DL_RGB(120, 170, 130),1,1);
 dl_rectangle(x+51,y+81,x+60,y+90,DL_RGB(120, 170, 130),1,1);
 dl_rectangle(x+81,y+81,x+90,y+90,DL_RGB(120, 170, 130),1,1);
 dl_rectangle(x+91,y+91,x+100,y+100,DL_RGB(120, 170, 130),1,1);
 dl_rectangle(x+21,y+101,x+30,y+110,DL_RGB(120, 170, 130),1,1);
 dl_rectangle(x+61,y+111,x+70,y+120,DL_RGB(120, 170, 130),1,1);
 dl_rectangle(x+11,y+121,x+20,y+130,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+21,y+91,x+30,y+100,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+21,y+121,x+30,y+140,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+31,y+61,x+40,y+150,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+41,y+71,x+50,y+150,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+51,y+71,x+60,y+80,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+51,y+101,x+60,y+120,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+51,y+131,x+60,y+150,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+61,y+101,x+120,y+110,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+61,y+121,x+70,y+130,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+71,y+111,x+110,y+120,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+81,y+91,x+90,y+100,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+101,y+121,x+110,y+130,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+161,y+161,x+170,y+170,DL_RGB(110, 180, 110),1,1);
 dl_rectangle(x+11,y+111,x+20,y+120,DL_RGB(200, 50, 50),1,1);
 dl_rectangle(x+71,y+141,x+80,y+150,DL_RGB(200, 50, 50),1,1);
 dl_rectangle(x+81,y+131,x+100,y+140,DL_C("white"),1,1);
 dl_rectangle(x+81,y+141,x+90,y+150,DL_C("white"),1,1);
 dl_rectangle(x+101,y+181,x+110,y+190,DL_C("white"),1,1);
 dl_rectangle(x+121,y+181,x+130,y+190,DL_C("white"),1,1);
 return ;
}

void fushigi0(int x,int y){
 dl_stop();
 dl_clear(DL_C("white"));
 fushigi2(x, y-10);
 ball(x,y+210);
 dl_text("70%", 10,40,1.5,DL_C("black"),3);
 dl_text("Catching", 10,80,1.5,DL_C("black"),3);
 dl_text("Rate", 10,120,1.5,DL_C("black"),3);
 dl_text("[Tap Ball]", 10,260,1.5,DL_C("black"),3);
 dl_text("Get", 10,350,1.5,DL_C("black"),3);
 dl_text("Chance", 10,400,1.5,DL_C("black"),3);
 dl_resume();
 dl_wait(0.2);
 dl_stop();
 dl_clear(DL_C("white"));
 fushigi1(x, y);
 ball(x,y+210);
 dl_text("70%", 10,40,1.5,DL_C("black"),3);
 dl_text("Catching", 10,80,1.5,DL_C("black"),3);
 dl_text("Rate", 10,120,1.5,DL_C("black"),3);
 dl_text("[Tap Ball]", 10,260,1.5,DL_C("black"),3);
 dl_text("Get", 10,350,1.5,DL_C("black"),3);
 dl_text("Chance", 10,400,1.5,DL_C("black"),3);
 dl_resume();
 dl_wait(0.2);
 return ;
}

void hito1(int x,int y){
 dl_rectangle(1+x,71+y,10+x,90+y,DL_C("black"),1,1);
 dl_rectangle(11+x,51+y,20+x,70+y,DL_C("black"),1,1);
 dl_rectangle(21+x,31+y,30+x,50+y,DL_C("black"),1,1);
 dl_rectangle(31+x,21+y,50+x,30+y,DL_C("black"),1,1);
 dl_rectangle(51+x,11+y,80+x,20+y,DL_C("black"),1,1);
 dl_rectangle(81+x,21+y,90+x,30+y,DL_C("black"),1,1);
 dl_rectangle(91+x,31+y,100+x,50+y,DL_C("black"),1,1);
 dl_rectangle(101+x,51+y,110+x,90+y,DL_C("black"),1,1);
 dl_rectangle(111+x,91+y,120+x,110+y,DL_C("black"),1,1);
 dl_rectangle(121+x,111+y,130+x,120+y,DL_C("black"),1,1);
 dl_rectangle(131+x,121+y,140+x,130+y,DL_C("black"),1,1);
 dl_rectangle(141+x,111+y,150+x,120+y,DL_C("black"),1,1);
 dl_rectangle(151+x,101+y,160+x,110+y,DL_C("black"),1,1);
 dl_rectangle(161+x,71+y,170+x,100+y,DL_C("black"),1,1);
 dl_rectangle(151+x,41+y,160+x,70+y,DL_C("black"),1,1);
 dl_rectangle(201+x,41+y,210+x,70+y,DL_C("black"),1,1);
 dl_rectangle(191+x,71+y,200+x,80+y,DL_C("black"),1,1);
 dl_rectangle(181+x,81+y,190+x,110+y,DL_C("black"),1,1);
 dl_rectangle(171+x,111+y,180+x,130+y,DL_C("black"),1,1);
 dl_rectangle(161+x,131+y,170+x,140+y,DL_C("black"),1,1);
 dl_rectangle(151+x,141+y,160+x,150+y,DL_C("black"),1,1);
 dl_rectangle(141+x,151+y,150+x,170+y,DL_C("black"),1,1);
 dl_rectangle(11+x,91+y,20+x,100+y,DL_C("black"),1,1);
 dl_rectangle(21+x,101+y,40+x,110+y,DL_C("black"),1,1);
 dl_rectangle(41+x,111+y,60+x,120+y,DL_C("black"),1,1);
 dl_rectangle(51+x,121+y,60+x,150+y,DL_C("black"),1,1);
 dl_rectangle(71+x,61+y,80+x,90+y,DL_C("black"),1,1);
 dl_rectangle(61+x,81+y,70+x,90+y,DL_C("black"),1,1);
 dl_rectangle(11+x,71+y,20+x,90+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(21+x,51+y,30+x,90+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(31+x,31+y,50+x,100+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(51+x,21+y,70+x,50+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(71+x,31+y,80+x,60+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(81+x,41+y,90+x,80+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(91+x,61+y,100+x,70+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(51+x,51+y,60+x,60+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(51+x,81+y,60+x,100+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(71+x,31+y,80+x,60+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(81+x,41+y,90+x,80+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(91+x,61+y,100+x,70+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(51+x,51+y,60+x,60+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(51+x,81+y,60+x,100+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(101+x,121+y,110+x,130+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(181+x,41+y,190+x,50+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(171+x,51+y,180+x,60+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(181+x,71+y,190+x,80+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(171+x,91+y,180+x,110+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(161+x,101+y,170+x,120+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(71+x,21+y,80+x,30+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(81+x,31+y,90+x,40+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(91+x,51+y,100+x,60+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(61+x,51+y,70+x,60+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(51+x,61+y,60+x,70+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(91+x,131+y,100+x,140+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(131+x,161+y,140+x,170+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(51+x,71+y,60+x,80+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(21+x,91+y,30+x,100+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(41+x,101+y,60+x,110+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(61+x,91+y,110+x,110+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(81+x,81+y,100+x,90+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(91+x,71+y,100+x,80+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(71+x,111+y,90+x,120+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(101+x,111+y,120+x,120+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(111+x,121+y,130+x,130+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(121+x,131+y,140+x,160+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(141+x,121+y,170+x,130+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(151+x,111+y,160+x,120+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(151+x,131+y,160+x,140+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(51+x,71+y,60+x,80+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(111+x,141+y,120+x,180+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(101+x,151+y,110+x,170+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(101+x,131+y,110+x,140+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(121+x,161+y,130+x,170+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(91+x,111+y,100+x,130+y,DL_RGB(100,70,100),1,1);
 dl_rectangle(81+x,121+y,90+x,140+y,DL_RGB(140,100,90),1,1);
 dl_rectangle(91+x,141+y,110+x,150+y,DL_RGB(140,100,90),1,1);
 dl_rectangle(111+x,131+y,120+x,140+y,DL_RGB(140,100,90),1,1);
 dl_rectangle(141+x,131+y,150+x,150+y,DL_RGB(140,100,90),1,1);
 dl_rectangle(171+x,81+y,180+x,90+y,DL_RGB(140,100,90),1,1);
 dl_rectangle(61+x,111+y,70+x,120+y,DL_RGB(240,230,210),1,1);
 dl_rectangle(81+x,161+y,100+x,170+y,DL_RGB(240,230,210),1,1);
 dl_rectangle(91+x,151+y,100+x,160+y,DL_RGB(240,230,210),1,1);
 dl_rectangle(61+x,121+y,80+x,150+y,DL_RGB(250,240,150),1,1);
 dl_rectangle(71+x,151+y,80+x,160+y,DL_RGB(250,240,150),1,1);
 dl_rectangle(81+x,141+y,90+x,160+y,DL_RGB(250,240,150),1,1);
 dl_rectangle(61+x,71+y,70+x,80+y,DL_RGB(10,100,20),1,1);
 dl_rectangle(171+x,61+y,180+x,80+y,DL_RGB(250,240,70),1,1);
 dl_rectangle(181+x,51+y,190+x,70+y,DL_RGB(250,240,70),1,1);
 dl_rectangle(161+x,41+y,170+x,70+y,DL_RGB(240,50,0),1,1);
 dl_rectangle(191+x,41+y,200+x,70+y,DL_RGB(240,50,0),1,1);
 dl_rectangle(171+x,41+y,180+x,50+y,DL_RGB(240,50,0),1,1);
 dl_rectangle(61+x,61+y,70+x,70+y,DL_C("white"),1,1);
 dl_rectangle(171+x,21+y,190+x,40+y,DL_RGB(240,60,0),1,1);
 dl_rectangle(181+x,11+y,190+x,20+y,DL_RGB(240,60,0),1,1);
 dl_rectangle(181+x,1+y,190+x,10+y,DL_C("black"),1,1);
 dl_rectangle(171+x,11+y,180+x,20+y,DL_C("black"),1,1);
 dl_rectangle(191+x,11+y,200+x,40+y,DL_C("black"),1,1);
 dl_rectangle(161+x,21+y,170+x,40+y,DL_C("black"),1,1);
 dl_rectangle(41+x,151+y,50+x,170+y,DL_C("black"),1,1);
 dl_rectangle(51+x,171+y,90+x,180+y,DL_C("black"),1,1);
 dl_rectangle(91+x,181+y,100+x,190+y,DL_C("black"),1,1);
 dl_rectangle(101+x,191+y,130+x,200+y,DL_C("black"),1,1);
 dl_rectangle(131+x,171+y,140+x,190+y,DL_C("black"),1,1);
 dl_rectangle(51+x,161+y,60+x,170+y,DL_C("white"),1,1);
 dl_rectangle(101+x,181+y,110+x,190+y,DL_C("white"),1,1);
 dl_rectangle(121+x,181+y,130+x,190+y,DL_C("white"),1,1);
 dl_rectangle(91+x,171+y,100+x,180+y,DL_RGB(140,100,90),1,1);
 dl_rectangle(71+x,161+y,80+x,170+y,DL_RGB(90,10,10),1,1);
 dl_rectangle(101+x,171+y,110+x,180+y,DL_RGB(90,10,10),1,1);
 dl_rectangle(111+x,181+y,120+x,190+y,DL_RGB(90,10,10),1,1);
 dl_rectangle(121+x,171+y,130+x,180+y,DL_RGB(90,10,10),1,1);
 dl_rectangle(51+x,151+y,70+x,160+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(61+x,161+y,70+x,170+y,DL_RGB(240,120,10),1,1);
 return ;
 }

void hito2(int x,int y){
 dl_rectangle(1+x,71+y,10+x,90+y,DL_C("black"),1,1);
 dl_rectangle(11+x,51+y,20+x,70+y,DL_C("black"),1,1);
 dl_rectangle(21+x,31+y,30+x,50+y,DL_C("black"),1,1);
 dl_rectangle(31+x,21+y,50+x,30+y,DL_C("black"),1,1);
 dl_rectangle(51+x,11+y,80+x,20+y,DL_C("black"),1,1);
 dl_rectangle(81+x,21+y,90+x,30+y,DL_C("black"),1,1);
 dl_rectangle(91+x,31+y,100+x,50+y,DL_C("black"),1,1);
 dl_rectangle(101+x,51+y,110+x,90+y,DL_C("black"),1,1);
 dl_rectangle(111+x,91+y,120+x,110+y,DL_C("black"),1,1);
 dl_rectangle(121+x,111+y,130+x,120+y,DL_C("black"),1,1);
 dl_rectangle(131+x,121+y,140+x,130+y,DL_C("black"),1,1);
 dl_rectangle(141+x,111+y,150+x,120+y,DL_C("black"),1,1);
 dl_rectangle(151+x,101+y,160+x,110+y,DL_C("black"),1,1);
 dl_rectangle(161+x,71+y,170+x,100+y,DL_C("black"),1,1);
 dl_rectangle(151+x,41+y,160+x,70+y,DL_C("black"),1,1);
 dl_rectangle(201+x,41+y,210+x,70+y,DL_C("black"),1,1);
 dl_rectangle(191+x,71+y,200+x,80+y,DL_C("black"),1,1);
 dl_rectangle(181+x,81+y,190+x,110+y,DL_C("black"),1,1);
 dl_rectangle(171+x,111+y,180+x,130+y,DL_C("black"),1,1);
 dl_rectangle(161+x,131+y,170+x,140+y,DL_C("black"),1,1);
 dl_rectangle(151+x,141+y,160+x,150+y,DL_C("black"),1,1);
 dl_rectangle(141+x,151+y,150+x,160+y,DL_C("black"),1,1);
 dl_rectangle(11+x,91+y,20+x,100+y,DL_C("black"),1,1);
 dl_rectangle(21+x,101+y,40+x,110+y,DL_C("black"),1,1);
 dl_rectangle(41+x,111+y,60+x,120+y,DL_C("black"),1,1);
 dl_rectangle(51+x,121+y,60+x,140+y,DL_C("black"),1,1);
 dl_rectangle(71+x,61+y,80+x,90+y,DL_C("black"),1,1);
 dl_rectangle(61+x,81+y,70+x,90+y,DL_C("black"),1,1);
 dl_rectangle(11+x,71+y,20+x,90+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(21+x,51+y,30+x,90+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(31+x,31+y,50+x,100+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(51+x,21+y,70+x,50+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(71+x,31+y,80+x,60+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(81+x,41+y,90+x,80+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(91+x,61+y,100+x,70+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(51+x,51+y,60+x,60+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(51+x,81+y,60+x,100+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(71+x,31+y,80+x,60+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(81+x,41+y,90+x,80+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(91+x,61+y,100+x,70+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(51+x,51+y,60+x,60+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(51+x,81+y,60+x,100+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(101+x,121+y,110+x,130+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(181+x,41+y,190+x,50+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(171+x,51+y,180+x,60+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(181+x,71+y,190+x,80+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(171+x,91+y,180+x,110+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(161+x,101+y,170+x,120+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(71+x,21+y,80+x,30+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(81+x,31+y,90+x,40+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(91+x,51+y,100+x,60+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(61+x,51+y,70+x,60+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(51+x,61+y,60+x,70+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(91+x,131+y,100+x,140+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(131+x,151+y,140+x,160+y,DL_RGB(210,110,80),1,1);
 dl_rectangle(51+x,71+y,60+x,80+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(21+x,91+y,30+x,100+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(41+x,101+y,60+x,110+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(61+x,91+y,110+x,110+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(81+x,81+y,100+x,90+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(91+x,71+y,100+x,80+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(71+x,111+y,90+x,120+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(101+x,111+y,120+x,120+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(111+x,121+y,130+x,130+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(121+x,131+y,140+x,150+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(141+x,121+y,170+x,130+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(151+x,111+y,160+x,120+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(151+x,131+y,160+x,140+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(51+x,71+y,60+x,80+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(111+x,141+y,120+x,170+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(101+x,151+y,110+x,160+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(101+x,131+y,110+x,140+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(121+x,151+y,130+x,160+y,DL_RGB(210,80,0),1,1);
 dl_rectangle(91+x,111+y,100+x,130+y,DL_RGB(100,70,100),1,1);
 dl_rectangle(81+x,121+y,90+x,140+y,DL_RGB(140,100,90),1,1);
 dl_rectangle(91+x,141+y,110+x,150+y,DL_RGB(140,100,90),1,1);
 dl_rectangle(111+x,131+y,120+x,140+y,DL_RGB(140,100,90),1,1);
 dl_rectangle(141+x,131+y,150+x,150+y,DL_RGB(140,100,90),1,1);
 dl_rectangle(171+x,81+y,180+x,90+y,DL_RGB(140,100,90),1,1);
 dl_rectangle(61+x,111+y,70+x,120+y,DL_RGB(240,230,210),1,1);
 dl_rectangle(81+x,151+y,100+x,160+y,DL_RGB(240,230,210),1,1);
 dl_rectangle(61+x,121+y,80+x,140+y,DL_RGB(250,240,150),1,1);
 dl_rectangle(71+x,141+y,90+x,150+y,DL_RGB(250,240,150),1,1);
 dl_rectangle(61+x,71+y,70+x,80+y,DL_RGB(10,100,20),1,1);
 dl_rectangle(171+x,61+y,180+x,80+y,DL_RGB(250,240,70),1,1);
 dl_rectangle(181+x,51+y,190+x,70+y,DL_RGB(250,240,70),1,1);
 dl_rectangle(161+x,41+y,170+x,70+y,DL_RGB(240,50,0),1,1);
 dl_rectangle(191+x,41+y,200+x,70+y,DL_RGB(240,50,0),1,1);
 dl_rectangle(171+x,41+y,180+x,50+y,DL_RGB(240,50,0),1,1);
 dl_rectangle(61+x,61+y,70+x,70+y,DL_C("white"),1,1);
 dl_rectangle(171+x,21+y,190+x,40+y,DL_RGB(240,60,0),1,1);
 dl_rectangle(171+x,11+y,180+x,20+y,DL_RGB(240,60,0),1,1);
 dl_rectangle(171+x,1+y,180+x,10+y,DL_C("black"),1,1);
 dl_rectangle(181+x,11+y,190+x,20+y,DL_C("black"),1,1);
 dl_rectangle(191+x,21+y,200+x,40+y,DL_C("black"),1,1);
 dl_rectangle(161+x,11+y,170+x,40+y,DL_C("black"),1,1);
 dl_rectangle(41+x,141+y,50+x,160+y,DL_C("black"),1,1);
 dl_rectangle(51+x,161+y,90+x,170+y,DL_C("black"),1,1);
 dl_rectangle(91+x,171+y,100+x,180+y,DL_C("black"),1,1);
 dl_rectangle(101+x,181+y,130+x,190+y,DL_C("black"),1,1);
 dl_rectangle(131+x,161+y,140+x,180+y,DL_C("black"),1,1);
 dl_rectangle(51+x,151+y,60+x,160+y,DL_C("white"),1,1);
 dl_rectangle(101+x,171+y,110+x,180+y,DL_C("white"),1,1);
 dl_rectangle(121+x,171+y,130+x,180+y,DL_C("white"),1,1);
 dl_rectangle(91+x,161+y,100+x,170+y,DL_RGB(140,100,90),1,1);
 dl_rectangle(71+x,151+y,80+x,160+y,DL_RGB(90,10,10),1,1);
 dl_rectangle(101+x,161+y,110+x,170+y,DL_RGB(90,10,10),1,1);
 dl_rectangle(111+x,171+y,120+x,180+y,DL_RGB(90,10,10),1,1);
 dl_rectangle(121+x,161+y,130+x,170+y,DL_RGB(90,10,10),1,1);
 dl_rectangle(51+x,141+y,70+x,150+y,DL_RGB(240,120,10),1,1);
 dl_rectangle(61+x,151+y,70+x,160+y,DL_RGB(240,120,10),1,1);
 return ;
 }

void hito0(int x,int y){
 dl_stop();
 dl_clear(DL_C("white"));
 hito1(x,y-10);
 ball(x,y+210);
 dl_text("30%", 10,40,1.5,DL_C("black"),3);
 dl_text("Catching", 10,80,1.5,DL_C("black"),3);
 dl_text("Rate", 10,120,1.5,DL_C("black"),3);
 dl_text("[Tap Ball]", 10,260,1.5,DL_C("black"),3);
 dl_text("Get", 10,350,1.5,DL_C("black"),3);
 dl_text("Chance", 10,400,1.5,DL_C("black"),3);
 dl_resume();
 dl_wait(0.2);
 dl_stop();
 dl_clear(DL_C("white"));
 hito2(x,y);
 ball(x,y+210);
 dl_text("30%", 10,40,1.5,DL_C("black"),3);
 dl_text("Catching", 10,80,1.5,DL_C("black"),3);
 dl_text("Rate", 10,120,1.5,DL_C("black"),3);
 dl_text("[Tap Ball]", 10,260,1.5,DL_C("black"),3);
 dl_text("Get", 10,350,1.5,DL_C("black"),3);
 dl_text("Chance", 10,400,1.5,DL_C("black"),3);
 dl_resume();
 dl_wait(0.2);
 return ;
}

void zeni1(int x,int y){
 dl_rectangle(31+x,11+y,70+x,20+y,DL_C("black"),1,1);
 dl_rectangle(21+x,21+y,30+x,30+y,DL_C("black"),1,1);
 dl_rectangle(71+x,21+y,90+x,30+y,DL_C("black"),1,1);
 dl_rectangle(11+x,31+y,20+x,50+y,DL_C("black"),1,1);
 dl_rectangle(91+x,31+y,110+x,40+y,DL_C("black"),1,1);
 dl_rectangle(111+x,41+y,130+x,50+y,DL_C("black"),1,1);
 dl_rectangle(1+x,51+y,10+x,80+y,DL_C("black"),1,1);
 dl_rectangle(131+x,51+y,140+x,60+y,DL_C("black"),1,1);
 dl_rectangle(11+x,81+y,20+x,90+y,DL_C("black"),1,1);
 dl_rectangle(21+x,91+y,30+x,110+y,DL_C("black"),1,1);
 dl_rectangle(31+x,111+y,50+x,120+y,DL_C("black"),1,1);
 dl_rectangle(51+x,121+y,60+x,130+y,DL_C("black"),1,1);
 dl_rectangle(151+x,111+y,160+x,130+y,DL_C("black"),1,1);
 dl_rectangle(161+x,101+y,170+x,110+y,DL_C("black"),1,1);
 dl_rectangle(61+x,61+y,70+x,80+y,DL_C("black"),1,1);
 dl_rectangle(51+x,71+y,60+x,90+y,DL_C("black"),1,1);
 dl_rectangle(31+x,21+y,40+x,30+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(81+x,31+y,90+x,40+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(51+x,51+y,60+x,60+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(91+x,51+y,100+x,80+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(81+x,71+y,90+x,90+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(71+x,81+y,80+x,100+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(41+x,71+y,50+x,80+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(41+x,91+y,70+x,100+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(31+x,101+y,40+x,110+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(91+x,91+y,100+x,100+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(111+x,121+y,120+x,130+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(101+x,131+y,110+x,140+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(41+x,21+y,70+x,50+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(21+x,31+y,40+x,90+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(11+x,51+y,20+x,80+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(71+x,31+y,80+x,80+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(41+x,51+y,50+x,60+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(41+x,81+y,50+x,90+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(61+x,51+y,70+x,60+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(81+x,41+y,90+x,70+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(91+x,111+y,110+x,130+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(101+x,101+y,110+x,110+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(111+x,111+y,120+x,120+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(91+x,41+y,100+x,50+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(101+x,51+y,110+x,80+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(91+x,81+y,100+x,90+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(81+x,91+y,90+x,100+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(91+x,101+y,100+x,110+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(101+x,91+y,110+x,100+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(111+x,101+y,120+x,110+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(31+x,91+y,40+x,100+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(41+x,101+y,70+x,110+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(41+x,61+y,50+x,70+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(81+x,111+y,90+x,130+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(91+x,131+y,100+x,140+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(101+x,141+y,120+x,150+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(111+x,131+y,130+x,140+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(121+x,111+y,130+x,130+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(61+x,81+y,70+x,90+y,DL_RGB(160,120,100),1,1);
 dl_rectangle(111+x,61+y,120+x,70+y,DL_RGB(160,120,100),1,1);
 dl_rectangle(121+x,71+y,130+x,90+y,DL_RGB(160,120,100),1,1);
 dl_rectangle(131+x,91+y,140+x,130+y,DL_RGB(160,120,100),1,1);
 dl_rectangle(141+x,101+y,150+x,110+y,DL_RGB(160,120,100),1,1);
 dl_rectangle(101+x,41+y,110+x,50+y,DL_RGB(255,170,80),1,1);
 dl_rectangle(111+x,51+y,120+x,60+y,DL_RGB(255,170,80),1,1);
 dl_rectangle(121+x,61+y,130+x,70+y,DL_RGB(255,170,80),1,1);
 dl_rectangle(131+x,71+y,140+x,90+y,DL_RGB(255,170,80),1,1);
 dl_rectangle(121+x,51+y,130+x,60+y,DL_RGB(255,140,80),1,1);
 dl_rectangle(131+x,61+y,140+x,70+y,DL_RGB(255,140,80),1,1);
 dl_rectangle(141+x,81+y,150+x,100+y,DL_RGB(255,140,80),1,1);
 dl_rectangle(141+x,111+y,150+x,130+y,DL_RGB(255,140,80),1,1);
 dl_rectangle(101+x,81+y,110+x,90+y,DL_RGB(230,230,230),1,1);
 dl_rectangle(111+x,91+y,120+x,100+y,DL_RGB(230,230,230),1,1);
 dl_rectangle(71+x,101+y,80+x,110+y,DL_RGB(220,210,130),1,1);
 dl_rectangle(61+x,121+y,80+x,130+y,DL_RGB(220,210,130),1,1);
 dl_rectangle(81+x,101+y,90+x,110+y,DL_RGB(255,240,180),1,1);
 dl_rectangle(51+x,111+y,80+x,120+y,DL_RGB(255,240,180),1,1);
 dl_rectangle(51+x,61+y,60+x,70+y,DL_C("white"),1,1);
 dl_rectangle(111+x,71+y,120+x,90+y,DL_C("white"),1,1);
 dl_rectangle(121+x,91+y,130+x,110+y,DL_C("white"),1,1);
 dl_rectangle(81+x,141+y,100+x,150+y,DL_RGB(220,210,130),1,1);
 dl_rectangle(71+x,131+y,90+x,140+y,DL_RGB(255,240,180),1,1);
 dl_rectangle(41+x,131+y,50+x,150+y,DL_C("black"),1,1);
 dl_rectangle(51+x,151+y,70+x,160+y,DL_C("black"),1,1);
 dl_rectangle(71+x,141+y,80+x,150+y,DL_C("black"),1,1);
 dl_rectangle(81+x,151+y,90+x,160+y,DL_C("black"),1,1);
 dl_rectangle(91+x,161+y,100+x,170+y,DL_C("black"),1,1);
 dl_rectangle(101+x,171+y,130+x,180+y,DL_C("black"),1,1);
 dl_rectangle(131+x,151+y,140+x,170+y,DL_C("black"),1,1);
 dl_rectangle(141+x,131+y,150+x,150+y,DL_C("black"),1,1);
 dl_rectangle(51+x,131+y,60+x,150+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(61+x,141+y,70+x,150+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(111+x,161+y,120+x,170+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(101+x,161+y,110+x,170+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(111+x,151+y,120+x,160+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(121+x,141+y,130+x,170+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(91+x,151+y,110+x,160+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(151+x,31+y,160+x,60+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(161+x,21+y,170+x,50+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(171+x,21+y,180+x,40+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(181+x,21+y,190+x,30+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(141+x,51+y,150+x,60+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(151+x,61+y,160+x,80+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(161+x,51+y,170+x,100+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(171+x,41+y,180+x,50+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(181+x,31+y,200+x,40+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(181+x,51+y,200+x,60+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(181+x,61+y,190+x,70+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(141+x,61+y,150+x,80+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(151+x,81+y,160+x,110+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(191+x,41+y,200+x,50+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(61+x,131+y,70+x,140+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(131+x,141+y,140+x,150+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(171+x,51+y,180+x,80+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(181+x,41+y,190+x,50+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(141+x,31+y,150+x,50+y,DL_C("black"),1,1);
 dl_rectangle(151+x,21+y,160+x,30+y,DL_C("black"),1,1);
 dl_rectangle(161+x,11+y,190+x,20+y,DL_C("black"),1,1);
 dl_rectangle(191+x,21+y,200+x,30+y,DL_C("black"),1,1);
 dl_rectangle(201+x,31+y,210+x,60+y,DL_C("black"),1,1);
 dl_rectangle(191+x,61+y,200+x,70+y,DL_C("black"),1,1);
 dl_rectangle(181+x,71+y,190+x,80+y,DL_C("black"),1,1);
 dl_rectangle(171+x,81+y,180+x,100+y,DL_C("black"),1,1);
 dl_rectangle(131+x,131+y,140+x,140+y,DL_C("white"),1,1);
 return ;
}
void zeni2(int x,int y){
 dl_rectangle(31+x,11+y,70+x,20+y,DL_C("black"),1,1);
 dl_rectangle(21+x,21+y,30+x,30+y,DL_C("black"),1,1);
 dl_rectangle(71+x,21+y,90+x,30+y,DL_C("black"),1,1);
 dl_rectangle(11+x,31+y,20+x,50+y,DL_C("black"),1,1);
 dl_rectangle(91+x,31+y,110+x,40+y,DL_C("black"),1,1);
 dl_rectangle(111+x,41+y,130+x,50+y,DL_C("black"),1,1);
 dl_rectangle(1+x,51+y,10+x,80+y,DL_C("black"),1,1);
 dl_rectangle(131+x,51+y,140+x,60+y,DL_C("black"),1,1);
 dl_rectangle(11+x,81+y,20+x,90+y,DL_C("black"),1,1);
 dl_rectangle(21+x,91+y,30+x,110+y,DL_C("black"),1,1);
 dl_rectangle(31+x,111+y,50+x,120+y,DL_C("black"),1,1);
 dl_rectangle(51+x,121+y,60+x,140+y,DL_C("black"),1,1);
 dl_rectangle(151+x,111+y,160+x,130+y,DL_C("black"),1,1);
 dl_rectangle(161+x,101+y,170+x,110+y,DL_C("black"),1,1);
 dl_rectangle(61+x,61+y,70+x,80+y,DL_C("black"),1,1);
 dl_rectangle(51+x,71+y,60+x,90+y,DL_C("black"),1,1);
 dl_rectangle(31+x,21+y,40+x,30+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(81+x,31+y,90+x,40+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(51+x,51+y,60+x,60+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(91+x,51+y,100+x,80+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(81+x,71+y,90+x,90+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(71+x,81+y,80+x,100+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(41+x,71+y,50+x,80+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(41+x,91+y,70+x,100+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(31+x,101+y,40+x,110+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(91+x,91+y,100+x,100+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(111+x,121+y,120+x,130+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(101+x,131+y,110+x,140+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(41+x,21+y,70+x,50+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(21+x,31+y,40+x,90+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(11+x,51+y,20+x,80+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(71+x,31+y,80+x,80+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(41+x,51+y,50+x,60+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(41+x,81+y,50+x,90+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(61+x,51+y,70+x,60+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(81+x,41+y,90+x,70+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(91+x,111+y,110+x,130+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(101+x,101+y,110+x,110+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(111+x,111+y,120+x,120+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(91+x,41+y,100+x,50+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(101+x,51+y,110+x,80+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(91+x,81+y,100+x,90+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(81+x,91+y,90+x,100+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(91+x,101+y,100+x,110+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(101+x,91+y,110+x,100+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(111+x,101+y,120+x,110+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(31+x,91+y,40+x,100+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(41+x,101+y,70+x,110+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(41+x,61+y,50+x,70+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(81+x,111+y,90+x,130+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(91+x,131+y,100+x,140+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(91+x,141+y,120+x,150+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(111+x,131+y,130+x,140+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(121+x,111+y,130+x,130+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(61+x,81+y,70+x,90+y,DL_RGB(160,120,100),1,1);
 dl_rectangle(111+x,61+y,120+x,70+y,DL_RGB(160,120,100),1,1);
 dl_rectangle(121+x,71+y,130+x,90+y,DL_RGB(160,120,100),1,1);
 dl_rectangle(131+x,91+y,140+x,140+y,DL_RGB(160,120,100),1,1);
 dl_rectangle(141+x,101+y,150+x,110+y,DL_RGB(160,120,100),1,1);
 dl_rectangle(101+x,41+y,110+x,50+y,DL_RGB(255,170,80),1,1);
 dl_rectangle(111+x,51+y,120+x,60+y,DL_RGB(255,170,80),1,1);
 dl_rectangle(121+x,61+y,130+x,70+y,DL_RGB(255,170,80),1,1);
 dl_rectangle(131+x,71+y,140+x,90+y,DL_RGB(255,170,80),1,1);
 dl_rectangle(121+x,51+y,130+x,60+y,DL_RGB(255,140,80),1,1);
 dl_rectangle(131+x,61+y,140+x,70+y,DL_RGB(255,140,80),1,1);
 dl_rectangle(141+x,81+y,150+x,100+y,DL_RGB(255,140,80),1,1);
 dl_rectangle(141+x,111+y,150+x,130+y,DL_RGB(255,140,80),1,1);
 dl_rectangle(101+x,81+y,110+x,90+y,DL_RGB(230,230,230),1,1);
 dl_rectangle(111+x,91+y,120+x,100+y,DL_RGB(230,230,230),1,1);
 dl_rectangle(71+x,101+y,80+x,110+y,DL_RGB(220,210,130),1,1);
 dl_rectangle(61+x,121+y,80+x,130+y,DL_RGB(220,210,130),1,1);
 dl_rectangle(81+x,101+y,90+x,110+y,DL_RGB(255,240,180),1,1);
 dl_rectangle(51+x,111+y,80+x,120+y,DL_RGB(255,240,180),1,1);
 dl_rectangle(51+x,61+y,60+x,70+y,DL_C("white"),1,1);
 dl_rectangle(111+x,71+y,120+x,90+y,DL_C("white"),1,1);
 dl_rectangle(121+x,91+y,130+x,110+y,DL_C("white"),1,1);
 dl_rectangle(71+x,141+y,90+x,150+y,DL_RGB(220,210,130),1,1);
 dl_rectangle(61+x,131+y,90+x,140+y,DL_RGB(255,240,180),1,1);
 dl_rectangle(81+x,151+y,100+x,160+y,DL_RGB(255,240,180),1,1);
 dl_rectangle(41+x,141+y,50+x,160+y,DL_C("black"),1,1);
 dl_rectangle(51+x,161+y,70+x,170+y,DL_C("black"),1,1);
 dl_rectangle(71+x,151+y,80+x,160+y,DL_C("black"),1,1);
 dl_rectangle(81+x,161+y,90+x,170+y,DL_C("black"),1,1);
 dl_rectangle(91+x,171+y,100+x,180+y,DL_C("black"),1,1);
 dl_rectangle(101+x,181+y,130+x,190+y,DL_C("black"),1,1);
 dl_rectangle(131+x,161+y,140+x,180+y,DL_C("black"),1,1);
 dl_rectangle(141+x,131+y,150+x,160+y,DL_C("black"),1,1);
 dl_rectangle(51+x,141+y,60+x,160+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(61+x,151+y,70+x,160+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(111+x,171+y,120+x,180+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(101+x,171+y,110+x,180+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(111+x,151+y,120+x,170+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(121+x,141+y,130+x,180+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(101+x,151+y,110+x,160+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(91+x,161+y,110+x,170+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(151+x,21+y,160+x,50+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(161+x,11+y,170+x,40+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(171+x,11+y,180+x,30+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(181+x,11+y,190+x,20+y,DL_RGB(70,210,250),1,1);
 dl_rectangle(141+x,51+y,150+x,60+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(151+x,51+y,160+x,80+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(161+x,41+y,170+x,100+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(171+x,31+y,180+x,40+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(181+x,21+y,200+x,30+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(181+x,41+y,200+x,50+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(181+x,51+y,190+x,60+y,DL_RGB(90,200,180),1,1);
 dl_rectangle(141+x,61+y,150+x,80+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(151+x,81+y,160+x,110+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(191+x,31+y,200+x,40+y,DL_RGB(90,130,110),1,1);
 dl_rectangle(61+x,141+y,70+x,150+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(131+x,151+y,140+x,160+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(171+x,41+y,180+x,70+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(181+x,31+y,190+x,40+y,DL_RGB(60,100,90),1,1);
 dl_rectangle(141+x,21+y,150+x,50+y,DL_C("black"),1,1);
 dl_rectangle(151+x,11+y,160+x,20+y,DL_C("black"),1,1);
 dl_rectangle(161+x,1+y,190+x,10+y,DL_C("black"),1,1);
 dl_rectangle(191+x,11+y,200+x,20+y,DL_C("black"),1,1);
 dl_rectangle(201+x,21+y,210+x,50+y,DL_C("black"),1,1);
 dl_rectangle(191+x,51+y,200+x,60+y,DL_C("black"),1,1);
 dl_rectangle(181+x,61+y,190+x,70+y,DL_C("black"),1,1);
 dl_rectangle(171+x,71+y,180+x,100+y,DL_C("black"),1,1);
 dl_rectangle(131+x,141+y,140+x,150+y,DL_C("white"),1,1);
 return ;
}
void zeni0(int x,int y){
 dl_stop();
 dl_clear(DL_C("white"));
 zeni2(x,y-10);
 ball(x,y+200);
 dl_text("50%", 10,40,1.5,DL_C("black"),3);
 dl_text("Catching", 10,80,1.5,DL_C("black"),3);
 dl_text("Rate", 10,120,1.5,DL_C("black"),3);
 dl_text("[Tap Ball]", 10,260,1.5,DL_C("black"),3);
 dl_text("Get", 10,350,1.5,DL_C("black"),3);
 dl_text("Chance", 10,400,1.5,DL_C("black"),3);
 dl_resume();
 dl_wait(0.2);
 dl_stop();
 dl_clear(DL_C("white"));
 zeni1(x,y);
 ball(x,y+200);
 dl_text("50%", 10,40,1.5,DL_C("black"),3);
 dl_text("Catching", 10,80,1.5,DL_C("black"),3);
 dl_text("Rate", 10,120,1.5,DL_C("black"),3);
 dl_text("[Tap Ball]", 10,260,1.5,DL_C("black"),3);
 dl_text("Get", 10,350,1.5,DL_C("black"),3);
 dl_text("Chance", 10,400,1.5,DL_C("black"),3);
 dl_resume();
 dl_wait(0.2);

 return ;

}

void ball(int x, int y){

 dl_rectangle(1+x,81+y,10+x,120+y,DL_C("black"),1,1);
 dl_rectangle(11+x,121+y,20+x,140+y,DL_C("black"),1,1);
 dl_rectangle(21+x,141+y,30+x,160+y,DL_C("black"),1,1);
 dl_rectangle(31+x,161+y,40+x,170+y,DL_C("black"),1,1);
 dl_rectangle(41+x,171+y,60+x,180+y,DL_C("black"),1,1);
 dl_rectangle(61+x,181+y,80+x,190+y,DL_C("black"),1,1);
 dl_rectangle(81+x,191+y,120+x,200+y,DL_C("black"),1,1);
 dl_rectangle(121+x,181+y,140+x,190+y,DL_C("black"),1,1);
 dl_rectangle(141+x,171+y,160+x,180+y,DL_C("black"),1,1);
 dl_rectangle(161+x,161+y,170+x,170+y,DL_C("black"),1,1);
 dl_rectangle(171+x,141+y,180+x,160+y,DL_C("black"),1,1);
 dl_rectangle(181+x,121+y,190+x,140+y,DL_C("black"),1,1);
 dl_rectangle(191+x,81+y,200+x,120+y,DL_C("black"),1,1);
 dl_rectangle(181+x,61+y,190+x,80+y,DL_C("black"),1,1);
 dl_rectangle(171+x,41+y,180+x,60+y,DL_C("black"),1,1);
 dl_rectangle(161+x,31+y,170+x,40+y,DL_C("black"),1,1);
 dl_rectangle(141+x,21+y,160+x,30+y,DL_C("black"),1,1);
 dl_rectangle(121+x,11+y,140+x,20+y,DL_C("black"),1,1);
 dl_rectangle(81+x,1+y,120+x,10+y,DL_C("black"),1,1);
 dl_rectangle(61+x,11+y,80+x,20+y,DL_C("black"),1,1);
 dl_rectangle(41+x,21+y,60+x,30+y,DL_C("black"),1,1);
 dl_rectangle(31+x,31+y,40+x,40+y,DL_C("black"),1,1);
 dl_rectangle(21+x,41+y,30+x,60+y,DL_C("black"),1,1);
 dl_rectangle(11+x,61+y,20+x,80+y,DL_C("black"),1,1);
 dl_rectangle(11+x,101+y,20+x,120+y,DL_C("black"),1,1);
 dl_rectangle(21+x,111+y,30+x,130+y,DL_C("black"),1,1);
 dl_rectangle(31+x,121+y,50+x,140+y,DL_C("black"),1,1);
 dl_rectangle(51+x,111+y,60+x,150+y,DL_C("black"),1,1);
 dl_rectangle(61+x,101+y,100+x,110+y,DL_C("black"),1,1);
 dl_rectangle(61+x,151+y,100+x,160+y,DL_C("black"),1,1);
 dl_rectangle(101+x,111+y,110+x,150+y,DL_C("black"),1,1);
 dl_rectangle(111+x,121+y,140+x,140+y,DL_C("black"),1,1);
 dl_rectangle(141+x,111+y,170+x,130+y,DL_C("black"),1,1);
 dl_rectangle(171+x,101+y,180+x,120+y,DL_C("black"),1,1);
 dl_rectangle(181+x,91+y,190+x,110+y,DL_C("black"),1,1);
 dl_rectangle(191+x,81+y,200+x,100+y,DL_C("black"),1,1);
 dl_rectangle(21+x,131+y,30+x,140+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(61+x,111+y,70+x,120+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(61+x,141+y,70+x,150+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(91+x,111+y,100+x,120+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(91+x,141+y,100+x,150+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(111+x,141+y,120+x,150+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(141+x,131+y,150+x,140+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(161+x,131+y,170+x,160+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(171+x,121+y,180+x,140+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(151+x,151+y,160+x,170+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(141+x,161+y,150+x,170+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(121+x,171+y,140+x,180+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(81+x,181+y,120+x,190+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(181+x,111+y,190+x,120+y,DL_RGB(150,150,150),1,1);
 dl_rectangle(151+x,131+y,160+x,150+y,DL_RGB(225,225,225),1,1);
 dl_rectangle(141+x,141+y,150+x,160+y,DL_RGB(225,225,225),1,1);
 dl_rectangle(121+x,141+y,140+x,170+y,DL_RGB(225,225,225),1,1);
 dl_rectangle(101+x,151+y,120+x,180+y,DL_RGB(225,225,225),1,1);
 dl_rectangle(61+x,161+y,100+x,180+y,DL_RGB(225,225,225),1,1);
 dl_rectangle(41+x,141+y,50+x,150+y,DL_RGB(225,225,225),1,1);
 dl_rectangle(31+x,151+y,40+x,160+y,DL_RGB(225,225,225),1,1);
 dl_rectangle(41+x,161+y,50+x,170+y,DL_RGB(225,225,225),1,1);
 dl_rectangle(51+x,151+y,60+x,160+y,DL_RGB(225,225,225),1,1);
 dl_rectangle(61+x,121+y,70+x,140+y,DL_RGB(225,225,225),1,1);
 dl_rectangle(71+x,111+y,90+x,120+y,DL_RGB(225,225,225),1,1);
 dl_rectangle(91+x,121+y,100+x,140+y,DL_RGB(225,225,225),1,1);
 dl_rectangle(71+x,141+y,90+x,150+y,DL_RGB(225,225,225),1,1);
 dl_rectangle(11+x,91+y,20+x,100+y,DL_RGB(255,10,10),1,1);
 dl_rectangle(21+x,101+y,30+x,110+y,DL_RGB(255,10,10),1,1);
 dl_rectangle(31+x,111+y,50+x,120+y,DL_RGB(255,10,10),1,1);
 dl_rectangle(111+x,111+y,140+x,120+y,DL_RGB(255,10,10),1,1);
 dl_rectangle(121+x,101+y,170+x,110+y,DL_RGB(255,10,10),1,1);
 dl_rectangle(141+x,91+y,180+x,100+y,DL_RGB(255,10,10),1,1);
 dl_rectangle(151+x,81+y,190+x,90+y,DL_RGB(255,10,10),1,1);
 dl_rectangle(151+x,61+y,180+x,80+y,DL_RGB(255,10,10),1,1);
 dl_rectangle(151+x,41+y,170+x,60+y,DL_RGB(255,10,10),1,1);
 dl_rectangle(141+x,31+y,160+x,50+y,DL_RGB(255,10,10),1,1);
 dl_rectangle(131+x,21+y,140+x,30+y,DL_RGB(255,10,10),1,1);
 dl_rectangle(11+x,81+y,20+x,90+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(21+x,61+y,30+x,100+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(31+x,41+y,40+x,110+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(41+x,31+y,50+x,110+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(51+x,31+y,60+x,40+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(51+x,61+y,60+x,110+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(61+x,21+y,80+x,30+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(61+x,71+y,80+x,100+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(81+x,11+y,90+x,40+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(81+x,61+y,90+x,100+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(91+x,11+y,120+x,100+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(121+x,21+y,130+x,100+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(131+x,31+y,140+x,100+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(141+x,51+y,150+x,90+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(101+x,101+y,120+x,110+y,DL_RGB(240,90,80),1,1);
 dl_rectangle(61+x,31+y,80+x,40+y,DL_RGB(255,210,180),1,1);
 dl_rectangle(51+x,41+y,60+x,60+y,DL_RGB(255,210,180),1,1);
 dl_rectangle(81+x,41+y,90+x,60+y,DL_RGB(255,210,180),1,1);
 dl_rectangle(61+x,61+y,80+x,70+y,DL_RGB(255,210,180),1,1);
 dl_rectangle(61+x,41+y,80+x,60+y,DL_C("white"),1,1);
 dl_rectangle(71+x,121+y,90+x,140+y,DL_C("white"),1,1);
 dl_rectangle(31+x,141+y,40+x,150+y,DL_C("white"),1,1);
 dl_rectangle(41+x,151+y,50+x,160+y,DL_C("white"),1,1);
 dl_rectangle(51+x,161+y,60+x,170+y,DL_C("white"),1,1);
 return ;
}

void full(){
 dl_stop();
 dl_clear(DL_C("white"));
 zeni1(200,50);
 fushigi1(10,200);
 hito2(400,190);
 dl_text("Space:Exit", 330,430,1.5,DL_C("black"),3);
 dl_resume();
 dl_wait(0.2);
 dl_stop();
 dl_clear(DL_C("white"));
 zeni2(200,40);
 fushigi1(10,190);
 hito1(400,180);
 dl_text("Space:Exit", 330,430,1.5,DL_C("black"),3);
 dl_resume();
 dl_wait(0.2);
 return ;
}
