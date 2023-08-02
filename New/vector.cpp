#include <iostream>
#include <vector>
using namespace std;

void displayVec(vector<int> tishat)
{
    for (int i = 0; i < tishat.size(); i++)
    {
        cout << tishat[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> tishat;

    tishat.push_back(14);
    tishat.push_back(14);
    tishat.push_back(14);
    tishat.push_back(14);
    tishat.push_back(4);

    displayVec(tishat);
    return 0;
}