# Week 4 - ADA Lab

## Program: Quick Sort

### Description

This program implements Quick Sort and analyzes its performance for different input sizes.

### Input

Array of elements (unsorted)

### Output

Execution time taken to sort the array for different values of n

### Time Complexity

* Best Case: O(n log n)
* Average Case: O(n log n)
* Worst Case: O(n²)

### Methodology

* Arrays of different sizes (n) are generated.
* Each array is initialized with values.
* Quick Sort is applied using partition technique.
* Pivot element is selected and array is divided.
* Execution time is measured using high-resolution clock.
* Results are stored in a CSV file.
* A graph is plotted using Python to analyze performance.

### Graph

![Time Complexity](quick_sort_graph.png)

### Observation

The graph shows near n log n growth in average case, confirming efficient performance of Quick Sort.

### Files Included

* `quick_sort.cpp` → C++ implementation
* `quick.csv` → Recorded data
* `quick_graph.py` → Python script
* `quick_sort_graph.png` → Graph image

### Author

Vinayak
