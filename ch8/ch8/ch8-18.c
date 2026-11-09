#include <stdio.h>

int main(void)
{
    double a[6];
    double sum = 0;
    int i;

    for (i = 0; i < 6; i++) {
        scanf("%lf", &a[i]);
        sum += a[i];
    }
    printf("%.1f\n", sum / 6);
    return 0;
}
