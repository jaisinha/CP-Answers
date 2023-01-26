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
// void inorder(Node* root){
//     if(root==NULL)
//     return;
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// int main()
// {Node *root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);
//     inorder(root);
// }
`class Solution {
public:
    vector<int>ans;
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
}