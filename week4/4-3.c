#include <stdio.h>

int printNumbers(int n) {
    if (n < 1) {          
        return 0;
    }
    printNumbers(n - 1);  
    printf("%d\n", n);   
    return 0;             
}

int main() {
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    printNumbers(n);

    return 0;
}