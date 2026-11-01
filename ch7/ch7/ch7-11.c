#include <stdio.h>

int main(){
    int n, i, j, num = 1, ch = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n + 1; j++){
            if (j > 0){
                printf(" ");
            }
            if (j < n - i){
                printf("%d", num++);
            }
            else {
                printf("%c", 'A' + ch % 26);
                ch++;
            }
        }
        printf("\n");
    }
    return 0;
}
