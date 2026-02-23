#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int start, int end)
{
    int i = start - 1;
    int pivot = arr[end];

    for(int j = start; j < end; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }

    i++;
    swap(arr[end], arr[i]);

    return i;
}

void quicksort(int arr[], int start, int end)
{
    if(start < end)
    {
        int pivotidx = partition(arr, start, end);
        quicksort(arr, start, pivotidx - 1);
        quicksort(arr, pivotidx + 1, end);
    }
}

int main()
{
    int arr[]={7,4,10,1,3,2,9,8,5,6};

    quicksort(arr,0,9);

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
}