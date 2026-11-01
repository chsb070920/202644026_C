#include <stdio.h>

int main(){
    int n, i, j, k = 0;
    scanf("%d", &n);
    for (i = n; i >= 1; i--){
        for (j = 0; j < i; j++){
            printf("%c", 'A' + k % 26);
            k++;
        }
        printf("\n");
    }
    return 0;
}
