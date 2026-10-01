#include<stdio.h>
#include<fcntl.h>

int main()
{   
    int fd=0;

    fd=creat("Marvellous.txt",0777);

    if(fd==-1)
    {
        printf("unable to creat file.\n");
    }
    else
    {
        printf("File get succesfuuly created with Fd:%d\n",fd);
    }

    return 0;
}