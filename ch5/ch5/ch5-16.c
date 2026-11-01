#include <stdio.h>

int main(){
    int n, odd = 0, even = 0;
    while (scanf("%d", &n) == 1){
        if (n == 0){
            break;
        }
        if (n % 2 == 0){
            even++;
        }
        else {
            odd++;
        }
    }
    printf("odd : %d\n", odd);
    printf("even : %d", even);
    return 0;
}
