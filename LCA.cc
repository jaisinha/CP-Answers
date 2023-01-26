#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
Node* LCA(Node* root,int P,int Q){
    if(root==NULL)
    return NULL;
    Node* Ln=LCA(root->left,P,Q);
    Node* Rn=LCA(root->right,P,Q);
    if(root->data==P || root->data==Q)
    return root;
    if(Ln!=NULL && Rn!=NULL)
    return root;
    else if(Ln!=NULL)
    return Ln;
    else
    return Rn;
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->right->left = new Node(7);
    cout<<LCA(root,2,3)->data;
    // inorder(root);
    return 0;
}