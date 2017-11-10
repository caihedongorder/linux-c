#include <stdio.h>
#include <string.h>

void print_array(char* message,int* pArr,int num)
{
    char buf[1024];
    char tmpStr[16];
    int i;
    memset(buf,0,1024);

    sprintf(buf,"%s ",message);

    for(i = 0;i < num;++i)
    {
        if (i == num -1)
            sprintf(tmpStr,"%d]",pArr[i]);
        else if(i==0)
            sprintf(tmpStr,"%d[",pArr[i]);
        else
            sprintf(tmpStr,"%d,",pArr[i]);
        strcat(buf,tmpStr);
    }
    printf("%s\n",buf);
}

int main(int argc,char** argv)
{
    int a[10] = {8,20,5,11,21,45,7,2,22,17};
    /*
     * what's bubble sort?
     * one iterator will produce a most large num sort in correct position
     * from 0 to 8
     *  compare current index to next index,to make the max num to 
     *  to right
     *  
     *  after complete of one iterater,a[9]should be max of the value in
     *  the array
     *  
     *  and next iterater should be:
     *  from 0 to 7
     *  
     *  ...
     *  
     *  and so on.
     */
    print_array("Unsort Before:",a,10);

    int i,k;
    int tmp;

    for(i = 9 ; i > 0;--i)
    {
        for(k = 0 ;k < i ;++k)
        {
            if(a[k]>a[k+1])
            {
                tmp = a[k];
                a[k]=a[k+1];
                a[k+1]=tmp;
            }
        }
    }
    print_array("Sort After:",a,10);

    return 0;

}
