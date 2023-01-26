#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
// where head is just a pointer
void insertt(Node *&head, int item) // & as we are changing the head
{
    Node *temp = new Node(item);
    Node *n = head;
    if (head == NULL)
    {
        head = temp;
        temp->next = NULL;
    }
    else
    {
        while (n->next != NULL)
            n = n->next;
        n->next = temp;
        temp->next = NULL;
    }
}
void inserth(Node *&head, int item)
{
    Node *temp = new Node(item);
    temp->next = head;
    head = temp;
}
void insertrand(Node* &head,int item,int pos)
{
    Node* temp=new Node(item);
    int count=0;
    Node* pre=head;
    Node* pos1;
    while(count!=pos-1)
    {
        pos1=pre;
        pre=pre->next;
        count++;
    }
    pos1->next=temp;
    temp->next=pre;
}
bool search(Node* head,int value)
{
    Node* pre=head;
    while(pre!=NULL)
    {
       if(pre->data==value)
        return true;
       pre=pre->next;
    }
    return false;

}
// inserting at head means before the head
void display(Node *head)
{ //no & as we are not changing the head;
    Node *t = head;
    while (t != NULL)
    {
        cout << t->data << "->";
        t = t->next;
    }
    cout << "NULL";
}
int main()
{
    Node *head = NULL;
    insertt(head, 2); // can also write simple inserth(2) if we declare head and tail in the new class
    insertt(head, 3);
    insertt(head, 4);
    inserth(head, 5);
    insertrand(head,6,3);
    cout<<endl;
    int k=2;
    cout<<search(head, k);
    display(head);
}
