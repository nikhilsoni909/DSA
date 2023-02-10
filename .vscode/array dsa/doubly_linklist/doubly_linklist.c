#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} N;
N *head = 0, *tail = 0;
// N*tail = 0;
int isempty()
{
    if (head == 0)
    {

        return 1;
    }
    return 0;
}
void insert()
{
    int c;
    do
    {

        N *new = (N *)malloc(sizeof(N));
        printf("enter data you want to enter:\n");
        scanf("%d", &new->data);
        new->next = 0;
        new->prev = 0;
        if (head == 0)
        {
            head = tail = new;
        }
        else
        {
            tail->next = new;
            new->prev = tail;
            tail = new;
        }
        printf("do you want to continue:(1/0)\n");
        scanf("%d", &c);
    } while (c);
}
void insertatfirst()
{
    int c;
    do
    {

        N *new = (N *)malloc(sizeof(N));
        printf("enter data you want to enter:\n");
        scanf("%d", &new->data);
        head->prev = new;
        new->next = head;

        head = new;

        printf("do you want to continue:(1/0)\n");
        scanf("%d", &c);
    } while (c);
}
void insertatposition()
{
    int c;
    int pos;
    N *t;
    int count = 0, i = 1;
    t = head;
    printf("enter position:\n");
    scanf("%d", &pos);
    while (t != 0)
    {

        count++;
        t = t->next;
    }
    printf("%d\n", count);
    if (pos > count)
    {
        printf("invalid position\n");
    }
    else
    {

        do
        {
            N *temp;

            N *new = (N *)malloc(sizeof(N));
            printf("enter data you want to enter:\n");
            scanf("%d", &new->data);

            temp = head;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            new->prev = temp;
            new->next = temp->next;
            temp->next = new;
            temp->next->prev = new;
            printf("do you want to continue:(1/0)\n");
            scanf("%d", &c);
        } while (c);
    }
}
void insertafterposition()
{
    int c;
    int pos;
    N *t;
    int count = 0, i = 1;
    t = head;
    printf("enter position:\n");
    scanf("%d", &pos);
    while (t != 0)
    {

        count++;
        t = t->next;
    }
    printf("%d\n", count);
    if (pos > count)
    {
        printf("invalid position\n");
    }
    else
    {

        do
        {
            N *temp;

            N *new = (N *)malloc(sizeof(N));
            printf("enter data you want to enter:\n");
            scanf("%d", &new->data);

            temp = head;
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            new->prev = temp;
            new->next = temp->next;
            temp->next = new;
            temp->next->prev = new;
            printf("do you want to continue:(1/0)\n");
            scanf("%d", &c);
        } while (c);
    }
}

void insertatend()
{
    int c;
    do
    {

        N *new = (N *)malloc(sizeof(N));
        printf("enter data you want to enter:\n");
        scanf("%d", &new->data);
        tail->next = new;
        new->prev = tail;
        tail = new;
        new->next = 0;
        printf("do you want to continue:(1/0)\n");
        scanf("%d", &c);
    } while (c);
}

void display()
{
    printf("******** printing data*********\n");
    N *temp;

    temp = head;
    while (temp != 0)
    {
        printf("%d\n ", temp->data);
        temp = temp->next;
    }
}
void deletefirst()
{
    if (isempty())
    {
        printf("list is empty\n");
    }

    else if (head == tail)
    {

        head = tail = 0;
    }
    else
    {
        N *temp = head;
        head = head->next;
        head->prev = 0;
        printf("deleting %d\n", temp->data);
        free(temp);
    }
}
void deleteend()
{
    if (isempty())
    {
        printf("list is empty\n");
    }
    else if (head == tail)
    {

        head = tail = 0;
    }
    else
    {
        N *temp = tail;
        tail->prev->next = 0;
        tail = tail->prev;
        printf("deleting %d\n", temp->data);
        free(temp);
    }
}

void deletespeacified()
{
    if (tail == 0)
    {
        printf("list is empty\n");
    }
    else
    {
        N *temp = head;

        int pos, i = 1;
        printf("enter position\n");
        scanf("%d", &pos);
        while (i < pos)
        {

            temp = temp->next;
            i++;
        }
        if (temp->next==0)
        {
            tail=tail->prev;
            tail->next=0;
            free(temp);
        }
        else{

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        printf("deleting %d:\n", temp->data);
        free(temp);}
    }
    
}
void reverse(){
N*currentnode,*nextnode;

currentnode=head;
while (currentnode!=0)
{
    nextnode = currentnode->next;
    currentnode->next=currentnode->prev;
   currentnode   = nextnode ;   

}
 currentnode=head;
 head=tail;
 tail=currentnode;

}
int main()
{
    int a;
    insert();
    display();

    printf("press 1 for insert at first\npress 2 for insert at end\npress 3 for insert at position\n press 4 for insert after position ");
    printf("\npress 5 for delete firse\n,press 6 for delete last\npress 7 for delete at position\n");
   printf("\nPress 8 for reverse");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        insertatfirst();
        break;
    case 2:
        insertatend();
        break;
    case 3:
        insertatposition();
        break;
    case 4:
        insertafterposition();
        break;
    case 5:
        deletefirst();
        break;
    case 6:
        deleteend();
        break;
    case 7:
        deletespeacified();
        break;
        case 8:
        reverse();
        break;
    default:
        printf("wrong entry\n");
        break;
    }
    display();
    return 0;
}