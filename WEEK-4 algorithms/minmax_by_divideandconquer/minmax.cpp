#include <iostream>
using namespace std;
void find(int arr[], int low, int high, int &min, int &max)






{
 if (low == high) {
        min = arr[low];
        max = arr[low];
        return;
    }
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            min= arr[low];
            max= arr[high];
        } else {
            min = arr[high];
            max = arr[low];
        }
        return;
    }
    int mid = (low + high) / 2;

    int min1, max1;
    int min2, max2;

    find(arr, low, mid, min1, max1);
    find(arr, mid + 1, high, min2, max2);
    min= (min1 < min2) ? min1 : min2;
    max= (max1 > max2) ? max1 : max2;
}



int main() {
    int arr[] = {3, 5, 1, 8, 2, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min, max;

    find(arr, 0, n - 1, min, max)  ;

    cout << "Minimu: " << min<< endl;
    cout << "Maximum: " << max<< endl;

    return 0;
}