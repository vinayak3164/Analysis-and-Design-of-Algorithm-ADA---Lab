#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

long long fastPower(int a, int b) {
    if (b == 0)
        return 1;

    long long half = fastPower(a, b / 2);

    if (b % 2 == 0)
        return half * half;
    else
        return a * half * half;
}

int main() {
    int a = 2;
    int exponents[] = {10, 100, 500, 1000, 5000};

    for (int b : exponents) {

        auto start = high_resolution_clock::now();

        fastPower(a, b);

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<nanoseconds>(stop - start);

        cout << "b = " << b 
             << " -> Time: " << duration.count() 
             << " ns" << endl;
    }

    return 0;
}