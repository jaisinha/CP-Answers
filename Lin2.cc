#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
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
    void insert(int item)
    {
        Node *temp=new Node;
        temp->data=item;
        temp->next=NULL;
        if(head==NULL){
        head=temp;
        tail=temp;}
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    void insertbeg(int item)
    {
        Node *temp=new Node;
        temp->data=item;
        temp->next=head;
        head=temp;
    }
    void insertany(int item,int pos)
    {
        Node *temp=new Node;
        temp->data=item;
        Node *cur,*pre;
        cur=head;
        for(int i=0;i<pos;i++)
        {
            pre=cur;
            cur=cur->next;
        }
        pre->next=temp;
        temp->next=cur;
    }
    void display()
    {
        Node *temp;
        temp=head;
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
    obj.insert(2);
    obj.insert(5);
    // obj.display();
    // obj.display();
    obj.insertany(4,2);
    // obj.display();
    obj.insertbeg(6);
    obj.display();
    return 0;
}
