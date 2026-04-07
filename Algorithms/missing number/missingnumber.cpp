#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

int missing(int arr[], int size) {
    int i = 0;

    while (i < size) {
        if (arr[i] == size) {
            i++;
            continue;
        }

        if (arr[i] != i) {
            int temp = arr[arr[i]];
            arr[arr[i]] = arr[i];
            arr[i] = temp;
        } else {
            i++;
        }
    }

    return 0;
}

int main() {
    int values[] = {100, 500, 1000, 2000, 4000, 8000};

    for (int k = 0; k < 6; k++) {
        int n = values[k];

        int *arr = new int[n];
        for (int i = 0; i <= n; i++) {
            if (i == n / 2) continue;

            if (i < n / 2)
                arr[i] = i;
            else
                arr[i - 1] = i;
        }

        auto start = high_resolution_clock::now();

        missing(arr, n);
auto stop = high_resolution_clock::now();

        auto duration = duration_cast<nanoseconds>(stop - start);
        delete[] arr;
    }

    return 0;
}