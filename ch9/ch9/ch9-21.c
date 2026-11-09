#include <stdio.h>

int main(){
    int a[4][2], i, j, total = 0;
    int rs[4] = {0}, cs[2] = {0};
    for (i = 0; i < 4; i++){
        for (j = 0; j < 2; j++){
            scanf("%d", &a[i][j]);
            rs[i] += a[i][j];
            cs[j] += a[i][j];
            total += a[i][j];
        }
    }
    for (i = 0; i < 4; i++){
        if (i > 0){
            printf(" ");
        }
        printf("%d", rs[i] / 2);
    }
    printf("\n");
    for (j = 0; j < 2; j++){
        if (j > 0){
            printf(" ");
        }
        printf("%d", cs[j] / 4);
    }
    printf("\n");
    printf("%d", total / 8);
    return 0;
}
