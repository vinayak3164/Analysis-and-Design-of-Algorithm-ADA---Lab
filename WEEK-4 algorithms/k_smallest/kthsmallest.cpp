#include <iostream>
using namespace std;
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}
int smallest(int arr[], int low, int high, int k) {
    if (low <= high) {
        int p = partition(arr, low, high);

        if (p == k - 1)
            return arr[p];
        else if (p > k - 1)
            return smallest(arr, low, p - 1, k);
        else
            return smallest(arr, p + 1, high, k);
    }
    return -1;
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    cout << "Enter k: ";
    cin >> k;

    int result = smallest(arr, 0, n - 1, k);

    if (result != -1)
        cout << k << "th smallest element is " << result;
    else
        cout << "Invalid k";

    return 0;
}