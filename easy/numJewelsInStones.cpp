#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int numJewelsInStones(string jewels, string stones)
{
    int res = 0;
    for (int i = 0; i < stones.length(); i++)
    {
        if (jewels.find(stones[i]) < jewels.length())
        {
            res++;
        }
    }

    return res;
}

int main()
{
    string jewels = "aA";
    string stones = "aAABBBBB";

    cout << numJewelsInStones(jewels, stones);
}