#include <bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    vector<bool> res;
    int largest = candies[0];
    for (int candy : candies)
        largest = candy > largest ? candy : largest;
    for (int candy : candies)
    {
        res.push_back(candy + extraCandies < largest ? false : true);
    }
    return res;
}

int main()
{
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    for (bool candy : kidsWithCandies(candies, extraCandies))
    {
        cout << candy << endl;
    }
}