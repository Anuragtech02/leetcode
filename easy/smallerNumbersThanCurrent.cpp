#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    // sort(nums.begin(), nums.end());
    vector<int> res;

    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
        res.push_back(0);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (nums[j] < nums[i])
                res[i]++;
        }
    }

    return res;
}

int main()
{
    vector<int> test = {8, 1, 2, 2, 3};
    vector<int> res = smallerNumbersThanCurrent(test);
    for (int item : res)
    {
        cout << item << endl;
    }
}