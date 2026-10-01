#include<stdio.h>
#include<unistd.h>
#include<String.h>
#include<fcntl.h>

#define BUFFER_SIZE1024


void DisplayFile(char FileName[])
{
     char Buffer[BUFFER_SIZE1024]={'/0'};
       int fd=0,iRet=0;


         fd=open(FileName,O_RDONLY);
    if(fd==-1)
    {
        printf("unable to open file\n");
        return -1;
    }
    while (iRet=(fd ,Buffer,sizeof(Buffer))!=0)
    {
        write(1,Buffer,iRet);

        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fd);

}
int main ()
{

    char Fname[30]={'\0'};
    printf("Enter the file name:\n");
    scanf("%[^'\n']s",Fname);
    DisplayFile(Fname);

    return 0;
}