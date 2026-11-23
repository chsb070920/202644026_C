#include <stdio.h>

typedef struct Student {
    char name[21];
    int score[3];
    int total;
} Student;

void input(Student s[], int n)
{
    int i;
    for (i = 0; i < n; i++){
        scanf("%s %d %d %d", s[i].name, &s[i].score[0], &s[i].score[1], &s[i].score[2]);
        s[i].total = s[i].score[0] + s[i].score[1] + s[i].score[2];
    }
}

void sort(Student s[], int n)
{
    int i, j;
    Student t;
    for (i = 1; i < n; i++){
        t = s[i];
        j = i - 1;
        while (j >= 0 && s[j].total < t.total){
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = t;
    }
}

void output(Student s[], int n)
{
    int i;
    for (i = 0; i < n; i++){
        printf("%s %d %d %d %d\n", s[i].name, s[i].score[0], s[i].score[1], s[i].score[2], s[i].total);
    }
}

int main(){
    Student s[10];
    int n;
    scanf("%d", &n);
    input(s, n);
    sort(s, n);
    output(s, n);
    return 0;
}
