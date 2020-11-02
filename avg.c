#include <stdio.h>

int main (void) {
  int a = 80;
  int b = 90;
  int c = 70;
  int sum = a + b + c;
  float avg = sum / 3;

  printf("合計点: %d\n", sum);
  printf("平均点: %.1f\n", avg);

  return 0;
}
