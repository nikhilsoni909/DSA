#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} N;
N *head = 0;

void insert()
{
    int c;
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
        temp->next = head;
        printf("do you want to continue:(1/0)\n");
        scanf("%d", &c);
    } while (c);
}
void display()
{
    printf("******** printing data*********\n");
    N *temp;

    if (head == 0)
    {
        printf("the list is empty\n");
    }
    else
    {
        temp = head;
        while (temp->next != head)
        {

            printf("%d\n ", temp->data);
            temp = temp->next;
        }

        printf("%d\n ", temp->data);
    }
}
int main(){
insert();
display();

    return 0;
}