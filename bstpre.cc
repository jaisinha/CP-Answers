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
void bstpre(int preorder[])
{
    int i = 0;
    Node *node = new node(preorder[0]);
    while (i < 6 && node)
    {
        i++;
        if (node->data > preorder[i])
        {
            node->left = new node(preorder[i])
                node = node->left;
        }
        else
        {
            node->right = new node(preorder[i])
                node = node->right;
        }
    }
}
int main()
{
    int preorder[] = {8, 7, 1, 7, 10, 12};
    cout << bstpre(preorder);
    return 0;
}