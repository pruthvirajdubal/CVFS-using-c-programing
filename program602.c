#include<stdio.h>
#include<unistd.h>
#include<String.h>
#include<fcntl.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024


void DisplayFileInformation(char FileName[])
{
    struct stat sobj;

    stat(FileName ,&sobj);
    printf("File name: %s\n",FileName);
    printf("inode number:%llu\n",sobj.st_ino);
    //printf("Blocks size is  :%d\n",(long long )file_size);

}
int main ()
{


    char Fname[30]={'\0'};
    printf("Enter the file name:\n");
    scanf("%[^'\n']s",Fname);
     DisplayFileInformation(Fname);

    
    return 0;
}