#include <stdio.h>
#include <string.h>

typedef struct Contact {
    char name[101];
    char tel[101];
    char addr[101];
} Contact;

int main(){
    Contact c[3];
    int i, first = 0;
    for (i = 0; i < 3; i++){
        scanf("%s %s %s", c[i].name, c[i].tel, c[i].addr);
        if (strcmp(c[i].name, c[first].name) < 0){
            first = i;
        }
    }
    printf("name : %s\n", c[first].name);
    printf("tel : %s\n", c[first].tel);
    printf("addr : %s", c[first].addr);
    return 0;
}
