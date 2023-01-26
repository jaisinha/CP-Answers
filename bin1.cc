#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int data)
    {
        value = data;
        left = NULL;
        right = NULL;
    }
};
void lvloder(Node *root)
{
    queue<Node *> q;
    vector<int> v;
     if (root == NULL)
        return; 
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node* node = q.front();
        q.pop();
        if (node != NULL)
        {
            v.push_back(node->value);
            if (node->left);
            q.push(node->left);
            if (node->right);
            q.push(node->right);
        }
        else
            q.push(NULL);
    }
    for (auto &i : v)
        cout << i << " ";
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
    lvloder(root);
}