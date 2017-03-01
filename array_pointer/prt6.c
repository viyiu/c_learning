#include <stdio.h>
void cp_arr(double arr[][5], const double target[5],  int n);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double arr[5][5];

    cp_arr(arr, source, 5);
    
    return 0;
}

void cp_arr(double arr[][5], const double source[5], int n)
{
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            arr[j][i] = source[i];
            printf("%6.2f\n", arr[j][i]);
        }

    }
}
