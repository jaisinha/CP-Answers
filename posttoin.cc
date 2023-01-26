#include<bits/stdc++.h>
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
int search(int left,int right,int preorder[],int inorder[],int curr){
    for(int i=left;i<=right;i++)
    {
        if(inorder[i]==curr)
        return i;
    }
    return -1;
}
Node* preorderT(int left,int right,int preoder[],int inorder[]){
    if(left>right)
    return NULL;
    static int idx=0;
    int curr=preoder[idx];
    idx++;
    Node* node=new Node(curr);
    if(left==right)
    return node;
    int mid=search(left,right,preoder,inorder,curr);
    node->left=preorderT(left,mid-1,preoder,inorder);
    node->right=preorderT(mid+1,right,preoder,inorder);
    return node;
}
void inorderPrint(Node* root)
{
    if(root==NULL)
    return;
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
int main()
{
    int preorder[]={1,2,3};
    int inorder[]={2,1,3};
    Node* root=preorderT(0,2,preorder,inorder);
    inorderPrint(root);
}