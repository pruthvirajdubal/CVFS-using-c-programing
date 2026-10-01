

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h> 
#include<String.h>

#define BUFFER_SIZE 100

int main()
{   
    int fd=0;
    int iRet=0;
    char Data[BUFFER_SIZE]={'\0'};
    

    fd=open("Marvellous.txt",O_RDONLY);

    if(fd==-1)
    {
        printf("unable to OPEN file.\n");
    }
    else
    {
        lseek(fd,-10,2);

        iRet=read(fd,Data,10);

        printf("%d bytes get sucesfuly read\n",iRet);

        printf("data from file is %s\n",Data);


        close(fd);

        
    }


    return 0;
}