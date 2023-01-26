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
void flattenTree(Node *root)
{
    if (root == NULL)
        return;
    flattenTree(root->left);
    flattenTree(root->right);
    Node *temp;
    if (root->right)
    {
        temp = root->right;
        root->right = root->left;
        root->right->right = temp;
    }
}
void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
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
    // preorder(root);
    // cout<<endl;
    flattenTree(root);
    preorder(root);
    // inorder(root);
    return 0;
}