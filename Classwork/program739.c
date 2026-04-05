#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertLast(PPNODE first,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(int));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;
        while(temp->next != NULL)       // Type 2
        {
            temp=temp->next;
        }
        temp->next=newn;
    }

}


void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;
    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        while(temp->next->next != NULL)         // Type 3
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void DisplayI(PNODE first)
{
    while(first != NULL)  // Type 1
    {
        printf("| %d |->",first->data);
        first=first->next;
    }
    printf("NULL\n");
}

void DisplayR(PNODE first)
{
    if(first != NULL)  // Type 1
    {
      
        DisplayR(first->next);
        printf("| %d |->",first->data);
    }
    
}

int Count(PNODE first)
{
    static int iCount = 0;
    if(first != NULL)
    {
        iCount++;
        first=first->next;
        Count(first);
    }
    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);

    DisplayR(head);

    printf("\n");
    
    iRet = Count(head);
    printf("Total number of nodes are : %d\n",iRet);
    
    return 0;
}