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

int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummynode = new node(-1);
    node *p3 = dummynode;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummynode->next;
}
node *mergerec(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    node *result;
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergerec(head1->next, head2);
    }
    else
    {

        result = head2;
        result->next = mergerec(head1, head2->next);
    }
    return result;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insertatend(head1, 1);
    // insertatend(head1, 2);
    insertatend(head1, 4);
    // insertatend(head1, 4);
    insertatend(head1, 5);
    insertatend(head1, 7);

    insertatend(head2, 2);
    insertatend(head2, 3);
    // insertatend(head2, 1);
    // insertatend(head2, 3);
    // insertatend(head2, 12);
    insertatend(head2, 6);
    display(head1);
    display(head2);
    node *newhead = mergerec(head1, head2);
    display(newhead);
    return 0;
}
