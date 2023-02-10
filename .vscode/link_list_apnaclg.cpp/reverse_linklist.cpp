#include <iostream>

using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void insertatend(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertatfirst(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
bool serch(node *head, int value)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
void insertafterposition(node *&head, int c, int pos)
{
    node *t;
    int count = 0, i = 1;
    t = head;
    while (t != 0)
    {

        count++;
        t = t->next;
    }

    if (pos > count)
    {
        cout << "invalid position\n";
    }
    else
    {
        node *n = new node(c);

        node *temp;

        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        n->next = temp->next;
        temp->next = n;
    }
}
void deleteathead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete (todelete);
}
void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        deleteathead(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
node *reverserec(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = reverserec(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
// code for reversing 4 nodes
node *reversek(node *&head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;

    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reversek(nextptr, k);
    }
    return prevptr;
}
int main()
{
    node *head = NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    insertatend(head, 5);
    insertatend(head, 6);
    display(head);
    // node *newhead = reverse(head);
    // node *newhead = reverserec(head);
    node *newhead = reversek(head, 3);

    display(newhead);
    cout << serch(head, 1);
    return 0;
}