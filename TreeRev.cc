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
void pl(string s, Node *root)
{
    if (root == NULL)
        return;
    s += to_string(root->data);
    pl(s, root->left);
    pl(s, root->right);
    return;
}
void printLargest(Node *root)
{
    // Write your code here.
    string s = "";
    pl(s, root);
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    cout<<s;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(32);
    root->left->left = new Node(20);
    root->left->right = new Node(21);
    root->right->left = new Node(31);
    root->right->right = new Node(30);
    printLargest(root);
}