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

int CountTwoDigits(PNODE Head)
{   int iFrequency = 0; 
    while(Head != NULL)
    {
        int num = Head->data;
        int iCount = 0;
        int iDigit = 0;
        while(num !=0)
        {
            iDigit = num % 10;
            num = num / 10;
            iCount++;
        }

        if(iCount == 2)
        {
            iFrequency++;
        }
        Head = Head->next;
    }
    return iFrequency;
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

    iRet = CountTwoDigits(first);
    printf("Count of 2 digit number is %d\n",iRet);
    
    return 0;
}