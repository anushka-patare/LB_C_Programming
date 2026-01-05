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

bool IsEmpty(PNODE Head)
{

    if(Head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
   
}
int main()
{
    PNODE first = NULL;
    int iCnt = 0,len = 0, no = 0;
    bool bRet = false;
    printf("Enter how many nodes you want into linked list :\n");
    scanf("%d",&len);

    for(iCnt=1; iCnt<=len; iCnt++)
    {
        printf("Enter element into node %d :",iCnt);
        scanf("%d",&no);
        InsertFirst(&first,no);
    }

    Display(first);

    bRet = IsEmpty(first);

    if(bRet == true)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        printf("Linked list is not empty");
    }

    return 0;
}