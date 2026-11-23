#include <stdio.h>

typedef struct Student {
    char name[21];
    int score;
} Student;

int main(){
    Student s[5];
    int i, best = 0;
    for (i = 0; i < 5; i++){
        scanf("%s %d", s[i].name, &s[i].score);
        if (s[i].score > s[best].score){
            best = i;
        }
    }
    printf("%s %d", s[best].name, s[best].score);
    return 0;
}
