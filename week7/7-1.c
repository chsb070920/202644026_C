#include <stdio.h>

int main(void)
{
    int x;
    int *p = &x;
    int r;

    x = 10;
    r = (*p)++;
    printf("1. (*p)++    : 결과값 r = %d, 실행 후 x = %d\n", r, x);

    x = 10;
    r = (*p) + 1;
    printf("2. (*p)+1    : 결과값 r = %d, 실행 후 x = %d (x 변화 없음)\n", r, x);

    x = 10;
    r = (*p += 1);
    printf("3. *p+=1     : 결과값 r = %d, 실행 후 x = %d\n", r, x);

    x = 10;
    r = ((*p) += 1);
    printf("4. (*p)+=1   : 결과값 r = %d, 실행 후 x = %d\n", r, x);

    x = 10;
    r = (*p = *p + 1);
    printf("5. *p=*p+1   : 결과값 r = %d, 실행 후 x = %d\n", r, x);

    x = 10;
    r = ++*p;
    printf("6. ++*p      : 결과값 r = %d, 실행 후 x = %d\n", r, x);

    x = 10;
    r = ++(*p);
    printf("7. ++(*p)    : 결과값 r = %d, 실행 후 x = %d\n", r, x);

    int arr[3] = {10, 20, 30};
    int *q = arr;
    r = *q++;
    printf("\n[보너스] *q++ : 결과값 r = %d, arr[0] = %d (값 그대로), 이제 *q = %d (포인터가 이동)\n",
           r, arr[0], *q);

    return 0;
}