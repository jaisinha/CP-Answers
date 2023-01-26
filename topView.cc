#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
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
void TopView(Node *root)
{
    if (root == NULL)
        return NULL;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    vector<int> v;
    map<int, int> m;
    while (!q.front())
    {
        auto it = q.front();
        q.pop();
        Node *nodes = it.first;
        int line = it.second;
        if (m.find(line) == m.end())
            m[line] = nodes->data;
        if (node->left)
            q.push({nodes->left, line - 1});
        if (node->right)
            q.push({nodes->right, line + 1});
    }
    for (auto &i : m)
        v.push_back(i.second);
    return v;
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
    combine(root);
}