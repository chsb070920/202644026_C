#include <stdio.h>

int main(void)
{
    int a[10];
    int i;
    int sum = 0, odd = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if (i % 2 == 1)
            sum += a[i];
        else
            odd += a[i];
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", odd / 5.0);
    return 0;
}
