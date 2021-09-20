#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
    vector<int> res;

public:
    void traverse(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        traverse(root->left);
        res.push_back(root->val);
        traverse(root->right);
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        traverse(root);
        return res;
    }
};

int main()
{
    TreeNode *nd = new TreeNode();

    TreeNode *last = new TreeNode();
    last->val = 3;
    last->right = NULL;
    last->left = NULL;

    TreeNode *second = new TreeNode();
    second->val = 2;
    second->right = NULL;
    second->left = last;

    nd->val = 1;
    nd->left = NULL;
    nd->right = second;

    vector<int> res = Solution().inorderTraversal(nd);

    for (int item : res)
    {
        cout << item << " ";
    }

    return 0;
}