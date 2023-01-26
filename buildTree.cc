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
TreeNode<int> *constructCBT(vector<int> arr)
{
    // Write your code here.
    if (arr.size() == 0)
        return NULL;
    int i = 0;
    TreeNode<int> *node = new TreeNode<int>(arr[0]);
    while (true)
    {
        if (i + 1 != arr.size())
            node->left = new TreeNode<int>(arr[i + 1]);
        else
            break;
        if (i + 2 != arr.size())
            node->right = new TreeNode<int>(arr[i + 2]);
        else
            break;
        i += 1;
    }
    return node;
}
int main()
{
    vector<int> arr={5,6,10,2,3,5,9};
    TreeNode(arr);
}