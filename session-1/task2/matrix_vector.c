
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];

    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */

    // initialise
    for (int i=0; i<4; i++) {
      b[i] = 1;
      for (int j=0; j<4; j++) {
         a[i][j] = 1;
      }
    }

    // calc product
    for (int i=0; i<4; i++) {
      for (int j=0; j<4; j++) {
         c[i] += a[i][j] * b[j];
      }
    }

    // print output
    printf("[ ");
    for (int i=0; i<4; i++) {
      printf("%f, ", c[i]);
    }
    printf("]\n");
    return 0;
 }
