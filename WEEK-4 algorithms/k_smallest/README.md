# Week 5 - ADA Lab

## Program: K-th Smallest Element (Using Partition)

### Description

This program finds the k-th smallest element in an array using the partition technique similar to Quick Sort (Quickselect algorithm).

### Input

An unsorted array of elements and an integer k

### Output

The k-th smallest element in the array

### Time Complexity

* Best Case: O(n)
* Average Case: O(n)
* Worst Case: O(n²)

### Methodology

* The partition function is used to place a pivot element at its correct position.
* The array is divided into two parts around the pivot.
* If the pivot position matches k-1, the element is found.
* If the pivot position is greater than k-1, search continues in the left subarray.
* If smaller, search continues in the right subarray.
* This reduces the problem size without fully sorting the array.

### Observation

The algorithm efficiently finds the k-th smallest element without sorting the entire array, making it faster than traditional sorting methods for this task.

### Files Included

* `kth_smallest.cpp` → C++ implementation

### Author

Vinayak
