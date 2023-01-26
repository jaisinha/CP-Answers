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
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    cout << root->data << " ";
    while (!q.empty())
    {
        Node *root1 = q.front();
        q.pop();
        if (root1 != NULL)
        {
            if (root1->left)
                q.push(root1->left);
            if (root1->right)
                q.push(root1->right);
        }
        else if (!q.empty())
        {
            Node *req = q.front();
            cout << req->data << " ";
            q.push(NULL);
        }
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(7);
    root->left->left->right = new Node(8);
    root->left->left->right->left = new Node(9);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->left->left = new Node(5);
    rightview(root);
}