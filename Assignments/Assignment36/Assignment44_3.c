#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    
    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int CountOdd(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        if((Head->data % 2) != 0)
        {
            iCount++;
        }
        Head = Head->next;
    }
    return iCount;
}

int main()
{
    PNODE first = NULL;
  
    int iRet = 0;
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);

    iRet = CountOdd(first);
    printf("Total odd numbers are : %d\n",iRet);

    return 0;
}