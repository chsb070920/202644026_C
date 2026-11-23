#include <stdio.h>
#include <string.h>

typedef struct Score {
    char name[21];
    int kor;
    int eng;
} Score;

Score plus(Score a, Score b)
{
    Score r;
    strcpy(r.name, "Total");
    r.kor = a.kor + b.kor;
    r.eng = a.eng + b.eng;
    return r;
}

int main(){
    Score a, b, t;
    scanf("%s %d %d", a.name, &a.kor, &a.eng);
    scanf("%s %d %d", b.name, &b.kor, &b.eng);
    t = plus(a, b);
    printf("%s %d %d\n", a.name, a.kor, a.eng);
    printf("%s %d %d\n", b.name, b.kor, b.eng);
    printf("%s %d %d", t.name, t.kor, t.eng);
    return 0;
}
