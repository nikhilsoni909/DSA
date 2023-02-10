#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} N;
N *head = 0;

void insert(int c)
{
    do
    {
        N *temp;
        N *new = (N *)malloc(sizeof(N));
        printf("enter data you want to enter:\n");
        scanf("%d", &new->data);
        new->next = 0;

        if (head == 0)
        {
            head = temp = new;
        }
        else
        {
            temp->next = new;
            temp = new;
        }
        printf("do you want to continue:(1/0)\n");
        scanf("%d", &c);
    } while (c);
}
void insertatfirst(int c)
{
    do
    {

        N *new = (N *)malloc(sizeof(N));
        printf("enter data you want to enter:\n");
        scanf("%d", &new->data);
        new->next = head;
        head = new;

        printf("do you want to continue:(1/0)\n");
        scanf("%d", &c);
    } while (c);
}
void insertatend(int c)
{
    do
    {
        N *temp;
        N *new = (N *)malloc(sizeof(N));
        printf("enter data you want to enter:\n");
        scanf("%d", &new->data);
        new->next = 0;
        temp = head;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = new;
        printf("do you want to continue:(1/0)\n");
        scanf("%d", &c);
    } while (c);
}
void insertafterposition(int c, int pos)
{
    N *t;
    int count = 0, i = 1;
    t = head;
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
            new->next = temp->next;
            temp->next = new;
            printf("do you want to continue:(1/0)\n");
            scanf("%d", &c);
        } while (c);
    }
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
int main()
{
    int c, a, pos;
    insert(c);
    display();
    printf("enter \n1 for insert at end\n 2 for insert at beggning\n3 for inserst after position\n4 for traversal\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        insertatend(c);

        break;
    case 2:
        insertatfirst(c);
        break;
    case 3:
        printf("enter position\n");
        scanf("%d", &pos);
        insertafterposition(c, pos);
        break;
    case 4:
        display();
        break;
    default:
        printf("invalid position:");
        break;
    }

    display();

    return 0;
}