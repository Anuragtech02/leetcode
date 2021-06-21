#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class SubrectangleQueries
{
    vector<vector<int>> rectangle;

public:
    SubrectangleQueries(vector<vector<int>> &rect)
    {
        rectangle = rect;
    }

    void printRect()
    {
        for (int i = 0; i < rectangle.size(); i++)
        {
            for (int j = 0; j < rectangle[i].size(); j++)
            {
                cout << rectangle[i][j] << " ";
            }
            cout << endl;
        }
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        for (int i = row1; i <= row2; i++)
        {
            for (int j = col1; j <= col2; j++)
            {
                rectangle[i][j] = newValue;
            }
        }
    }

    int getValue(int row, int col)
    {
        return rectangle[row][col];
    }
};

int main()
{
    /**
     * Your SubrectangleQueries object will be instantiated and called as such:
     * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
     * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
     * int param_2 = obj->getValue(row,col);
     */
    vector<vector<int>> rectangle;
    vector<int> p1 = {1, 2, 1};
    vector<int> p2 = {4, 3, 4};
    vector<int> p3 = {3, 2, 1};
    vector<int> p4 = {1, 1, 1};
    rectangle.push_back(p1);
    rectangle.push_back(p2);
    rectangle.push_back(p3);
    rectangle.push_back(p4);
    SubrectangleQueries *obj = new SubrectangleQueries(rectangle);

    cout << obj->getValue(0, 2) << endl;
    obj->updateSubrectangle(0, 0, 3, 2, 5);
    obj->printRect();
}