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
int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
            return i;
    }
    return -1;
}
Node *buildtree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;
    int curr = preorder[idx];
    if (start > end)
        return NULL;
    idx++;
    Node *node = new Node(curr);
    if (start == end)
        return node;
    int pos = search(inorder, start, end, curr);
    node->left = buildtree(preorder, inorder, start, pos - 1); // storing in the stack
    node->right = buildtree(preorder, inorder, pos + 1, end);  // storing in the stack
    return node;
}
void innorder(Node *root)
{
    if (root == NULL)
        return;
    innorder(root->left);
    cout << root->data << " ";
    innorder(root->right);
}
int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};
    Node *root = buildtree(preorder, inorder, 0, 4);
    innorder(root);
    return 0;
}