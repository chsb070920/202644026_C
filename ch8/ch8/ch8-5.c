#include <stdio.h>

int main(void)
{
    int a[100];
    int n = 0;
    int i;
    int first = 1;

    while (n < 100) {
        scanf("%d", &a[n]);
        if (a[n] == 0)
            break;
        n++;
    }
    for (i = 1; i < n; i += 2) {
        if (!first)
            printf(" ");
        printf("%d", a[i]);
        first = 0;
    }
    printf("\n");
    return 0;
}
