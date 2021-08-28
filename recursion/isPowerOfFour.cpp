#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n == 0)
            return false;
        if (n == 1)
            return true;
        if (n % 2 != 0 || n % 4 != 0)
            return false;
        return isPowerOfFour(n / 4);
    }
};

int main()
{
    cout << Solution().isPowerOfFour(44);
}