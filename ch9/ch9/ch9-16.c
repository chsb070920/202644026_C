#include <stdio.h>

int main(){
    int cnt[11] = {0}, n, i;
    while (scanf("%d", &n) == 1){
        if (n == 0){
            break;
        }
        cnt[n / 10]++;
    }
    for (i = 10; i >= 0; i--){
        if (cnt[i] > 0){
            printf("%d : %d\n", i * 10, cnt[i]);
        }
    }
    return 0;
}
