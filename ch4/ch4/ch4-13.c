#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    switch (n){
        case 1:
            printf("You selected ADD.");
            break;
        case 2:
            printf("You selected EDIT.");
            break;
        case 3:
            printf("You selected DEL.");
            break;
    }
    return 0;
}