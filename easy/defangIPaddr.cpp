#include <bits/stdc++.h>
using namespace std;

string defangIPaddr(string address)
{
    string res = "";
    for (char item : address)
    {
        if (item == '.')
        {
            res += "[.]";
        }
        else
        {
            res += item;
        }
    }
    return res;
}

int main()
{
    string test = "1.1.1.1";
    cout << "\n"
         << defangIPaddr(test) << endl;
}