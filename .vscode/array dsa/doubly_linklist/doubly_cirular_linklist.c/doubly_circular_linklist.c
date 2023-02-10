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
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = new;
            new->prev = tail;
            new->next = head;
            head->prev = new;
            tail = new;
        }
        printf("do you want to continue:(1/0)\n");
        scanf("%d", &c);
    } while (c);
}

void insertatfirst()
{
    int c;

    N *new = (N *)malloc(sizeof(N));
    printf("enter data you want to enter:\n");
    scanf("%d", &new->data);
    new->next = 0;
    new->prev = 0;

    
    

       
        if (head == 0)
        {
            head = tail = new;
            new->next = head;
            new->prev = tail;
        }
        else
        {
            head->prev = new;
            new->next = head;
            new->prev = tail;
            tail->next = new;
            head = new;
        }

    
} 
void insertatend()
{
    int c;

    N *new = (N *)malloc(sizeof(N));
    printf("enter data you want to enter:\n");
    scanf("%d", &new->data);
    new->next = 0;
    new->prev = 0;

    
    

       
        if (head == 0)
        {
            head = tail = new;
            new->next = head;
            new->prev = tail;
        }
        else
        {   new->prev=tail; 
        tail->next=  new;
        new->next=head;
        head->prev=new;
        tail=new;

        }

    
}
void insertatposition()
{
    int c;
    int pos;
    N *t;
    int count = 1, i = 1;
    t = head;
    printf("enter position:\n");
    scanf("%d", &pos);
    while (t != tail)
    {

        count++;
        t = t->next;
    }
    printf("%d\n", count);
    if (pos > count)
    {
        printf("invalid position\n");
    }
    else if(pos==1){

        insertatfirst();         
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
           
            temp->next->prev = new;
             temp->next = new;
            printf("do you want to continue:(1/0)\n");
            scanf("%d", &c);
        } while (c);
    }
}
void deletefirst(){

    if (head==0)
    {
        printf("list is empty\n");
    }

    else if (head->next == head)
    {

        head = tail = 0;
        
    }
    else
    {
        N *temp = head;
        head = head->next;
        head->prev = tail;
        tail->next=head;
        printf("deleting %d\n", temp->data);
        free(temp);
    }
}
void deleteend(){

    if (head==0)
    {
        printf("list is empty\n");
    }

    else if (head->next == head)
    {

        head = tail = 0;
        
    }
    else
    {
        N *temp = tail;
        tail = tail->next;
        tail->prev = head;
       head->prev=tail;
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
        if (temp->next==head)
        {
            tail=temp->prev;
           
            free(temp);
        }
        else{

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        printf("deleting %d:\n", temp->data);
        free(temp);}
    }
    
}   
void display()
{
    printf("******** printing data*********\n");
    N *temp;

    temp = head;
    while (temp != tail)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
     printf("%d\n", temp->data);
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
        deletefirst();
        break;
    case 6:
        deleteend();
        break;
    case 7:
        deletespeacified();
        break;
    //     case 8:
    //     reverse();
    //     break;
    default:
        printf("wrong entry\n");
        break;
    }
    display();
    return 0;
}