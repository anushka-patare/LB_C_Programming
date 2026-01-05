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

int FirstOccur(PNODE Head,int no)
{
    int iCount = 1;
    while(Head != NULL)
    {
        if(Head->data == no)
        {
            return iCount;
        }
        Head = Head->next;
        iCount++;
    }
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
    
    int iValue = 0;
    printf("Enter number to check its first occurence :");
    scanf("%d",&iValue);

    iRet = FirstOccur(first,iValue);
    printf("First occurence of %d is %d\n",iValue,iRet);
    return 0;
}