#include <stdio.h>

typedef struct Body {
    int height;
    double weight;
} Body;

Body makeStudent(Body dad, Body mom)
{
    Body s;
    s.height = (dad.height + mom.height) / 2 + 5;
    s.weight = (dad.weight + mom.weight) / 2 - 4.5;
    return s;
}

int main(){
    Body dad, mom, s;
    scanf("%d %lf", &dad.height, &dad.weight);
    scanf("%d %lf", &mom.height, &mom.weight);
    s = makeStudent(dad, mom);
    printf("height : %dcm\n", s.height);
    printf("weight : %.1fkg", s.weight + 1e-9);
    return 0;
}
