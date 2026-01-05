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

int CountPrime(PNODE Head)
{
    int iCount = 0;
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
        if(iFrequency <=1)
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
    int iCnt = 0,len = 0, no = 0;
    int iRet = 0;
    printf("Enter how many nodes you want into linked list :\n");
    scanf("%d",&len);

    for(iCnt=1; iCnt<=len; iCnt++)
    {
        printf("Enter element into node %d :",iCnt);
        scanf("%d",&no);
        InsertFirst(&first,no);
    }

    Display(first);

    iRet = CountPrime(first);
    printf("Count of prime numbers in linked list is %d\n",iRet);

    return 0;
}