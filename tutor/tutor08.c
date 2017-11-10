#include "stdio.h"


int add_numbers(int a,int b);


int main(int argc,char** argv)
{
    int result;

    int (*my_func)(int,int) = &add_numbers;

    printf("the address of my_func:%p\n",my_func);

    result = my_func(3,4);
    printf("result is %d\n",result);

    return 0;
}

int add_numbers(int a,int b)
{
    int sum;
    sum = a + b;
    return sum;
}
