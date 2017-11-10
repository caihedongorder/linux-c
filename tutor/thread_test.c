#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* mythread_func(void* arg)
{
    char* msg;
    msg=(char*)arg;

    int i ;
    for(i=0;i<10;i++)
    {
        printf("%s %d\n",msg,i);
        sleep(1);
    }
    
    printf("%s Finshed\n",msg);
    return NULL;
}

int main(int argc,char* argv[])
{
    pthread_t thread1,thread2,thread3;
    int ret1,ret2,ret3;

    char* msg1="thread01";
    char* msg2="thread02";
    char* msg3="thread03";
    ret1 = pthread_create(&thread1,NULL,mythread_func,(void*)msg1);
    ret2 = pthread_create(&thread2,NULL,mythread_func,(void*)msg2);
    ret3 = pthread_create(&thread3,NULL,mythread_func,(void*)msg3);
    if(ret1 !=0 || ret2 != 0)
    {
        printf("pthread_create Error:%d %d",ret1,ret2);
        exit(1);
    }

    printf("Main function After pthread_create\n");

    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);

    printf("thread01 return value:%d\n",ret1);
    printf("thread02 return value:%d\n",ret2);
    printf("thread03 return value:%d\n",ret3);

    return 0;
}

