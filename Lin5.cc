#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class list
{
    Node *head1,*tail,*head2;
    public:
    list()
    {
        head1=NULL;
        tail=NULL;
        head2=NULL;
    }
    void insert(int item)
    {
        Node *temp=new Node;
        temp->data=item;
        temp->next=NULL;
        if(head1==NULL){
        head1=temp;
        tail=temp;}
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    void insert1(int item)
    {
        Node *temp=new Node;
        temp->data=item;
        temp->next=NULL;
        if(head2==NULL){
        head2=temp;
        tail=temp;}
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    // void insertbeg(int item)
    // {
    //     Node *temp=new Node;
    //     temp->data=item;
    //     temp->next=head;
    //     head=temp;
    // }
    // void insertany(int item,int pos)
    // {
    //     Node *temp=new Node;
    //     temp->data=item;
    //     Node *cur,*pre;
    //     cur=head;
    //     for(int i=0;i<pos;i++)
    //     {
    //         pre=cur;
    //         cur=cur->next;
    //     }
    //     pre->next=temp;
    //     temp->next=cur;
    // }
    int insertion()
    {
        Node* temp=head1;
        Node* temp1=head2;
        Node* visited=NULL;
        while(temp->next!=NULL&& temp1->next!=NULL)
        {
            temp->next=visited;
            temp=temp->next;
            if(temp1->next=visited)
            return 1;
        }
            return 0;
    }
    void display()
    {
        Node *temp;
        Node* temp1=head1;
        Node* temp2=head2;
        if(head1==NULL && head2==NULL)
        cout<<"Empty List"<<endl;
        else
        {
            while(temp1!=NULL)
            {
                cout<<temp1->data<<"->";
                temp1=temp1->next;
            }
            while(temp2!=NULL)
            {
                cout<<temp2->data<<"->";
                temp2=temp2->next;
            }
        }
    }
};
int main()
{
    list obj;
    obj.insert(2);
    obj.insert(5);
    obj.insert(3);
    obj.insert(0);
    obj.insert(1);
    obj.insert(9);
    // obj.display();
    // obj.display();
    // obj.insertany(4,2);
    // obj.display();
    // obj.insertbeg(6);
    cout<<obj.insertion()<<endl;
    obj.display();
    return 0;
}
