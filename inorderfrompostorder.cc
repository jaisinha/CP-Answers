#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value)
    {
      data=value;
      left=NULL;
      right=NULL;
    }
};
int search(int inorder[],int start,int end,int curr)
{ 
    for(int i=start;i<=end;i++){
    if(inorder[i]==curr)
    return i;}
    return -1;
}
Node* buildtree(int postorder[],int inorder[],int start,int end)
{
    static int idx=end;
    int curr=postorder[idx];
    if(start>end)
    return NULL;
    idx--;
    Node* node=new Node(curr);
    if(start==end)
    return node;
    int pos=search(inorder,start,end,curr);
    node->right=buildtree(postorder,inorder,pos+1,end);  //storing in the stack /*also reverse to that of inorder from preorder
    node->left=buildtree(postorder,inorder,start,pos-1); //storing in the stack   becasuse we start form end in postorder*/
    return node;
}
void innorder(Node* root)
{
    if(root==NULL)
    return;
    innorder(root->left);
    cout<<root->data<<" ";
    innorder(root->right);
}
int main()
{
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    // build tree
    Node* root=buildtree(postorder,inorder,0,4);
    innorder(root);
    return 0;
}