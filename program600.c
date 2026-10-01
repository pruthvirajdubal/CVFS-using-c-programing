#include<stdio.h>
#include<unistd.h>
#include<String.h>
#include<fcntl.h>
#define BUFFER_SIZE1024


void ClculateFileSize(char FileName[])
{
     char Buffer[BUFFER_SIZE1024]={'/0'};

       int fd=0,iRet=0,isize=0;


         fd=open(FileName,O_RDONLY);

        if(fd==-1)
    {
        printf("unable to open file\n");
        return -1;
    }
    while (iRet=(fd ,Buffer,sizeof(Buffer))!=0)
    {
        isize=isize+iRet;
    }

    close(fd);

}
int main ()
{
    int iRet=0;

    char Fname[30]={'\0'};
    printf("Enter the file name:\n");
    scanf("%[^'\n']s",Fname);

     ClculateFileSize(Fname);

    printf("file size is:%d bytes\n",iRet);
    return 0;
}