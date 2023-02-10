#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} N;
N *tail = 0;

void insert()
{
    int c;
    do
    {

        N *new = (N *)malloc(sizeof(N));
        printf("enter data you want to enter:\n");
        scanf("%d", &new->data);
        new->next = 0;

        if (tail == 0)
        {
            tail = new;
            tail->next = new;
        }
        else
        {
            new->next = tail->next;
            tail->next = new;
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

        new->next = 0;
        if (tail == 0)
        {
            tail = new;
            tail->next = new;
        }
        else
        {
            new->next = tail->next;
            tail->next = new;
        }

        printf("do you want to continue:(1/0)\n");
        scanf("%d", &c);
    } while (c);
}
void insertatend()
{
    int c;
    do
    {

        N *new = (N *)malloc(sizeof(N));
        printf("enter data you want to enter:\n");
        scanf("%d", &new->data);

        new->next = 0;
        if (tail == 0)
        {
            tail = new;
            tail->next = new;
        }
        else
        {
            new->next = tail->next;
            tail->next = new;
            tail = new;
        }

        printf("do you want to continue:(1/0)\n");
        scanf("%d", &c);
    } while (c);
}

void insertatposition()
{
    int c;
    int pos;
    N *t = tail->next;
    int count = 1, i = 1;

    printf("enter position:\n");
    scanf("%d", &pos);
    while (t->next != tail->next)
    {

        count++;
        t = t->next;
    }
    printf("%d\n", count);
    if (pos > count || pos < 0)
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

            temp = tail->next;
            while (i < pos - 1)
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
void deleteatfirst()
{

    N *temp = tail->next;
    if (tail == 0)
    {
        printf("list is empty\n");
    }
    else if (temp->next == temp)
    {

        tail == 0;
        free(temp);
    }

    else
    {
        tail->next = temp->next;
        free(temp);
    }
}
void deleteend()
{

    N *current = tail->next;
    N *prev;
    if (tail == 0)
    {
        printf("list is empty\n");
    }
    else if (current->next == current)
    {

        tail == 0;
        free(current);
    }

    else
    {
        while (current->next != tail->next)
        {
            prev = current;
            current = current->next;
        }
        prev->next = tail->next;
        tail = prev;
        free(current);
    }
}

void deletespeacified()
{
    int pos;
    N *t = tail->next;
    int count = 1, i = 1;

    printf("enter position:\n");
    scanf("%d", &pos);
    while (t->next != tail->next)
    {

        count++;
        t = t->next;
    }
    printf("%d\n", count);
    if (pos > count || pos < 0)
    {
        printf("invalid position\n");
    }
    else if (pos == 1)
    {
        deleteatfirst();
    }
    else
    {

        N *current = tail->next;
        N *nextnode;

        current = tail->next;
        while (i < pos - 1)
        {
            current = current->next;

            i++;
        }
        nextnode = current->next;
        current->next = nextnode->next;
        free(nextnode);
    }
}
void reverse()
{
    N *current, *nextnode, *prevnode;
    current = tail->next;
    nextnode = current->next;
    if (tail == 0)
    {
        printf("list is empty\n");
    }
  
    else
    {
        while (current != tail)
        {
            prevnode = current;
            current = nextnode;
            nextnode = current->next;
            current->next = prevnode;
        }
        nextnode->next = tail;
        tail = nextnode;
    }
}
void display()
{
    printf("******** printing data*********\n");
    N *temp;

    if (tail == 0)
    {
        printf("the list is empty\n");
    }
    else
    {
        temp = tail->next;
        while (temp->next != tail->next)
        {

            printf("%d\n ", temp->data);
            temp = temp->next;
        }

        printf("%d\n ", temp->data); // or we can also use a do while loop
    }
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

    case 5:
        deleteatfirst();
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