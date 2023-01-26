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
vector<int> traverseBoundary(Node *root) // left
{
    // Write your code here.
    queue<Node *> Q;
    vector<int> v;
    if (root == NULL)
        return v;
    Q.push(root);
    while (!Q.empty())
    {
        int n = Q.size();
        for (int i = 0; i < n; i++)
        {
            Node *node = Q.front();
            Q.pop();
            if (i == 0)
                v.push_back(node->data);
            if (node->left != NULL)
                Q.push(node->left);
            if (node->right != NULL)
                Q.push(node->right);
        }
    }
    return v;
}
vector<int> traverseBoundary1(Node *root) // right
{
    queue<Node *> Q;
    vector<int> v1;
    if (root == NULL)
        return v1;
    Q.push(root);
    while (!Q.empty())
    {
        int n = Q.size();
        for (int i = 0; i < n; i++)
        {
            Node *node = Q.front();
            Q.pop();
            if (i == n - 1)
                v1.push_back(node->data);
            if (node->left != NULL)
                Q.push(node->left);
            if (node->right != NULL)
                Q.push(node->right);
        }
    }
    reverse(v1.begin(), v1.end());
    return v1;
}
vector<int> v;
vector<int> bottomView(Node *root) // bottom
{
    if (root == NULL)
        return v;
    if (root->left == NULL && root->right == NULL)
        v.push_back(root->data);
    bottomView(root->left);
    bottomView(root->right);
    return v;
}
void combine(Node *root)
{
    unordered_map<int, int> m;
    if (root == NULL)
        return;
    vector<vector<int>> v1;
    vector<int> v2;
    v1.push_back(traverseBoundary(root));
    v1.push_back(bottomView(root));
    v1.push_back(traverseBoundary1(root));
    // reverse(v1.begin(),v1.end());
    for (auto &i : v1)
    {
        for (auto &j : i)
            m[j]++;
    }
    for (auto &i : m)
        v2.push_back(i.first);
    reverse(v2.begin(), v2.end());
    for (auto &i : v2)
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
    combine(root);
}