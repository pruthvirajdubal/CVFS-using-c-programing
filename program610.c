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
//   structure name: BOOTBlock
//    Discription:  it hold information to
//                  boot the operating system
//////////////////////////////////////////////////////////

struct BootBlock
{
    char information[100];

};


///////////////////////////////////////////////////////////
//
//   structure name: SuperBlocks
//     Discription: it holds information complet
//                      file system
//////////////////////////////////////////////////////////
struct SuperBlock
{
    int totalinodes;
    int freeinodes;
};
///////////////////////////////////////////////////////////
//
//   structure name: Inode
//     Discription: it holds information  of file
//                  
//////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////
//
//   structure name: filetable
//    Discription: it holds infoemation opend files
//                  
//////////////////////

#pragma pack(1)
struct inode
{
    char filename[20];
    int inodenumber;
    int filesize;
    int actualfilesize;
    int filetype;
    int referencecount;
    int permission;
    int *buffer;
    struct inode *next;
    
};
struct  Inode INODE;
struct  Inode* PINODE;
struct  Inode** PPINODE;
///////////////////////////////////////////////////////////
//
//   structure name: filetable
//     Discription:  it hold informatin of opend
//                      
//////////////////////////////////////////////////////////

struct filetable
{
    int readoffset;
    int writeoffset;
    int mode;
     ptrinode;
};

typedef struct filetable filetable;
typedef struct filetable* pfiletable;

///////////////////////////////////////////////////////////
//
//   structure name: UAREA
//     Discription:  it hold informatin of process
//                      
//////////////////////////////////////////////////////////


struct UAREA
{
    char processname[20];
    pfiletable UFDT[MAXOPENFILES];
};


/////////////////////////////////////////////////////////
//
//  Entry point function of the CVFS project
//
//
/////////////////////////////////////////////////////////

int main ()
{
    

    return 0;
}