#include <stdio.h>
void max_return(const double arr[]);

int main(void)
{
    double arr[5] = {2.3, 5.6, 5.4, 2.1, 3.2};
    
    max_return(arr);

    return 0;
}

void max_return(const double arr[])
{
    double tmp;
    double a;
    
    tmp = arr[0];
    for (int i = 0; i < 5; i++) {
        if (tmp < arr[i]) {
            tmp = arr[i];
            printf("%8.2f\n", tmp);
        }
    }

    printf("%f\n", tmp);
}
