#include<stdio.h>

int main ()
{
     char str[80]={'\0'};

     char command1[20]={'\0'};
      char command2[20]={'\0'};
       char command3[20]={'\0'};

    printf("Enter command:\n");
    //scanf("%[^'\n']s",str);

    fgets(str,sizeof(str),stdin);
    
    printf("Enter command:%s\n",str);

    sscanf(str,"%s %s %s",command1,command2,command3);

    printf("first token:%s\n",command1);
    printf("first token:%s\n",command2);
    printf("first token:%s\n",command2);


    return 0;
}