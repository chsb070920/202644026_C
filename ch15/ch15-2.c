#include <stdio.h>

typedef struct Student {
    char name[21];
    char school[21];
    int grade;
} Student;

int main(){
    Student s;
    scanf("%s %s %d", s.name, s.school, &s.grade);
    printf("Name : %s\n", s.name);
    printf("School : %s\n", s.school);
    printf("Grade : %d", s.grade);
    return 0;
}
