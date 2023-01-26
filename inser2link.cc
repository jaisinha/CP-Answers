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
// deletion at the beginning
void deletebegin(Node *&head)
{
    Node *pre = head;
    head = head->next;
    delete pre;
}
void rev(Node *&head)
{
    Node *pre = NULL;
    Node *curr = head;
    Node *nextptr;
    while (curr != NULL)
    {
        nextptr = curr->next; // 3 pointers method
        curr->next = pre;
        pre = curr;
        curr = nextptr;
    }
    head = pre; // visualise
}
Node *revk(Node *&head, int k)
{
    int count = 0;
    Node *pre = NULL;
    Node *curr = head;
    Node *nextptr;
    while (curr != NULL && count < k)
    {
        nextptr = curr->next; // 3 pointers method
        curr->next = pre;
        pre = curr;
        curr = nextptr;
        count++;
    }
    if (nextptr != NULL)
        head->next = revk(nextptr, k);
    return pre; //or return prevptr(done because now the linked list will start from prevptr and not head); // visualise
}
void makecycle(Node *&head, int pos)
{
    Node *temp = head;
    Node *startnode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
            startnode = temp;
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}
bool detectcycle(Node *&head)
{

    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL) //fast->next written
    //as we reach the end of the linked list we
    // can access fast->next but not fast
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
            return true;
    }
    return false;
}
void deletecycle(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    do
    { //fast->next written
        //as we reach the end of the linked list we
        // can access fast->next but not fast
        fast = fast->next->next;
        slow = slow->next;
    } while (slow != fast);
    fast = head;
    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}
void merge(Node* &head1, Node* &head2, int k)
{
    int count = 1;
    Node *temp = head1;
    while (count < k)
    {
        temp = temp->next;
        count++;
    }
    Node *temp1 = head2;
    while (temp1->next != NULL)
        temp1 = temp1->next;
    temp1->next = temp;
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
    return l;
}
bool checkmerge(Node* &head1, Node* &head2)
{
    int l1 = length(head1);
    int l2 = length(head2);
    int count = 0;
    Node *temp = head1;
    while (count != abs(l1 - l2))
    {
        if(temp==NULL)
        return -1;
        temp = temp->next;
        count++;
    }
    Node *h1 = temp;
    Node *h2 = head2;
    while (h1 != NULL && h2->next != NULL)
    {
        if (h1 == h2)
            return true;
        h1 = h1->next;
        h2 = h2->next;
    }
    return false;
}
void appk(Node *head, int k)
{
    int l = length(head);
    k = k % l;
    Node *temp = head;
    Node *temp1 = head;
    int count = 1;
    while (count != l - k + 1)
    {
        temp = temp->next;
        count++;
    }
    count = 1;
    while (count != l - k)
    {
        count++;
        temp1 != temp1->next;
    }
    temp->next = head;
    temp1->next = NULL;
    temp = temp;
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
    Node *head1 = NULL;
    Node *head2 = NULL;
    insertt(head1, 1);
    insertt(head1, 2); // can also write simple inserth(2) if we declare head and tail in the new class
    insertt(head1, 3);
    insertt(head1, 4);
    insertt(head1, 5);
    insertt(head1, 6);
    inserth(head2, 9);
    inserth(head2, 10);
    merge(head1, head2, 5);
    cout << checkmerge(head1, head2);
}