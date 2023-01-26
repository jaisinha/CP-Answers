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
Node *insertNode(Node *root, int val)
{
    if (root == NULL)
        return new Node(val);
    else if (val < root->data)
        root->left = insertNode(root->left, val);
    else
        root->right = insertNode(root->right, val);
    return root; //if needed not important
}
void preorder(Node *root)
{
    if (root == NULL)
        return;
    preorder(root->left);
    cout << root->data << " ";
    preorder(root->right);
}
int main()
{
    Node *root = NULL;
    root = insertNode(root, 1); // use this or there will be a blank output
    insertNode(root, 11);
    insertNode(root, 3);
    insertNode(root, 12);
    insertNode(root, 5);
    insertNode(root, 10);
    deleBSt(root, 11);
    preorder(root);
}