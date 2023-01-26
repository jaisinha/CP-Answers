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
int calHeighBal(Node *root)
{
    if (root ==  NULL)
        return 0;
    int lh = calHeighBal(root->left) + 1;
    int rh = calHeighBal(root->right) + 1;
    return abs(lh - rh);
}
bool isBal(Node *root)
{
    if (calHeighBal(root)) <= 1)
        return true;
    return false;
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
    calHeighBal(root);
    cout << isBal(root);
    // inorder(root);
    return 0;
}