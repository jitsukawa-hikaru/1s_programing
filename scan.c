#include <stdio.h>

int main(void) {
	int l, m, n, r, x;
      float h;
  h=0; l=0; m=100000; n=0; r=0; x=0;
	
	while (1) {
  	r = scanf("%d", &x);
  	if (x > l) {
        l = x ;
        }
      if (x < m) {
        m = x ;
        }
      if (r <= 0)
  	  break;
      h += x;
      n ++;
  	printf ("x = %d\n", x);
  }
  h /= n;
  printf ("最大値%d\n", l);
  printf ("最小値%d\n", m);
  printf ("平均値%.3f\n", h);

	return 0;
}
