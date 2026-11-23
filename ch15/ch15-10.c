#include <stdio.h>
#include <string.h>

typedef struct Person {
    char name[21];
    int height;
    double weight;
} Person;

int main(){
    Person p[5], t;
    int i, j;
    for (i = 0; i < 5; i++){
        scanf("%s %d %lf", p[i].name, &p[i].height, &p[i].weight);
    }
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4 - i; j++){
            if (strcmp(p[j].name, p[j + 1].name) > 0){
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
        }
    }
    for (i = 0; i < 5; i++){
        printf("%s %d %.1f\n", p[i].name, p[i].height, p[i].weight);
    }
    return 0;
}
