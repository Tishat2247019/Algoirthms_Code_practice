#include<iostream>
using namespace std;

//function to swap the position of two elements
void swap(int *a,int *b){
int temp = * a;
*a  = *b;
*b = temp;
}

//funtionto print an array
void printArray(int *array,int size){
for(int i = 0;i<size;i++){
    cout<<array[i]<<" ";
}
cout<<endl;
}

void selectionSort(int *array,int size){

for(int step = 0;step<size;step++)
{
    int min_idx = step;
    for(int i = step +1;i<size;i++)
    {
        //To sort in descending order,change>to <int this line
        //select the minimum element in each loop
        if(array[i]<array[min_idx]){
            min_idx = i;
        }
        //put min at correct position
        swap(&array[min_idx],&array[step]);
    }
}
}


int main(){
    //driver code
    int data[]={20,12,10,15,2};
    int size = sizeof(data)/sizeof(data[0]);
    selectionSort(data,size);
    cout<<"Sorted array in Ascending order: \n";
    printArray(data,size);


return 0;
}
