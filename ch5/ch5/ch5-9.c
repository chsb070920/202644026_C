#include <stdio.h>

int main(){
    int n, max = 0, min = 101;
    while (scanf("%d", &n) == 1){
        if (n == 0){
            break;
        }
        if (n >= 1 && n <= 100){
            if (n > max){
                max = n;
            }
            if (n < min){
                min = n;
            }
        }
    }
    printf("MAX = %d\n", max);
    printf("MIN = %d", min);
    return 0;
}
