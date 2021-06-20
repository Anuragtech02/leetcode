#include <iostream>
#include <string>
#include <vector>

using namespace std;

string restoreString(string s, vector<int> &indices)
{
    string res = "";

    for (int i = 0; i < s.length(); i++)
    {
        res += s[indices[i]];
    }

    return res;
}

int main()
{
    string test = "abc";
    vector<int> tst = {0, 1, 2};

    cout << restoreString(test, tst);
}