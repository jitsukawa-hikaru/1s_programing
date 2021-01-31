#include <stdio.h>

int main (void) {
  int v1 = 10; 
  int v2 = 20;
  int *ptr;

  ptr = &v1;
  printf ("v1@%p = %d, v2@%p = %d, ptr = %p\n", &v1, v1, &v2, v2, ptr);

  *ptr = 100;
  printf ("v1@%p = %d, v2@%p = %d, ptr = %p\n", &v1, v1, &v2, v2, ptr);

  ptr = &v2;
  printf ("v1@%p = %d, v2@%p = %d, ptr = %p\n", &v1, v1, &v2, v2, ptr);

  *ptr = 200;
  printf ("v1@%p = %d, v2@%p = %d, ptr = %p\n", &v1, v1, &v2, v2, ptr);

  return 0;
}
