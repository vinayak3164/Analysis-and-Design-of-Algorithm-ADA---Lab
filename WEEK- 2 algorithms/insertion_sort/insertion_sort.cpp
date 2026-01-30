#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;
void insertionSort(int arr[], int n) {
    for (int i=1; i <n; i++) {
        int c= arr[i];
        int j = i-1;

        while (j>= 0 && arr[j] >c) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=c;
    }
}
int main() {
    ofstream file1("insertion_best_case.csv");
    ofstream file2("insertion_worst_case.csv");
    file1 << "n,time\n";
    file2 << "n,time\n";
    for (int n = 1000; n<=20000;n=n+2000)
     {
    int repeat = 50;
        int* a = new int[n];
        for (int i = 0; i < n; i++)
            a[i] = i;
        auto start1 = high_resolution_clock::now();
        for (int r = 0; r < repeat; r++) {
            int* temp = new int[n];
            for (int i = 0; i < n; i++)
                temp[i] = a[i];
            insertionSort(temp, n);
            delete[] temp;
        }
        auto end1 = high_resolution_clock::now();
        long bestTime =
            duration_cast<microseconds>(end1 - start1).count() / repeat;
        file1 << n << "," << bestTime << "\n";
        delete[] a;
        int* a2 = new int[n];
        for (int i = 0; i < n; i++)
            a2[i] = n-i;
        auto start2 = high_resolution_clock::now();
        for (int r = 0; r < repeat; r++) {
            int* temp = new int[n];
            for (int i = 0; i < n; i++)
                temp[i] = a2[i];
            insertionSort(temp, n);
            delete[] temp;
        }
        auto end2 = high_resolution_clock::now();
        long long worstTime =
            duration_cast<microseconds>(end2 - start2).count() / repeat;
        file2 << n << "," << worstTime << "\n";
        delete[] a2;
        cout << "Done for n = " << n << endl;
    }
    file1.close();
    file2.close();
    return 0;
}