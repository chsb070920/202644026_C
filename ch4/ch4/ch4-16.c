#include <stdio.h>

int main(){
    double g;
    scanf("%lf", &g);
    if (g >= 4.0){
        printf("scholarship");
    }
    else if (g >= 3.0){
        printf("next semester");
    }
    else if (g >= 2.0){
        printf("seasonal semester");
    }
    else {
        printf("retake");
    }
    return 0;
}
