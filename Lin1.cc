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
    obj.insert(2);
    obj.display();
    obj.insert(4);
    obj.display();
    obj.insert(6);
    obj.display();
    return 0;
}
