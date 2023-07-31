#include <iostream>
using namespace std;

void inputArr(int *a, int s)
{
    cout << "Please enter the " << s << " elements of the array: ";
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
}

void printArr(int *a, int s)
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
        while (key < a[i] && i >= 0)
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
    cout << "Please enter the number of elements of the unsorted array: ";
    cin >> a;
    int *arr = new int[a];
    inputArr(arr, a);
    cout << "The unsorted array is: ";
    printArr(arr, a);

    insertionSort(arr, a);
    cout << "The sorted array is: ";
    printArr(arr, a);

    return 0;
}