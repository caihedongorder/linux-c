#include "stdio.h"

int main(int argc,char** argv)
{
    int k;
    int zznum;
    int sumnum;
    char mychar;
    float mynum;

    k = 12;
    zznum = 4;
    sumnum=k+zznum;
    mychar = 'c';
    mynum = 24.3;

    //printf("Value of k Is:%d\n",k);
    //printf("Value of zznum Is:%d\n",zznum);
    //printf("Value of sumnum Is:%d\n",sumnum);
    //printf("As char,Value of mychar Is:%c\n",mychar);
    //printf("As int,Value of mychar Is:%d\n",mychar);
    printf("Value of mynum Is:%f\n",mynum);
    
    printf("Size Of int:%ld\n",sizeof(k));
    printf("Size Of float:%ld\n",sizeof(mynum));
    printf("Size Of long int:%ld\n",sizeof(long int));
    printf("Size Of double:%ld\n",sizeof(double));

    return 0;
}
