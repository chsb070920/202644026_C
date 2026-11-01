#include <stdio.h>

int main(){
    int n;
    while (1){
        printf("1. Input\n");
        printf("2. Output\n");
        printf("3. Delete\n");
        printf("4. Finish\n");
        printf("Enter number: ");
        if (scanf("%d", &n) != 1){
            break;
        }
        if (n == 1){
            printf("\nYou selected Input.\n\n");
        }
        else if (n == 2){
            printf("\nYou selected Output.\n\n");
        }
        else if (n == 3){
            printf("\nYou selected Delete.\n\n");
        }
        else if (n == 4){
            printf("\nYou selected Finish.");
            break;
        }
        else {
            printf("\nWrong input.\n\n");
        }
    }
    return 0;
}
