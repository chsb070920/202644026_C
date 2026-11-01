#include <stdio.h>

int main(){
    int n, cnt = 0, sum = 0;
    double avg = 0;
    while (scanf("%d", &n) == 1){
        if (n < 0 || n > 100){
            break;
        }
        cnt++;
        sum += n;
    }
    if (cnt > 0){
        avg = (double)sum / cnt;
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f", avg);
    return 0;
}
