
#include<stdio.h>

int main ()
{
     char str[80]={'\0'};

    // char command1[20]={'\0'};
      //char command2[20]={'\0'};
       //char command3[20]={'\0'};

       char command[4] [20] ={{'\0'}};

    printf("Enter command:\n");
    fgets(str,sizeof(str),stdin);
    
    printf("Enter command:%s\n",str);

    sscanf(str,"%s %s %s",command[0],command[1],command[2]);

    printf("first token:%s\n",command[0]);
    printf("Second token:%s\n",command[1]);
    printf("Third token:%s\n",command[2]);


    return 0;
}