
#include <stdio.h>

int main( void ) {

    // define suitable data
    char buff[100];
    int a, b, count;
    char s[10];

    fgets(buff, 100, stdin);
    count = sscanf(buff, "%d%s%d", &a, &*s, &b);

    printf("Read %d values forming calculation %d %s %d\n", count, a, s, b);
    return 0;
}