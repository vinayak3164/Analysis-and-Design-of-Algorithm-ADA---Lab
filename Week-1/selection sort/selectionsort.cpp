#include <iostream>
#include <chrono>   
#include <cstdlib>  
using namespace std;
using namespace chrono;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int sizes[] = {100, 500, 1000, 2000, 5000};

    for (int n : sizes) {
        int *arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 10000;
        }

        auto start = high_resolution_clock::now();

        selectionSort(arr, n);

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        cout << "n = " << n 
             << " -> Time: " << duration.count() 
             << " microseconds" << endl;

        delete[] arr;
    }

    return 0;
}