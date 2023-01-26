#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node* prev;
};
class list
{
    Node *head,*tail;
    public:
    list()
    {
        head=NULL;
        tail=NULL;
    }
    void tail(int item)
    {
        Node *n=new Node;;
        Node*temp;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=n;
        n->prev=temp;
    }
    void header(int item)
    {
        Node *temp=new Node;
        temp->data=item;
        temp->next=head;
        if(head!=NULL)
        head->prev=temp;
        head=temp;    
    }
void display()
    {
        Node *temp;
        if(head==NULL)
        cout<<"Empty List"<<endl;
        else
        {
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
        }
    }
};
int main()
{
    list obj;
    obj.display();
    obj.header(2);
    obj.display();
    obj.header(4);
    obj.display();
    obj.insert(6);
    obj.display();
    return 0;
}
