#include "stdio.h"
#include <string.h>

int main(int argc,char** argv)
{
    char str[24];
    char str2[24];
    int i ;
    int length;


    sprintf(str,"Hello,World!");
    printf("%s\n",str);

    /* Example 2 */
    i = 4;
    sprintf(str,"Value of i = %d",i);
    printf("%s\n",str);

    /* Example 3 */
    length=strlen(str);
    printf("length of str is %d\n",length);


    /* Example 4 */
    strcpy(str2,str);
    printf("str2 is : %s\n",str2);

    /* Example 5 */
    memset(str,0,24);
    memset(str,'a',4);
    printf("%s\n",str);

    return 0;
}

