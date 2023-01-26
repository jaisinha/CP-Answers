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
int replacesum(Node* root)
{
    if(root==NULL)
    return 0;
    replacesum(root->left);
    replacesum(root->right);
    return root->data+replacesum(root->left)+replacesum(root->right);
}
void inorder(Node* root){
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->right=new Node(6);
    root->right->left=new Node(7);
    replacesum(root);
    inorder(root);
    return 0;
}