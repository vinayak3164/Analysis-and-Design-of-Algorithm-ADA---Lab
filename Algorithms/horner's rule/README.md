# Week 1 - ADA Lab

## Program: Horner's Rule

### Description

This program evaluates a polynomial using Horner's Rule, which reduces the number of multiplications and improves efficiency.

### Input

* Degree of polynomial (n)
* Coefficients of polynomial
* Value of x

### Output

Value of the polynomial at given x

### Time Complexity

T(n) = O(n)

### Methodology

* The polynomial is evaluated using Horner's Rule.
* Instead of computing powers separately, the expression is simplified.
* Execution time is measured for different polynomial degrees.
* A graph is plotted using Python to analyze time complexity.

### Graph

![Time Complexity](images/horner_graph.png)

### Observation

The graph shows linear growth, confirming the time complexity O(n).

### Files Included

* `horner.cpp` → C++ implementation
* `hornerulegraph.py` → Python script for graph
* `horner_graph.png` → Graph image

### Author

Vinayak
