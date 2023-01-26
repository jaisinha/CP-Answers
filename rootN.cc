////  Level order traversal// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int value)
//     {
//        data =value;
//        left=NULL;
//        right=NULL;
//     }
// };
// void printqueue(Node* root)
// {
//     if(root==NULL)
//     return;
//     queue<Node*> Q;
//     Q.push(root);
//     Q.push(NULL);
//     while(!Q.empty())
//     {
//         Node *node=Q.front();
//         Q.pop();
//         if(node!=NULL)
//         {
//         cout<<node->data<<" ";
//         if(node->left);
//         cout<<node->left<<" ";
//         if(node->right)
//         cout<<node->right<<" ";
//         }
//         else if(!Q.empty())
//         Q.push(NULL);
//     }
// }
// int32_t main(){
// Node *root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(32);
//     root->left->left=new Node(20);
//     root->left->right=new Node(21);
//     root->right->left=new Node(31);
//     root->right->right=new Node(30);
//     printqueue(root);
//     return 0;
// }
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int value)
//     {
//        data =value;
//        left=NULL;
//        right=NULL;
//     }
// };
// void lvlorder(Node* root)
// {
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty())
//     {
//         Node* node=q.front();
//         q.pop();
//         if(node!=NULL)
//         {
//             cout<<node->data<<" ";
//             if(node->left)
//             q.push(node->left);
//             if(node->right)
//             q.push(node->right);
//         }
//         else if(!q.empty())
//         q.push(NULL);
//     }
// }
// int32_t main(){
// Node *root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(32);
//     root->left->left=new Node(20);
//     root->left->right=new Node(21);
//     root->right->left=new Node(31);
//     root->right->right=new Node(30);
//     lvlorder(root);
//     return 0;
// }
/// sum of Kth Node
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int value)
//     {
//        data =value;
//        left=NULL;
//        right=NULL;
//     }
// };
// void sumK(Node* root){
// queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     int lvl=0;
//     int sum=0;
//     int k=2;
//     while(!q.empty())
//     {
//         Node* node=q.front();
//         q.pop();
//         if(node!=NULL)
//         {
//             if(lvl==k)
//             sum+=node->data;
//             if(node->left)
//             q.push(node->left);
//             if(node->right)
//             q.push(node->right);
//         }
//         else if(!q.empty()){
//         q.push(NULL);
//         lvl++;}
//     }
//     cout<<sum;
// }
// int32_t main(){
// Node *root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(32);
//     root->left->left=new Node(20);
//     root->left->right=new Node(21);
//     root->right->left=new Node(31);
//     root->right->right=new Node(30);
//     sumK(root);
//     return 0;
// }
// Count No.of trees
// class Node
// {
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int value)
//     {
//        data =value;
//        left=NULL;
//        right=NULL;
//     }
// };
// int count(Node* root){
//     if(root==NULL)
//     return 0;
//     return max(count(root->left),count(root->right))+1;

// }
// int diameter(Node* root)
// {

//     return max(,max(diameter(root->left),diameter(root->right)));
// }
// int32_t main(){
// Node *root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(32);
//     root->left->left=new Node(20);
//     root->left->right=new Node(21);
//     root->right->left=new Node(31);
//     root->right->right=new Node(30);
//     cout<<diameter(root);
//     return 0;
// }
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int value)
//     {
//        data =value;
//        left=NULL;
//        right=NULL;
//     }
// };
// void sumreplac(Node* root)
// {
//     if(root==NULL)
//     return ;
//     sumreplac(root->left);
//     sumreplac(root->right);
//     if(root->left!=NULL)
//     root->data+=root->left->data;
//     if(root->right!=NULL)
//     root->data+=root->right->data;
// }
// void preorder(Node* root)
// {
//     if(root==NULL)
//     return;
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// int32_t main(){
// Node *root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);
//     preorder(root);
//     cout<<endl;
//     sumreplac(root);
//     preorder(root);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int value)
//     {
//        data =value;
//        left=NULL;
//        right=NULL;
//     }
// };
// int height(Node* root)
// {
//     if(root==NULL)
//     return 0;
//     int lh=height(root->left);
//     int rh=height(root->right);
//     return max(lh,rh)+1;//us node ki height
// }
// bool isbalance(Node* root)
// {
//     if(isbalance(root->left)==false)
//     return false;
//     if(isbalance(root->left)==true)
//     return true;
//     int lh=height(root->left);  // left node ki height
//     int rh=height(root->right); // right node ki height
//     if(abs(lh-rh)<=1)
//     return true;       // ye total height hi dekh rah hai bass check kar rah har node pe;
//     else
//     return false;
// }
// int32_t main(){
// Node *root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);
//     if(isbalance(root))
//     cout<<"YES";
//     else
//     cout<<"NO";
//     return 0;
// }
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value)
//     {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };
// void printqueue(Node *root)
// {
//     if (root == NULL)
//         return;
//     queue<Node *> Q;
//     Q.push(root);
//     while (!Q.empty())
//     {
//         int n = Q.size();
//         for (int i = 0; i < n; i++)
//         {
//             Node *node = Q.front();
//             Q.pop();
//             if (i == n - 1)
//                 cout << node->data << " ";
//             if (node->left != NULL)
//                 Q.push(node->left);
//             if (node->right != NULL)
//                 Q.push(node->right);
//         }
//     }
// }
// int32_t main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(32);
//     root->left->left = new Node(20);
//     root->left->right = new Node(21);
//     root->right->left = new Node(31);
//     root->right->right = new Node(30);
//     printqueue(root);
//     return 0;
// }
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value)
//     {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };
// void printqueue(Node *root)
// {
//     if (root == NULL)
//         return;
//     queue<Node *> Q;
//     Q.push(root);
//     int flag = 0;
//     while (!Q.empty())
//     {
//         int n = Q.size();
//         for (int i = 0; i < n; i++)
//         {
//             Node *node = Q.front();
//             Q.pop();
//             if (flag == 0)
//             {
//                 if (i == n - 1)
//                 {
//                     cout << node->data << " ";
//                     flag = 1;
//                 }
//             }
//             if (i == n - 2)
//             {
//                 cout << node->data << " ";
//             }
//             if (node->left != NULL)
//                 Q.push(node->left);
//             if (node->right != NULL)
//                 Q.push(node->right);
//         }
//     }
// }
// int32_t main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(32);
//     root->left->left = new Node(20);
//     root->left->right = new Node(21);
//     root->right->left = new Node(31);
//     root->right->right = new Node(30);
//     printqueue(root);
//     return 0;
// }
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value)
//     {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };
// bool getpath(Node* root,int key,vector<int> &v)
// {
//     if(root==NULL)
//     return false;
//     v.push_back(root->data);
//     if(root->data==key)
//     return true;
//     if(getpath(root->left,key,v)||getpath(root->right,key,v))
//     return true;
//     v.pop_back();
//     return false;
// }
// int LCA(Node* root,int n1,int n2)
// {
//     vector<int> v1,v2;
//     if(!getpath(root,n1,v1)||!getpath(root,n2,v2))
//     return -1;
//     int pc;
//     for(pc=0;pc<v1.size()&&v2.size();pc++){
//     if(v1[pc]!=v2[pc])
//     break;
//     }
//     return v1[pc-1];

// }
// int32_t main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(32);
//     root->left->left = new Node(20);
//     root->left->right = new Node(21);
//     root->right->left = new Node(31);
//     root->right->right = new Node(30);
//     int n1=31;
//     int n2=30;
//     int lca=LCA(root,31,30);
//     if(lca==-1)
//     cout<<"Not Found";
//     else
//     cout<<lca;
//     return 0;
// }
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value)
//     {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };
// IF the LCA Exists
// Node* LCA(Node* root,int n1,int n2)
// {
//     if(root==NULL)
//     return NULL;
//     if(root->data==n1&&root->data==n2)
//     return root;
//     Node* left=LCA(root->left,n1,n2);
//     Node* right=LCA(root->right,n1,n2);
//     if(right!=NULL&&right!=NULL)
//     return root;
//     if(right==NULL&&left==NULL)
//     return NULL;
//     if(left!=NULL)
//     return LCA(root->left,n1,n2);
//     return LCA(root->right,n1,n2);
// }
// int dis(Node* root,int n1,int dist)
// {
//      if(root==NULL)
//      return -1;
//      if(root->data==n1);
//      return dist;
//      int left=dis(root->left,n1,dist+1);
//      if(left!=-1)
//      return left;
//      int right= dis(root->right,n1,dist+1);
//      if(right!=-1)
//      return right;

// }
// int distance(Node* root,int n1,int n2)
// {
//     Node* lca=LCA(root,n1,n2);
//     int d1=dis(lca,n1,0);
//     int d2=dis(lca,n2,0);
//     return d1+d2;
// }
// // int32_t main()
// // {
// //     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->right->right = new Node(5);
//     cout<<distance(root,4,5);
//     return 0;
// }
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value)
//     {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };
// int dia(Node* root,int& d)
// {
//     if(root==NULL)
//     return -1;
//     int ln=dia(root->left,d); // always same for binary trees
//     int rn=dia(root->right,d);
//     d=max(d,ln+rn+2);
//     return max(ln,rn)+1;

// }

// int32_t main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->right->right = new Node(5);
//     int d=0;
//     dia(root,d);
//     cout<<d;
//     return 0;
// }
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value)
//     {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };
// Node* BST(Node* root,int value)
// {
//     if(root==NULL)
//     return new Node(value);
//     if(value<root->data)
//     root->left=BST(root->left,value);
//     else
//     root->right=BST(root->right,value);
//     return root;

// }
// int32_t main()
// {
//     Node* root=NULL;
//     root=BST(root,5);
//     BST(root,10);
//     BST(root,3);
//     BST(root,7);
//     BST(root,9);
//     inorder(root);
//     cout<<endl;
//     return 0;
// }
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value)
//     {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };
// void inorder_traversal(Node *root,int value)
// {
//     if (root == NULL)
//         return;
//     inorder_traversal(root->left);
//     cout << root->value << " ";
//     inorder_traversal(root->right);
// }
// Node *BST(Node *root, int value)
// {
//     if (root == NULL)
//         return new Node(value);
//     if (value < root->data)
//         root->left = BST(root->left, value);
//     else
//         root->right = BST(root->right, value);
//     return root;
// }
// void delete (Node *root, int value)
// {
//     if (root == NULL)
//         return NULL;
//     if (value < root->data)
//         root->left = BST(root->left, value);
//     else if (value > root->data)
//         root->right = BST(root->right, value);
//     else
//     {
//         if (root->left == NULL && root->right == NULL)
//         {
//             delete (root);
//             return NULL;
//         }
//         if (root->left == NULL || root->right == NULL)
//         {
//           Node* temp=root->left?root->left:root->right;
//           delete(root);
//           return temp;
//         {
//         if (root->left != NULL && root->right != NULL)
//         {
//            Node* temp=node->right;
//            while(temp->left!-NULL)
//            temp=temp->left;
//            root->value=temp->value;
//            node->right=delete(node->right,node->value);
//            return node;
//         }
// int main()
// {
//     vector<int> v = {11,7,9,4,15,12,1,10,25,20,22};
//     Node* root = NULL;
//     cout << "BST created from : ";
//     for (int i : v)
//     {
//         cout << i << " ";
//         if (root == NULL)
//             root = insert(root, i);
//         else
//             insert (root, i);
//     }
//     cout << endl;

//     cout << "Inorder Traversal of BST: ";
//     inorder_traversal(root);
//     cout << endl << endl;

//     cout << "Delete 10 from the BST" << endl;
//     root = delete(root, 10);
//     cout << "Inorder Traversal of BST: ";
//     inorder_traversal(root);
//     cout << endl << endl;

//     cout << "Delete 4 from the BST" << endl;
//     root = delete(root, 4);
//     cout << "Inorder Traversal of BST: ";
//     inorder(root);
//     cout << endl << endl;

//     cout << "Delete 15 from the BST" << endl;
//     root = delete(root, 15);
//     cout << "Inorder Traversal of BST: ";
//     inorder_traversal(root);
//     cout << endl << endl;

//     return 0;
// }
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value)
//     {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };
// Node *BST(Node *root, int value)
// {
//     if (root == NULL)
//         return new Node(value);
//     if (value < root->data)
//         root->left = BST(root->left, value);
//     else
//         root->right = BST(root->right, value);
//     return root;
// }
// bool valid(vector<int> &v)
// {
//     stack<int> s;
//     int root=INT_MIN;
//     for(int i=0;i<v.size();i++)
//     {
//        if(!s.empty()&&v[i]>s.top())
//        {
//           root=s.top();
//           s.pop();
//        }
//        else if(v[i]<root)
//        return false;
//        s.push(v[i]);
//     }
//     return true;
// }
// int32_t main()
// {
//     vector<int> v={44,22,11,33,66,55,77,88};
//     cout<<valid(v);
//     return 0;
// }
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value)
//     {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };
// Node *BST(Node *root, int value)
// {
//     if (root == NULL)
//         return new Node(value);
//     if (value < root->data)
//         root->left = BST(root->left, value);
//     else
//         root->right = BST(root->right, value);
//     return root;
// }
// bool isvalid(Node* root,Node* minNode,Node* maxnode)
// {
//     if(node==NULL)
//     return true;
//     if(minNode&&node->value<=minNode->value || maxnode&&node->value>=maxnode->value)
//     return false;
//     isvalid(root->left,minNode,root);
//     isvalid(root->right,root,maxnode);
//     return true;
// }
// int32_t main()
// {
//     Node *node=new node(15); 
//     cout<<isvalid(root);
//     return 0;
// }
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
Node *BST(Node *root, int value)
{
    if (root == NULL)
        return new Node(value);
    if (value < root->data)
        root->left = BST(root->left, value);
    else
        root->right = BST(root->right, value);
    return root;
}
Node* construct(vector<int> &v,int start,int end)
{
    if(start>end)
    return NULL; // base case;
    int mid=(start+end)/2;
    Node* root=new Node(v[mid]);
    root->left=construct(v,start,mid-1);
    root->right=construct(v,mid+1,end);
    return root;
}
void inorder(Node* root)
{
    if(root==NULL)
    return ;
    inorder(root->left);
    cout<<root-><<" ";
    inorder(root->right);
}
int32_t main()
{
    vector<int> v={11,22,33,44,55,66,77,88};
    construct(v,0,7);
    inorder(root);
    return 0;
}
