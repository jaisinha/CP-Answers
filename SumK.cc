#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int value)
    {
       data =value;
       left=NULL;
       right=NULL;
    }
};
int sumatk(Node* root,int k)
{
    if(root==NULL)
    return -1;
    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);
    int lvl=0;
    int sum=0;
    while(!Q.empty())
    {
        Node* node=Q.front();
        Q.pop();
        if(node!=NULL)
        {
            sum+=node->data;
            if(node->left)
            Q.push(node->left);
            if(node->right)
            Q.push(node->right);
        }
        else if(!Q.empty()){
        Q.push(NULL);
        lvl++;}
    }
    return sum;
}
int32_t main(){
Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(32);
    root->left->left=new Node(20);
    root->left->right=new Node(21);
    root->right->left=new Node(31);
    root->right->right=new Node(30);
    cout<<sumatk(root,2);
    return 0;
}