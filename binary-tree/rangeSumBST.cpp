#include <iostream>
using namespace std;

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
    long int sum = 0;

public:
    bool liesBetweenRange(int value, int low, int high)
    {
        return value >= low && value <= high;
    }
    void traverse(TreeNode *root, int low, int high)
    {
        if (!root)
            return;

        sum += liesBetweenRange(root->val, high, low) ? root->val : 0;
        traverse(root->left, low, high);
        traverse(root->right, low, high);
    }
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        this->sum = 0;
        traverse(root, low, high);
        return sum;
    }
};

int main()
{
}