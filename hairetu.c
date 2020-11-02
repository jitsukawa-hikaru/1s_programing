#include <stdio.h>

int main(){
 int i, j, s;
 int x[10];
 printf("10個の整数を入力して下さい\n");
 for(i=0; i<10; i++){
  scanf("%d", &x[i]);
 }
 for(i=0; i<10; i++){
  for(j=i+1; j<10; j++){
   if(x[i]>x[j]){
    s = x[i];
    x[i] = x[j];
    x[j] = s;
   }
  }
 }
 printf("昇順に並び替えると\n");
 for (i=0; i<9; i++){
  printf("%d,", x[i]);
 }
 printf("%d\n", x[9]);
 return 0;
}

