#include<stdio.h>

int main ()
{
    char str[80]={'\0'};

    printf("Enter command:\n");
    //scanf("%[^'\n']s",str);

    fgets(str,sizeof(str),stdin);
    
    printf("Enter command%s\n",str);

    return 0;
}