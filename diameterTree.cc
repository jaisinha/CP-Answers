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
// CASE 1(when the root  pass through the diameter)
int diameter1(Node* root)
{
    if(root==NULL)
    return 0;
    int lheight=height(root->left);
    int rheight=height(root->right);
    int currdia= lheight+rheight+1;
    int ldia=diameter1(root->left);
    int rdia=diameter1(root->right);
    return max(currdia,max(ldia,rdia));
}
int main()
{
   Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(32);
    root->left->left=new Node(20);
    root->left->right=new Node(21);
    root->right->left=new Node(31);
    root->right->right=new Node(30);
    cout<<
   return 0;
}