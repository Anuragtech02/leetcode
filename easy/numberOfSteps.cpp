#include <iostream>
using namespace std;

int numberOfSteps(int num)
{
    int count = 0;
    while (num)
    {
        if (num & 1)
        {
            --num;
            count++;
            if (num > 0)
            {
                num = num >> 1;
                count++;
            }
        }
        else
        {
            num = num >> 1;
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << numberOfSteps(n) << endl;
}