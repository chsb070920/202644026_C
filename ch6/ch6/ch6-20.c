#include <stdio.h>

int main(){
    int n, i, x, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &x);
        sum += x;
    }
    printf("%.2f", (double)sum / n);
    return 0;
}
