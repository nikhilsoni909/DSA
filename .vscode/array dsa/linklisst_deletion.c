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
void deletefirst()
{
    if (head == 0)
    {
        printf("list is empty\n");
    }
    else
    {
        N *temp = head;
        head = head->next;
        printf("deleting %d\n", temp->data);
        free(temp);
        }
        }
    void deleteend()
    {
        if (head == 0)
        {
            printf("list is empty\n");
        }
        else
        {
            N *temp = head;
            N *prevnode;
            while (temp->next != 0)
            {
                temp = temp->next;
                prevnode = temp;
                temp = temp->next;
            }
            if (temp == head)
            {
                head = 0;
            }
            else
            {
                prevnode->next = 0;
            }

            free(temp);
        } 
    }
void deletespeacified(){
if (head==0)
{
    printf("list is empty\n");
    
}
else
{
    N*temp = head;
    N*nextnode;
    int pos,i=1;
    printf("enter position\n");
    scanf("%d",&pos);
    while (i<pos-1)
    {
        
        temp = temp->next;
i++; 
    }
    nextnode = temp->next;
    temp->next=nextnode->next;
    printf("deleting %d:\n",nextnode->data);
    free(nextnode);
}




}
void display()
{
    printf("******** printing data*********\n");
    N *temp;
    int count = 0;
    temp = head;
    while (temp != 0)
    {count++;
        printf("%d\n ", temp->data);
        temp = temp->next;

    }
    printf("the number of linklist is %d\n",count);
}
void reverse(){
N*prevnode,*currentnode,*nextnode;
prevnode = 0;
currentnode=nextnode = head;
while (nextnode!=0)
{
    nextnode = nextnode->next;
    currentnode->next=prevnode;
    prevnode = currentnode;
    currentnode = nextnode;

}
head=prevnode;  

}
int main()
{
    int c, a, pos;
    insert(c);
    display();
    printf("enter \n1 for insert at end\n 2 for insert at beggning\n3 for inserst after position\n4 for traversal\n");
    printf("\n 5 for deleting at first position\n6 for deleting at end \n7 for delting at specified position\n8 for reverse the linklist\n");
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
        printf("invalid position:");
        break;
    }

    display();

    return 0;
}