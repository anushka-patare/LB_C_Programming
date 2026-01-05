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

void DisplayPrime(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        int iFrequency = 0;
        for(iCnt = 1; iCnt<=(Head->data/2); iCnt++)
        {
            if((Head->data) % iCnt == 0)
            {
                iFrequency++;
            }
        }
        if(iFrequency>1)
        {
            printf("");
        }
        else
        {
            printf("%d\n",Head->data);
        }

        Head = Head->next;
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

    DisplayPrime(first);
    
    return 0;
}