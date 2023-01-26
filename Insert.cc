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
int ceilFun(Node *root, int &key, int &ans, Node *temp)
{
    if (root == NULL)
        return 0;
    if (node && node->left == NULL && node->data > key)
        node->left = temp;
    else if (node && node->right == NULL && node->data < key)
        node->right = temp;
    ceilFun(root, key, ans, temp);
    ceilFun(root, key, ans, temp);
}
int main()
{
    Node *root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(14);
    root->left->left = new Node(8);
    root->left->right = new Node(10);
    root->right->left = new Node(13);
    root->right->right = new Node(15);
    int key =7;
    Node
    cout << ceilFun(root, 1, INT_MAX);
}