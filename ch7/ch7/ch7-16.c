#include <stdio.h>

int main(){
    int n, i, j, ch = 0, dg = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (j > 0){
                printf(" ");
            }
            if (j < n - i){
                printf("%c", 'A' + ch % 26);
                ch++;
            }
            else {
                printf("%d", dg % 10);
                dg++;
            }
        }
        printf("\n");
    }
    return 0;
}
