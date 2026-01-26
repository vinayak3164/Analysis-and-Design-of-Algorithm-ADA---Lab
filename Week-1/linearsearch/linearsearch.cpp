#include <iostream>
#include <chrono>
#include <cstdlib>
using namespace std;
using namespace chrono;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int sizes[] = {100, 500, 1000, 2000, 5000};

    for (int n : sizes) {
        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 10000;
        }

        int key = -1; 

        auto start = high_resolution_clock::now();

        linearSearch(arr, n, key);

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<nanoseconds>(stop - start);

        cout << "n = " << n 
             << " -> Time: " << duration.count() 
             << " ns" << endl;

        delete[] arr;
    }

    return 0;
}