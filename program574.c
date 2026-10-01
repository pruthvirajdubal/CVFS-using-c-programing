#include<stdio.h>
#include<fcntl.h>

int main()
{   
    int fd=0;

    fd=open("Marvellous.txt",O_RDONLY);

    if(fd==-1)
    {
        printf("unable to OPEN file.\n");
    }
    else
    {
        printf("File get succesfuuly OPEN with Fd:%d\n",fd);
    }

    return 0;
}