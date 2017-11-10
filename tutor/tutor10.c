#include "stdio.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>



int main(int argc,char** argv)
{
    int fd;
    char* Buf = "Hello,World\n";
    char myBuf[256];

    fd = open("test.txt",O_WRONLY|O_CREAT,0600);
    if(fd==-1)
    {
        printf("Open file failed,Create\n");
        exit(1);
    }
    
    write(fd,Buf,strlen(Buf)+1);
    close(fd);


    fd = open("test.txt",O_RDONLY);
    if(fd==-1)
    {
        printf("Open file failed,ReadOnly\n");
        exit(1);
    }

    read(fd,myBuf,sizeof(myBuf));
    close(fd);
    
    printf("myBuf Is:%s",myBuf);
    return 0; 
}

