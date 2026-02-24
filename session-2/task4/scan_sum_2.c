
#include <stdio.h>

int main( void ) {

    // define suitable data
    char buff[100];
    int a, b, count;
    char s[10];

    fgets(buff, 100, stdin);
    count = sscanf(buff, "%d%s%d", &a, &*s, &b);

    printf("Read %d values which were %d and %d\n", count, a, b);
    return 0;
}