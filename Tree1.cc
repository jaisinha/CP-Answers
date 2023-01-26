#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left,*right;
    public:
    Node(int value)
    {
        value=data;
        right=NULL;
        left=NULL;
    }
};

int main()
{
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    cout<<root->left;
}