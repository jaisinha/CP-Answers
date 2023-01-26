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
Node *deleBSt(Node *root, int val)
{
    if (root == NULL)
        return NULL;
    else if (val < root->data)
        root->left=deleBSt(root->left, val);
    else if (root->data < val)
        root->right=deleBSt(root->right, val);
    else
    {
        if (root->left == NULL && root->  == NULL)
        {
            delete (root);
            return NULL;
        }
        else if (root->left == NULL || root->right == NULL)
        {
            Node *temp = root->left ? root->left : root->right;
            delete (root);
            return temp; //replaces root;
        }
        else if (root->left != NULL && root->right != NULL)
        {
            Node *temp = root->right;
            while (temp->left != NULL)
                temp = temp->left;
            root->data = temp->data;
            root->right = deleBSt(root->right,root->data);
        }
    }
    return root;
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