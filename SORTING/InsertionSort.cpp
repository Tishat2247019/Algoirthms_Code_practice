#include <iostream>
using namespace std;

void InputArr(int *a, int s)
{
    cout << "Please enter the elements of the array: ";
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
}

void PrintArr(int *a, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertionSort(int *a, int s)
{
    for (int step = 1; step < s; step++)
    {
        int key = a[step];
        int i = step - 1;

        while (a[i] > key && i >= 0)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }
}

int main()
{
    int a;
    cout << "Please enter the size of the array: ";
    cin >> a;
    int *arr = new int[a];
    InputArr(arr, a);
    cout << "The unsorted array is: ";
    PrintArr(arr, a);

    insertionSort(arr, a);
    cout << endl;
    PrintArr(arr, a);

    return 0;
}