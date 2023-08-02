#include <iostream>
#include <vector>
using namespace std;

void displayVec(vector<string> tishat)
{
    for (int i = 0; i < tishat.size(); i++)
    {
        cout << tishat[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<string> tishat;
    // int opi[5] = {2, 2, 3, 4, 5};
    int s;
    cout << "Please enter the size of the array : ";
    cin >> s;
    string *opi = new string[s];

    for (int i = 0; i < s; i++)
    {
        cin >> opi[i];
    }

    for (int i = 0; i < 5; i++)
    {
        tishat.push_back(opi[i]);
    }
    // tishat.push_back(14);
    // tishat.push_back(14);
    // tishat.push_back(14);
    // tishat.push_back(14);
    // tishat.push_back(4);

    displayVec(tishat);
    return 0;
}