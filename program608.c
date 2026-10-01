#include<stdio.h>
#include<unistd.h>
#include<String.h>
#include<fcntl.h>
#define BUFFER_SIZE1024

#define ERR_OPEN -1

int  Countsmall(char *FileName)
{
     char Buffer[BUFFER_SIZE1024]={'/0'};
       int fd=0,iRet=0,icount=0,i=0;

         fd=open(FileName,O_RDONLY);
    if(fd==-1)
    {
       
        return ERR_OPEN;
    }
    while (iRet=(fd ,Buffer,sizeof(Buffer))!=0)
    {
        for (int i = 0; i < iRet; i++)
        {
            if(Buffer[i]>='a' && Buffer[i]<='z')
            {
                icount++;
            }
        }
        

        memset(Buffer,'\0',sizeof(Buffer));
    }

    return icount;

}
int main ()
{
    int iRet=0;
    char Fname[30]={'\0'};

    printf("Enter the file name:\n");
    scanf("%[^'\n']s",Fname);

    Countsmall(Fname);
    if(iRet==ERR_OPEN)
    {
        printf("unable to open file:\n");
    }
    else{
        printf("number of small characters sre%d\n",iRet);
    }

    return 0;
}