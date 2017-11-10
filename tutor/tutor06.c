#include "stdio.h"

typedef struct my_str{
    int a;
    int b;
} MYSTR;

int main(int argc,char** argv)
{
    int n;
    int *k;
    MYSTR mystr;

    n = 25;
    k = &n;
    printf("n = %d\n",n);
    printf("k = %p\n",k);
    printf("*k = %d\n",*k);

    mystr.a = 2;
    mystr.b = 4;

    printf("mystr.a = %d\n",mystr.a);
    printf("mystr.b = %d\n",mystr.b);
    return 0;
}
