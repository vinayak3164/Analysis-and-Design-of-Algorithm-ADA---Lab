#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

int sum(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

int main() {
    int sizes[] = {100, 500, 1000, 2000, 5000};

    for (int n : sizes) {

        auto start = high_resolution_clock::now();

        sum(n);

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<nanoseconds>(stop - start);

        cout << "n = " << n ;
           
    }

    return 0;
}