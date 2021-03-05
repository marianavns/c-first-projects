// teste de mesa

#include <stdio.h>
#include <stdlib.h>

int main () {
    int y, x = 1, total = 0;

    while ( x <= 10) {
        y = x * x;
        total += y;
        x++;
    }

    printf("%d", total);
return 0;
}