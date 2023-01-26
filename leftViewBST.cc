// #include<bits/stdc++.h>
// using namespace std;
// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int value)
//     {
//        data =value;
//        left=NULL;
//        right=NULL;
//     }
// };
// void rightview(Node* root)
// {
//     if(root==NULL)
//     return ;
//     queue<Node*> Q;
//     Q.push(root);
//     while(!Q.empty())
//     {

//         int n=Q.size();
//         for(int i=0;i<n;i++){  //For 1 lvl;
//         Node* curr=Q.front();
//         Q.pop();
//         if(i==1)
//         cout<<curr->data<<" ";
// if(curr->left!=NULL)
// Q.push(curr->left);
// if(curr->right!=NULL)
// Q.push(curr->right);}
//     }
// }
// int main()
// {Node *root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);
//     rightview(root);}
#include <bits/stdc++.h>
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
void rightview(Node *root)
{
    queue<Node *> Q;
    if (root == NULL)
        return;
    Q.push(root);
    while (!Q.empty())
    {
        int n = Q.size();
        for (int i = 0; i < n; i++)
        {
            Node *node = Q.front();
            Q.pop();
            if (i == 0)
                cout << node->data << " ";
            if (node->left != NULL)
                Q.push(node->left);
            if (node->right != NULL)
                Q.push(node->right);
        }
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    rightview(root);
}
