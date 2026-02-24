
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;

    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */

    // allocate
    a = calloc(n, sizeof(int *));
    for (int i=0; i<n; i++) {
        a[i] = calloc(n, sizeof(int));
    }
    b = calloc(n, sizeof(int));
    c = calloc(n, sizeof(int));

    // init
    for (int i=0; i<n; i++) {
        b[i] = 1;
        for (int j=0; j<n; j++) {
            a[i][j] = 1;
        }
    }

    // compute
    for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
         c[i] += a[i][j] * b[j];
      }
    }

    // print
    printf("[ ");
    for (int i=0; i<n; i++) {
      printf("%f, ", c[i]);
    }
    printf("]\n");

    // deallocate
    free(a);
    free(b);
    free(c);
    
    return 0;
 }
