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
void sumRep(Node* root){
    if(root==NULL)
    return ;
    sumRep(root->left);
    sumRep(root->right);
    if(root->left!=NULL)
    root->data+=root->left->data;
    if(root->right!=NULL)
    root->data+=root->right->data;
}
void preorder(Node* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int32_t main(){
Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(32);
    root->left->left=new Node(20);
    root->left->right=new Node(21);
    root->right->left=new Node(31);
    root->right->right=new Node(30);
    sumRep(root);
    preorder(root);
    return 0;
}