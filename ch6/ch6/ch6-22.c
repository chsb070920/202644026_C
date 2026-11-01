#include <stdio.h>

int main(){
    int a, b, t, i, cnt = 0, sum = 0;
    double avg = 0;
    scanf("%d %d", &a, &b);
    if (a > b){
        t = a;
        a = b;
        b = t;
    }
    for (i = a; i <= b; i++){
        if (i % 3 == 0 || i % 5 == 0){
            sum += i;
            cnt++;
        }
    }
    if (cnt > 0){
        avg = (double)sum / cnt;
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f", avg);
    return 0;
}
