///////////////////////////////////////////////////////////
//
//  heder file inclusion
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////
//
//   Usre define Macros
//
//////////////////////////////////////////////////////////
#define MAXFILESIZE 50
#define MAXOPENFILES 10

#define READ1
#define  WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXCUTE_SUCCESS 0

#define REGUARFILE 1
#define SPECIALFILE 2

///////////////////////////////////////////////////////////
//
//   Usre define macro for ERROR handling
//
//////////////////////////////////////////////////////////
#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST-3
#define ERR_FILE_NOT_EXIST-4

#define ERR_PERMISSION_DENPED -5

#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILES_OPEN -8

///////////////////////////////////////////////////////////
//
//   Entry Point function of thr CVFS Project
//
//////////////////////////////////////////////////////////

int main ()
{
    

    return 0;
}