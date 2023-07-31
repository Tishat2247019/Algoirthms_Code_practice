#include<iostream>
using namespace std;

//Function for selection sort
void SelectionSort(int arr[],int n)
{
    int i,j,min_idx;
    //One by one move boundary of
    //unsorted subarray
    for(i = 0;i<n;i++)
    {
        //Find the minimum element in
        //Unsorted array
        min_idx = i;
    }
    //Swap the found minimum element
    //with the first element
    if(min_idx!=1){
        swap(arr[min_idx],arr[i]);
    }
}

//Function to print an array
void PrintArray(int arr[],int size){
int i;
for(i = 0;i<size;i++){
    cout<<arr[i]<<" ";
    cout<<endl;
}

}

//Driver code
int main()
{
    int arr[]={64,25,12,22,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    //Function call
    SelectionSort(arr,n);
    cout<<"Sorted array: \n";
    PrintArray(arr,n);



return 0;
}
