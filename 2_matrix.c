// Not ready

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
int main() {
    int i, r, j;
    unsigned int seed = 300;
 
    srand(seed);
 
    while (j <= 100000000000) {
        j++;
        r = 0 + 10 * rand() / 1000000000;
        printf("%i", r);
        if (i % 79 == 0) {
            printf("\n");
            usleep(1000000);
        }
    }
    return 0;
}
