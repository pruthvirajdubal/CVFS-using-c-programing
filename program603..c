#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>

#define BUFFER_SIZE 1024

void filecopy(char filenamesrc[],char filenamedest[])
{
    char Buffer[BUFFER_SIZE] ={'\0'};
    int fdsrc=0,fddest=0,iret=0;

    fdsrc=open(filenamesrc,O_RDONLY);
    if(fdsrc==-1)
    {
        printf("unable to open source file\n");
        return;
    }
    fddest=creat(filenamedest,0777);
    if(fddest==-1)
    {
        printf("unable to creat destination file\n");
        return;
    }
    while ((iret=read(fdsrc,Buffer,sizeof(Buffer)))!=0)
    {
        write(fddest,Buffer,iret);
        memset(Buffer,'\0',sizeof(Buffer));
    }
    close(fdsrc);
    close(fddest);
    
}

int main () 
{
    char fnamesrc[30]={'\0'};
     char fnamedest[30]={'\0'};

     printf("Enter the source file name:\n");
     scanf("%[^'\n]s",fnamesrc);

       printf("Enter the destination file name:\n");
     scanf("%[^'\n]s",fnamedest);  // ISSU

     filecopy(fnamedest,fnamesrc);



    return 0;
}