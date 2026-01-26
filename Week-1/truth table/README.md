# Week 1 - ADA Lab

## Program: Truth Table Generation

### Description

This program generates all possible combinations of truth values (True/False) for n logical statements using recursion.

### Input

Number of statements (n)

### Output

All possible truth assignments (Truth Table)

### Time Complexity

T(n) = O(2^n)

### Methodology

* The algorithm uses recursion to generate all possible combinations.
* At each step, it appends either '1' (True) or '0' (False).
* This results in 2^n combinations.
* Execution time is measured for different values of n.
* A graph is plotted using Python to analyze time complexity.


### Observation

The graph shows exponential growth, confirming the time complexity O(2^n).

### Files Included

* `truth_table.cpp` → C++ implementation
* `graph.py` → Python script
* `truth_table_graph.png` → Graph image

### Author

Vinayak
