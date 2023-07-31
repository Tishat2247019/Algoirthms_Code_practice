#include <iostream>
using namespace std;

void print(int a[], int b)
{
    cout << "The elements of the array is: ";
    for (int i = 0; i < b; i++)
    {
        cout << *(a + i) << " ";
    }
    cout << endl;
}

int main()
{

    int *a = new int[5];
    cout << "please enter the elements of the array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    print(a, 5);
    return 0;
}