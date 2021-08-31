#include <iostream>
using namespace std;

class Solution
{
public:
    int findTheWinner(int n, int k)
    {
        if (n == 1)
        {
            return 0;
        }
        return (findTheWinner(n - 1, k) + k) % n;
    }
};

int main()
{
    int n = 5, k = 2;
    cout << Solution().findTheWinner(n, k) + 1;
    return 0;
}