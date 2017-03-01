#include <stdio.h>

int main(void)
{
    char * p1 = "Klingon";
    printf("%s\n", p1);
    p1[0] = 'F';
    printf("%ss!", "Klingon");
    return 0;
}
