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
void insertrand(Node *&head, int item, int pos)
{
    Node *temp = new Node(item);
    int count = 0;
    Node *pre = head;
    Node *pos1;
    while (count != pos - 1)
    {
        pos1 = pre;
        pre = pre->next;
        count++;
    }
    pos1->next = temp;
    temp->next = pre;
}
bool search(Node *head, int value)
{
    Node *pre = head;
    while (pre != NULL)
    {
        if (pre->data == value)
            return true;
        pre = pre->next;
    }
    return false;
}
int length(Node *head)
{
    int l = 0;
    Node *temp = head;
    while (temp->next != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l + 1;
}
// deletion at the beginning
void deletebegin(Node *&head)
{
    Node *pre = head;
    head = head->next;
    delete pre;
}
void makecir(Node* head)
{
    Node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=head;
}
void eveodd(Node* head)
{
    Node* odd=head;
    Node* even=head->next;
    Node* temp=head;
    Node* even1=even;
    while (even->next!=NULL&&odd->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        if(odd->next==NULL)
        break;
        even->next=odd->next;
        if(even->next==NULL)
        break;
        even=even->next;
    }
    odd->next=even1;
    if(odd->next!=NULL)
    even->next=NULL;
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
    insertt(head, 1); // can also write simple inserth(2) if we declare head and tail in the new class
    insertt(head, 2);
    insertt(head, 3);
    insertt(head, 4);
    insertt(head, 5);
    insertt(head, 6);
    display(head);
    cout<<endl;
    eveodd(head);
    display(head);
}