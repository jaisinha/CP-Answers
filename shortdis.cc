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
    if(root->data==P || root->data==Q) // jaise hi 
    // value mili ek node me to subtree hi chodh diya
    return root;
    Node* Ln=LCA(root->left,P,Q);
    Node* Rn=LCA(root->right,P,Q);
    if(Ln!=NULL && Rn!=NULL)
    return root;
    else if(Ln!=NULL)
    return Ln;
    else
    return Rn;
}
int height(Node* root,int P,int Q){
    Node* lca=LCA(root,P,Q);
    if(lca==NULL)
    return 0;
    int ll=height(lca->left,P,Q);
    int lr=height(lca->right,P,Q);
    if(lca->data==P)
    return ll+lr+1;
    if(lca->data==Q)
    return ll+lr+1;
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
    cout<<height(root,2,6);
    // inorder(root);
    return 0;
}