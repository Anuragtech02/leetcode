#include <iostream>
#include <vector>
using namespace std;

vector<int> decode(vector<int> &encoded, int first)
{
    vector<int> res;
    res.push_back(first);
    for (int i = 0; i < encoded.size(); i++)
    {
        first = first ^ encoded[i];
        res.push_back(first);
    }
    return res;
}

int main()
{
    vector<int> encoded = {1, 2, 3};
    vector<int> res = decode(encoded, 1);
    for (int item : res)
    {
        cout << item << " ";
    }
}