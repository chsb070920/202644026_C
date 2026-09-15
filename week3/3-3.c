#include <stdio.h>

int main()
{
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    printf("%s\n", (num % 2 == 0) ? "even" : "odd");

}