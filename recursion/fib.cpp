#include <iostream>
#include <vector>
using namespace std;

// Normal recursive solution
// class Solution
// {
//     int prev = 0;
//     int next = 1;
//     int res = 0;

// public:
//     int fib(int n)
//     {
//         if (n <= 1)
//         {
//             return n;
//         }
//         res = prev + next;
//         prev = next;
//         next = res;
//         fib(--n);
//         return res;
//     }
// };

// DP (Memoization Solution)
class Solution
{
public:
    int fib(int n, vector<int> &res)
    {
        if (n <= 1)
        {
            return n;
        }
        if (res[n] != -1)
        {
            return res[n];
        }
        int ans = fib(n - 1, res) + fib(n - 2, res);
        res[n] = ans;
        return ans;
    }

    int fib(int n)
    {
        vector<int> res(n + 1, -1);
        return fib(n, res);
    }
};

int main()
{

    int a;
    cin >> a;
    cout << Solution().fib(a);
    return 0;
}