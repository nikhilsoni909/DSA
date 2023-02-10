#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int data;
    struct stack *next;

} S;
S *top = 0;
void push(int x)
{

    S *new;
    new = (S *)malloc(sizeof(S));
    new->data = x;
    new->next = top;
    top = new;
}

void display()
{
    S *temp;
    temp = top;
    if (top == 0)
    {

        printf("list is empty\n");
    }
    else
    {
        while (temp !=0)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

void peek()
{
    if (top == 0)
    {
        printf("list is empty\n");
    }
    else
    {
        printf("%d\n", top->data);
    }
}
void pop()
{
    S *temp;
    temp = top;
    if (top == 0)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("%d is popped\n", top->data);
        top = top->next;
        free(temp);
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    pop();
    peek();
    display();
    
    return 0;
}