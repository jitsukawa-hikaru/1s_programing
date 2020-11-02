#include <drawlib.h>
#include <stdlib.h>
#include <stdio.h>
#define n 10

int main(void) {
 int values[n] = {82, 15, 32, 75, 24, 10, 42, 68, 93, 67};
 int i, j, s;
 int x1, y1, x2, y2, k;

 dl_initialize(1.0);

 while(1){
  for (i = 0; i < 9; i++){
   for (j = i+1; j < 10; j++){
    if(values[i]>values[j]){
     s = values[i];
     values[i] = values[j];
     values[j] = s;
     }

    dl_stop();
    dl_clear(DL_C("white"));
    for(k = 0; k < 10; k++){
     x1 = k * 60 + 20;
     x2 = x1 + 50;
     y1 = 440;
     y2 = 440 - values[k] * 4;
     dl_rectangle(x1, y1, x2, y2, 
     DL_RGB(100, 100, 56 + 2 * values[k]), 1, 1);
     }
    dl_resume();
    dl_wait(0.2);
   }
  }
  for (i = 0; i < 10; i++) {
   values[i] = random() % 90 + 10;
  }
 }
 while(1) {
  dl_wait(1.0);	
 }
 return 0;
}
