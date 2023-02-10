#include<stdio.h>
typedef struct Node{
int data;
struct Node *next;



}node;
void travelsal(node *ptr){
while (ptr!=NULL)
{
    printf("%d ",ptr->data);
    ptr=ptr->next;
}



}
int main()
 {
node*head;
node*second;
node*third;
node*fourth;
head=(node*)malloc(sizeof(node));
second=(node*)malloc(sizeof(node));
third=(node*)malloc(sizeof(node));
fourth=(node*)malloc(sizeof(node));
head->data=10;
head->next=second;
second->data=15;
second->next=third;
third->data=167;
third->next=fourth;
fourth->data=1566;
fourth->next=NULL;
travelsal(head);

return 0;
}