#include <stdio.h>
void cp_arr (double * source, double target1[3], int n );

int main(void)
{
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    int n = 7;
    double target1[3];

    cp_arr(source + 2, target1, 3);
    return 0;
}

void cp_arr(double  (source + 2), double target1[3], int n)
{
    for (int i = 0; i < n; i++) {
        target1[i] = *(source + 2 + i);
        printf("%6.1f\n", target1[i]);
    }
}
