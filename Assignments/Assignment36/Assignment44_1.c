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

bool Search(PNODE Head,int no)
{
    int iCount = 0;
    while(Head!=NULL)
    {
        if(Head->data == no)
        {
            iCount++;
        }
        Head = Head->next;
    }
    if(iCount>0)
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
    bool bRet = false;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);

    printf("Enter number for search:\n");
    int iValue = 0;
    scanf("%d",&iValue);

    bRet = Search(first,iValue);
    if(bRet == true)
    {
        printf("%d is present in linked list\n",iValue);
    }
    else
    {
        printf("%d is not present in linked list\n",iValue);
    }

    return 0;
}