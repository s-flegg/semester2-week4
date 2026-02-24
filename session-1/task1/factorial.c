
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    long int f[20];
    f[0] = 1;
    for (int i=1; i<20; i++) {
      f[i] = i * f[i-1];
      printf("Index %d has value %li\n", i, f[i]);
    }

    return 0;
 }
