#include<iostream>
using namespace std;
int binarysearch(int arr[] , int l , int r, int k)
{
    if(l>r){
         return -1;
    }
    int mid=(l+r)/2;
    if(arr[mid]==k)
    {
        return mid;
    }
    if(arr[mid]<k)
    {
        return binarysearch(arr , l , mid-1,k);
    }
    else
    return binarysearch(arr,mid+1,r,k);
}
int main()
{
int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    int r= binarysearch(arr, 0, n - 1, key);
    if(r != -1)
        cout << "Element found at index: " << r;
    else
        cout << "Element not found";

    return 0;
}