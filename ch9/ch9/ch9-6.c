#include <stdio.h>

int main(){
    int a[1000], n, i = 1;
    scanf("%d", &n);
    a[0] = 100;
    a[1] = n;
    while (a[i] >= 0){
        a[i + 1] = a[i - 1] - a[i];
        i++;
    }
    int k;
    for (k = 0; k <= i; k++){
        if (k > 0){
            printf(" ");
        }
        printf("%d", a[k]);
    }
    return 0;
}
