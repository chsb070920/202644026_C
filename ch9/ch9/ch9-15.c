#include <stdio.h>

int main(){
    int cnt[7] = {0}, n, i;
    for (i = 0; i < 10; i++){
        scanf("%d", &n);
        cnt[n]++;
    }
    for (i = 1; i <= 6; i++){
        printf("%d : %d\n", i, cnt[i]);
    }
    return 0;
}
