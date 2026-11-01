#include <stdio.h>

int main(){
    int n, cnt = 0, sum = 0;
    double avg = 0;
    while (scanf("%d", &n) == 1){
        if (n == 0){
            break;
        }
        cnt++;
        sum += n;
    }
    if (cnt > 0){
        avg = (double)sum / cnt;
    }
    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    printf("avg = %.2f", avg);
    return 0;
}
