# Week 4 - ADA Lab

## Program: Merge Sort

### Description

This program implements Merge Sort and analyzes its performance for different input sizes.

### Input

Array of elements (unsorted)

### Output

Execution time taken to sort the array for different values of n

### Time Complexity

T(n) = O(n log n)

### Methodology

* Arrays of different sizes (n) are generated.
* Each array is initialized with values.
* Merge Sort is applied recursively.
* Array is divided into smaller subarrays and then merged.
* Execution time is measured using high-resolution clock.
* Results are stored in a CSV file.
* A graph is plotted using Python to analyze performance.

### Graph

![Time Complexity](merge_sort_graph.png)

### Observation

The graph shows smooth growth following n log n pattern, confirming the time complexity of Merge Sort.

### Files Included

* `merge_sort.cpp` → C++ implementation
* `merge.csv` → Recorded data
* `merge_graph.py` → Python script
* `merge_sort_graph.png` → Graph image

### Author

Vinayak
