#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node INODE;
typedef struct node* PINODE;
typedef struct node** PPINODE;

#define MAXINODE 5

PINODE head= NULL;

void CreatDILB()
{
    int i=0;
    PINODE temp=head;
    PINODE newn =NULL;

    for( i=0;i<=MAXINODE;i++)
    {
        newn=(PINODE)malloc(sizeof(INODE));
        newn->data=i;
        newn->next=NULL;

        if(temp==NULL)
        {
            head=newn;
            temp=head;
        }
        else{

        }
    }

}

 void DisplayDILB()
 {
    PINODE temp=head;

    while (temp !=NULL)
    {
        printf("|%d |->",temp->data);
        temp =temp->next;
    }
    
 }


int main ()
{   

    CreatDILB();
    DisplayDILB();

    return 0;
}