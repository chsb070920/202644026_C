#include <stdio.h>

typedef struct Person {
    char name[21];
    int height;
} Person;

int main(){
    Person p[5];
    int i, low = 0;
    for (i = 0; i < 5; i++){
        scanf("%s %d", p[i].name, &p[i].height);
        if (p[i].height < p[low].height){
            low = i;
        }
    }
    printf("%s %d", p[low].name, p[low].height);
    return 0;
}
