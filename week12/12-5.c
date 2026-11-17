#include <stdio.h>

int main() {
    struct students {
        char name[50];
        int score;
    };
    struct students s;

    FILE *fp;
    FILE *pass;
    FILE *fail;

    int count;

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("파일열기 실패");
        return 1;
    }

    printf("학생 수 입력: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        printf("\n%d번째 학생 이름: ", i + 1);
        scanf("%49s", s.name);

        printf("점수 : ");
        scanf("%d", &s.score);

        fprintf(fp, "%s %d\n", s.name, s.score);    
    }

    fclose(fp);   
    fp = fopen("students.txt","r");
    pass = fopen("pass.txt","w");
    fail = fopen("fail.txt","w");

    if(fp ==NULL || pass==NULL || fail == NULL){
        printf("파일 열기 실패\n");
        if(fp != NULL) fclose(fp);
        if(pass != NULL) fclose(pass);
        if(fail != NULL) fclose(fail);

    }

    while(fscanf(fp, "%49s %d", s.name, &s.name, &s.score)){
        if(s.score >= 80){
            fprintf(pass, "%s %d\n", s.name, s.score);
        }
        else{
            fprintf(pass, "%s %d\n", s.name, s.score);
        }
    }

    fclose(fp);
    fclose(pass);
    fclose(fail);

}