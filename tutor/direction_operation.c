#include "stdio.h"
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>



int main(int argc,char** argv)
{
    DIR *dir;
    struct dirent * dire;

    dir = opendir(".");
    if(dir == NULL)
    {
        printf("opendir failed,return NULL\n");
        exit(1);
    }
    
    while( (dire = readdir(dir))!= NULL ) 
    {
        printf(">> %s\n",dire->d_name);
    }
    closedir(dir);
    return 0;
}

