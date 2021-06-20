#include <iostream>

int subtractProductAndSum(int n)
{
    int prod = 1, sum = 0;
    while (n)
    {
        int last = n % 10;
        prod *= last;
        sum += last;
        n /= 10;
    }

    return prod - sum;
}

int main()
{
    std::cout << subtractProductAndSum(543);
}