# Week 5 - ADA Lab

## Program: Finding Minimum and Maximum (Divide and Conquer)

### Description

This program finds the minimum and maximum elements in an array using the Divide and Conquer technique.

### Input

An array of elements

### Output

Minimum and maximum element present in the array

### Time Complexity

T(n) = O(n)

### Methodology

* The array is divided into two halves recursively.
* Minimum and maximum values are calculated for each half.
* The results from both halves are compared.
* The smaller value is selected as minimum and larger as maximum.
* Execution time is measured for different input sizes.
* Results are stored in a CSV file.
* A graph is plotted using Python to analyze performance.

### Graph

![Time Complexity](minmax_graph.png)

### Observation

The graph shows linear growth in execution time as input size increases, confirming O(n) time complexity.

### Files Included

* `min_max.cpp` → C++ implementation
* `minmax.csv` → Recorded data
* `graph.py` → Python script
* `minmax_graph.png` → Graph image

### Author

Vinayak
