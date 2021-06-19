#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int numsIdenticalPairs(vector<int> nums)
{
    int res = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums.at(i) == nums.at(j))
                res++;
        }
    }

    return res;
}

// Using unordered_map
int numsIdenticalPairsMap(vector<int> nums)
{

    unordered_map<int, int> hash_map;
    for (int i = 0; i < nums.size(); i++)
    {
        if (hash_map.count(nums[i]) > 0)
            hash_map[nums[i]]++;
        else
            hash_map[nums[i]] = 1;
    }

    int res = 0;
    for (auto item : hash_map)
    {
        int value = item.second;
        if (value > 1)
        {
            res += value * (value - 1) / 2;
        }
    }

    return res;
}

int main()
{
    vector<int> res = {1, 2, 3, 1, 1, 3};

    cout << numsIdenticalPairsMap(res) << endl;
}