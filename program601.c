#include<stdio.h>
#include<unistd.h>
#include<String.h>
#include<fcntl.h>
#include<sys/stat.h>

#define BUFFER_SIZE1024


void ClculateFileSize(char FileName[])
{
    struct stat sobj;

    stat(FileName ,&sobj);
    return sobj.st_size;
}
int main ()
{
    int iRet=0;

    char Fname[30]={'\0'};
    printf("Enter the file name:\n");
    scanf("%[^'\n']s",Fname);
     ClculateFileSize(Fname);

    printf("file size is:%d/n",iRet);
    return 0;
}