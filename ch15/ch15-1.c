#include <stdio.h>

typedef struct Person {
    char name[101];
    int age;
} Person;

int main(){
    Person p;
    scanf("%s", p.name);
    scanf("%d", &p.age);
    printf("Your name is %s and you are %d years old.", p.name, p.age);
    return 0;
}
