#include <stdio.h>
#include <string.h>

typedef struct Person {
    char name[101];
    int age;
} Person;

int main(){
    Person me, friendP;
    strcpy(me.name, "Yejun");
    me.age = 12;
    scanf("%s %d", friendP.name, &friendP.age);
    printf("Your name: %s, age: %d\n", me.name, me.age);
    printf("Friend's name: %s, age: %d", friendP.name, friendP.age);
    return 0;
}
