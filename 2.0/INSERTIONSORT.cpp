#include <iostream>
using namespace std;

void inputArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void InsertionSort(int *array, int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;

        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

int main()
{
    int s;
    int *array = new int[s];
    cout << "Enter the size of the array: ";
    cin >> s;
    inputArray(array, s);

    cout << "The unsorted array is: ";
    printArray(array, s);
    InsertionSort(array, s);
    cout << "The sorted array is ";
    printArray(array, s);

    return 0;
}