#include <stdio.h>

int main(){
    int h, w, result;
    scanf("%d %d", &h, &w);
    result = w + 100 - h;
    printf("%d\n", result);
    if (result > 0){
        printf("Obesity\n");
        printf("Need control");
    }
    return 0;
}