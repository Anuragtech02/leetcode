#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> minOperations(string boxes)
{
    vector<int> res;
    unordered_map<int, int> umap;
    for (int i = 0; i < boxes.length(); i++)
    {
        // if(boxes[i]){
        if (!umap[i])
        {
            umap[i] = 0;
        }
        umap.insert({i, umap[i] + i});
        // }s
    }
}

int main()
{
}