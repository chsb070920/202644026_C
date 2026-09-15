#include <stdio.h>

int main(){
    
    int a,b;
    int temp;

    printf("점수입력 : ");
    scanf("%d", &a);
    printf("점수입력 : ");
    scanf("%d", &b);

    temp = b;
    while(temp !=0)
    {
        printf("%d", a*(temp%10));
        temp /= 10;

    }
    printf("%d", a*b);

}
