#include <stdio.h>

int main(){
    int a, b, i, d, step;
    scanf("%d %d", &a, &b);
    step = a <= b ? 1 : -1;
    for (i = 1; i <= 9; i++){
        for (d = a; d != b + step; d += step){
            if (d != a){
                printf("   ");
            }
            printf("%d * %d = %2d", d, i, d * i);
        }
        printf("\n");
    }
    return 0;
}
