#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string restoreString(string s, vector<int> &indices)
{
    string res = "";

    // doesn't work for some reason
    // check again later
    // for (int i = 0; i < s.length(); i++)
    // {
    //     res[i] = s[indices[i]];
    //     cout << res[i] << endl;
    // }

    unordered_map<int, char> hash;

    for (int i = 0; i < s.length(); i++)
    {
        hash.insert({indices[i], s[i]});
    }

    for (int i = 0; i < s.length(); i++)
    {
        res += hash[i];
    }

    return res;
}

int main()
{
    string test = "codeleet";
    vector<int> tst = {4, 5, 6, 7, 0, 2, 1, 3};

    cout << restoreString(test, tst);
}