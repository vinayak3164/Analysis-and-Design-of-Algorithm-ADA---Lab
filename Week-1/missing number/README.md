# Week 1 - ADA Lab

## Program: Missing Number (Cyclic Sort)

### Description

This program finds the missing number in an array using a cyclic sort approach.

### Input

Array containing numbers from 0 to n with one missing element

### Output

Number of operations performed to find the missing number

### Time Complexity

T(n) = O(n)

### Methodology

* The algorithm uses cyclic sort to place elements at their correct indices.
* Each element is swapped to its correct position.
* Missing number is identified based on incorrect placement.
* Execution time is measured in terms of operation count.
* A graph is plotted using Python to analyze performance.

### Graph

![Time Complexity](missing_number/missing_number_graph.png)

### Observation

The graph shows linear growth, confirming the time complexity O(n).

### Files Included

* `missing_number.cpp` → C++ implementation
* `graph.py` → Python script
* `missing_number_graph.png` → Graph image

### Author

Vinayak
