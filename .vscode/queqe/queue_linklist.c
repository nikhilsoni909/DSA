#include <stdio.h>
typedef struct node
{
    int data;
    struct node *next;

} N;
N *front = 0;
N *rear = 0;
void enque(int x)
{

    N *new;
    new = (N *)malloc(sizeof(N));
    new->data = x;
    new->next = 0;
    if (front == 0 && rear == 0)
    {
        front = rear = new;
    }
    else
    {

        rear->next = new;
        rear = new;
    }

   
}
 void display()
    {
        struct node *temp;
        if (front == 0 && rear == 0)
        {
            printf("list is empty\n");
        }
        else
        {

            temp = front;
            while (temp != 0)
            {
                printf("%d: ", temp->data);
                temp = temp->next;
            }
        }
    }
    void dequeue(){
N*temp = front;
  if (front == 0 && rear == 0)
        {
            printf("list is empty\n");
        }
else{
printf("%d deleted\n",front->data);
    front=front->next;
    free(temp);
}
    }
    void peek(){
  if (front == 0 && rear == 0)
        {
            printf("list is empty\n");
        }
else{

    printf("%d \n",front->data);
}

    }
int main()
{enque(2);
enque(1);
enque(0);enque(1);
dequeue();
peek();
display();

    return 0;
}