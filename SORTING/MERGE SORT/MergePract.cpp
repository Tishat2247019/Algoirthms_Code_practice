#include <iostream>
using namespace std;

void inputArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Merge(int *arr, int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int L[n1];
    int M[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        M[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = low;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void MergeSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}

int main()
{
    int s;
    cout << "Please enter the size of the array: ";
    cin >> s;

    int *arr = new int[s];
    inputArr(arr, s);

    MergeSort(arr, 0, s - 1);
    printArr(arr, s);

    return 0;
}