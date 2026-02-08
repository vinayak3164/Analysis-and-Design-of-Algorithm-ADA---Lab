#include <iostream>
#include <chrono>
#include <cstdlib>
using namespace std;
using namespace chrono;

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = new int[n1];
    int *R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

void mergesort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main()
{

    int sizes[] = {100, 200, 500, 1000, 2000, 3000, 4000, 5000, 7000, 10000};

    cout << "n\tTime (microseconds)\n";

    for (int s = 0; s < 10; s++)
    {
        int n = sizes[s];

        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = rand() % 10000;
        }

        auto start = high_resolution_clock::now();

        mergesort(arr, 0, n - 1);

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        cout << n << "\t" << duration.count() << endl;

        delete[] arr;
    }

    return 0;
}