#include <iostream>

//  Definition for a binary tree node.
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
    TreeNode *res;

public:
    void traverse(TreeNode *root1, TreeNode *root2)
    {
        if (root1)
        {
        }
    }

    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
    {
        traverse(root1, root2);

        return res;
    }
};

int main()
{
    return 0;
}