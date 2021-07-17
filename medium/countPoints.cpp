#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int distanceBtPoints(int x1, int y1, int x2, int y2)
{
    return ceil(sqrt(pow((x1 - x2), 2) + pow(y1 - y2, 2)));
}

vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries)
{
    // attempting brute force
    vector<int> res;
    for (vector<int> query : queries)
    {
        int count = 0;
        for (vector<int> point : points)
        {
            int distance = distanceBtPoints(query[0], query[1], point[0], point[1]);

            if (distance <= query[2])
            {
                count++;
            }
        }
        res.push_back(count);
    }
    return res;
}

int main()
{
    // do something
    return 0;
}