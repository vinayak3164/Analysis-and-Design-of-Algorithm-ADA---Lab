#include <iostream>
#include <chrono>
#include<cmath>
using namespace std;
using namespace chrono;

int Bounces(int h) {
    int sh = h;
    int bounces = 0;

    while (sh > 0) {
        int v = sqrt(2 * 10 * sh);
        v = v - (v * 40) / 100;

        int newh = (v * v) / 20;
        sh = newh;

        if (newh > 0) {
            bounces++;
        }
    }
    return bounces;
}

int main() {

    // Different input heights
    int heights[] = {100, 500, 1000, 2000, 5000, 10000};

    cout << "Height\tBounces\tTime (microseconds)\n";

    for (int i = 0; i < 6; i++) {
        int h = heights[i];

        auto start = high_resolution_clock::now();

        int result = Bounces(h);

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        cout << h << "\t" << result << "\t\t" << duration.count() << endl;
    }

    return 0;
}