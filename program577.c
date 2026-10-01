#include<stdio.h>
#include<fcntl.h>
#include<unistd.h> // only linux based os

int main()
{   
    int fd=0;
    int iRet=0;

    fd=open("Marvellous.txt",O_RDWR);

    if(fd==-1)
    {
        printf("unable to OPEN file.\n");
    }
    else
    {
        printf("File get succesfuuly OPEN with Fd:%d\n",fd);

        iRet=write(fd,"jay ganesh...",13);

        printf("%d bytes gets succesfuly \n",iRet);
        close(fd);
    }


    return 0;
}