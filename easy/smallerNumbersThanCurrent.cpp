#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> sorted = nums, res;
    sort(sorted.begin(), sorted.end());

    int size = sorted.size();
    unordered_map<int, int> hash;

    for (int i = 0; i < size; i++)
    {
        //Check if the current element
        // is already present in the map
        if (hash.count(sorted[i]) == 0)
        {
            hash[sorted[i]] = i;
        }
    }

    for (int i = 0; i < size; i++)
    {
        // extract value of the ith number in nums
        // from the hash and push to res
        res.push_back(hash[nums[i]]);
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