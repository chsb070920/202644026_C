#include <stdio.h>

typedef struct Person {
    char name[21];
    int age;
} Person;

int main(){
    Person p[3];
    int i;
    for (i = 0; i < 3; i++){
        scanf("%s %d", p[i].name, &p[i].age);
    }
    for (i = 0; i < 3; i++){
        printf("Name : %s\n", p[i].name);
        printf("Age : %d\n", p[i].age);
    }
    return 0;
}
