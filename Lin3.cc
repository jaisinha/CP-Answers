#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class list
{
    Node *head, *tail;

public:
    list()
    {
        head = NULL;
        tail = NULL;
    }
    void insert(int item)
    {
        Node *temp = new Node;
        temp->data = item;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    void makecircular(int pos)
    {
        Node *temp=head;
        Node* thatpos;
        int count=1;
        while(temp->next!=NULL)
        {
            if(count==pos)
            thatpos=temp;
            temp=temp->next;
            count++;
        }
        temp->next=thatpos;
    }
    bool circular()
    {
        Node* slow=head;
        Node* fast=head;
        // Node* thatpos;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            return true;
        }
        return false;
    }
    void dellist()
    {
        
        Node* slow=head;
        Node* fast=head;
        // Node* thatpos;
        do
        {
            slow=slow->next;
            fast=fast->next->next;
        }while(slow!=fast);
    fast=head;
    while(fast->next!=slow->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
    }
    void insertbeg(int item)
    {
        Node *temp = new Node;
        temp->data = item;
        temp->next = head;
        head = temp;
    }
    void insertany(int item, int pos)
    {
        Node *temp = new Node;
        temp->data = item;
        Node *cur, *pre;
        cur = head;
        for (int i = 0; i < pos; i++)
        {
            pre = cur;
            cur = cur->next;
        }
        pre->next = temp;
        temp->next = cur;
    }
    void display()
    {
        Node *temp;
        temp = head;
        if (head == NULL)
            cout << "Empty List" << endl;
        else
        {
            while (temp != NULL)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
        }
    }
    void reverse()
    {
        Node* prev=NULL;
        Node* curr=head;
        Node* next;
        while(curr->next!=NULL)
        {
            next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
    }
};
int main()
{
    list obj;
    obj.insert(2);
    obj.insert(5);
    // obj.display();
    // obj.display();
    obj.insertany(4, 2);
    // obj.display();
    obj.insertbeg(6);
    // obj.display();
    // obj.makecircular(3);
    // obj.circular();
    // obj.reverse();
    obj.reverse();
    obj.display();
    return 0;
}
