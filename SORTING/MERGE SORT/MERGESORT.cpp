#include <bits/stdc++.h>
using namespace std;

void Inputarr(int *arr, int s)
{
    cout << "Please enter the" << s << " elements of the array:";
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
}

void Printarr(int *arr, int s)
{
    for (int i = 0; i < s; i++)
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
    // Maintain current index of sub-array and main array

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

    int a;
    cout << "Please enter the size of the array: ";
    cin >> a;
    int *arr = new int[a];
    Inputarr(arr, a);

    Printarr(arr, a);
    MergeSort(arr, 0, a - 1);
    Printarr(arr, a);

    return 0;
}