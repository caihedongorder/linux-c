#include <stdio.h>
#include <unistd.h>


int main(int argc,char** argv)
{
    int pid = 0;
    int count1 = 0 ,count2 = 0;

    pid = fork();
    if(pid == 0 )
    {
        printf("this is child process!\n");
        while(count1 < 10)
        {
            printf("child process:%d\n",count1);
            count1++;
            sleep(1);
        }
    }
    else
    {
        printf("this is parent process!\n");
        while(count2 < 20)
        {
            printf("parent process:%d\n",count2);
            count2++;
            sleep(1);
        }
    }
    

    
    return 0;
}
