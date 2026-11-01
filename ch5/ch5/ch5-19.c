#include <stdio.h>

int main(){
    double b, h;
    char c;
    while (1){
        scanf("%lf %lf", &b, &h);
        printf("Triangle area = %.1f\n", b * h / 2);
        printf("Continue? ");
        scanf(" %c", &c);
        if (c != 'Y' && c != 'y'){
            break;
        }
    }
    return 0;
}
