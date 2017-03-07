#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int i, time;

    if (argc < 2 || (time = atoi(argv[1])) < 1) {
        printf("Usage: %s positive-number\n", argv[0]);
    } else {
        for (i = 0; i < time; i++) {
            puts("Hello, good looking");
        }
    }

    return 0;
}
