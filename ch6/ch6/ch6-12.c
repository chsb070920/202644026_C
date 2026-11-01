#include <stdio.h>

int main(){
    int n, i, s, sum = 0;
    double avg;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &s);
        sum += s;
    }
    avg = (double)sum / n;
    printf("avg : %.1f\n", avg);
    if (avg >= 80){
        printf("pass");
    }
    else {
        printf("fail");
    }
    return 0;
}
