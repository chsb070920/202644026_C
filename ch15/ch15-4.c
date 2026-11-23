#include <stdio.h>
#include <string.h>

typedef struct School {
    char name[101];
    int grade;
} School;

int main(){
    School a, b;
    strcpy(a.name, "Jejuelementary");
    a.grade = 6;
    scanf("%s %d", b.name, &b.grade);
    printf("%d grade in %s School\n", a.grade, a.name);
    printf("%d grade in %s School", b.grade, b.name);
    return 0;
}
