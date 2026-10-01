#include<stdio.h>
#include<fcntl.h>
#include<unistd.h> // only linux based os
#include<String.h>


int main()
{   
    int fd=0;
    int iRet=0;
    char Data[100]={'\0'};
    char DataX[100]={'\0'};

    fd=open("Marvellous.txt",O_RDONLY);

    if(fd==-1)
    {
        printf("unable to OPEN file.\n");
    }
    else
    {
        printf("File get succesfuuly OPEN with Fd:%d\n",fd);

        iRet=read(fd,Data,13);

        printf("%d bytes gets succesfuly \n",iRet);
        printf("data from file is: %s\n",Data);

          iRet=read(fd,DataX,3);

        printf("%d bytes gets succesfuly \n",iRet);
        printf("data from file is: %s\n",DataX);


        close(fd);
    }


    return 0;
}