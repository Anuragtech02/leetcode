#include <bits/stdc++.h>
using namespace std;
#define long long int

vector<int> runningSum(vector<int> &nums)
{
    // Non destructive solution
    vector<int> sum;
    sum.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        sum.push_back(sum[i - 1] + nums[i]);
    }
    return sum;
}

vector<int> runningSumDestructive(vector<int> &nums)
{
    // Destructive solution -> Modifies the original
    // vector nums.

    // vector<int> sum;
    // sum.push_back(nums[0]);
    // for (int i = 1; i < nums.size(); i++)
    // {
    //     sum.push_back(sum[i - 1] + nums[i]);
    // }
    // return sum;
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] = nums[i - 1] + nums[i];
    }
    return nums;
}

int main()
{
    vector<int> A = {3, 1, 2, 10, 1};
    for (int num : runningSumDestructive(A))
    {
        cout << num << "\n";
    }
    cout << "\n\nDestructive\n\n";
    for (int num : A)
    {
        cout << num << "\n";
    }
}