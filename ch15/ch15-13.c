#include <stdio.h>

typedef struct Contact {
    char name[101];
    char tel[101];
    char addr[101];
} Contact;

int main(){
    Contact c;
    scanf("%s %s %s", c.name, c.tel, c.addr);
    printf("name : %s\n", c.name);
    printf("tel : %s\n", c.tel);
    printf("addr : %s", c.addr);
    return 0;
}
