/**********************************************************
    Following is the Binary Tree Node class structure.

    template <typename T>
    class BinaryTreeNode {
    public :
	    T data;
	    BinaryTreeNode<T> *left;
	    BinaryTreeNode<T> *right;

	    BinaryTreeNode(T data) {
	        this -> data = data;
	        left = NULL;
	        right = NULL;
	    }
    };

***********************************************************/

bool diagonalAnagram(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    // Write your code here.
	if(root1==NULL || root2==NULL)
		return true;
queue<BinaryTreeNode<int> *> q;
q.push(root1);
vector<vector<int>> v1;
while (!q.empty())
{
    int size = q.size();
	vector<int> v;
    while (size--> 0)
    {
        BinaryTreeNode<int> *rn = q.front();
        q.pop();
        while (rn)
        {
            v.push_back(rn->data);
            if (rn->left)
                q.push(rn->left);
            rn = rn->right;
        }
    }
	v1.push_back(v);
}
queue<BinaryTreeNode<int> *> q1;
q1.push(root2);
vector<vector<int>> v2;
while (!q1.empty())
{
    int size = q1.size();
	vector<int> v;
    while (size--> 0)
    {
        BinaryTreeNode<int> *rn = q1.front();
        q1.pop();
        while (rn)
        {
            v.push_back(rn->data);
            if (rn->left)
                q.push(rn->left);
            rn = rn->right;
        }
    }
	v2.push_back(v);
}
	int i=0;
	while(i<v1.size()&&i<v2.size())
	{
        
		for(int j=0;j<v1[i].size();j++)
		{
			for(int k=j;k<v1[i].size();k++)
			{
				if(v1[i][j]>v1[i][k])
				{
					int temp=v1[i][j];
					v1[i][j]=v1[i][k];
					v1[i][k]=temp;
				}
			}
		}
		for(int j=0;j<v2[i].size();j++)
		{
			for(int k=j;k<v2[i].size();k++)
			{
				if(v2[i][j]>v2[i][k])
				{
					int temp=v2[i][j];
					v2[i][j]=v2[i][k];
					v2[i][k]=temp;
				}
			}
		}
		for(int j=0;j<v1[i].size();j++)
		{
			if(v1[i][j]!=v2[i][j])
				return false;
			i+=1;
		}
	}
	return true;
}
