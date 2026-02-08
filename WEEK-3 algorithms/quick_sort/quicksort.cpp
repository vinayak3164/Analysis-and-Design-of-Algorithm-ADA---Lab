#include <iostream>
using namespace std;

int partitionarr(int a[], int l, int h) {
    int p= a[h];
    int i = l- 1;

    for(int j = l; j < h; j++) {
        if(a[j] < p) {
            i++;
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    int t= a[i + 1];
    a[i + 1] = a[h];
    a[h] = t;
    return i + 1;
}
void quicksort(int a[], int l, int h) {
    if(l< h) {
        int p = partitionarr(a, l, h);
        quicksort(a, l, p - 1);
        quicksort(a, p + 1, h);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    cout << "Sorted: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}