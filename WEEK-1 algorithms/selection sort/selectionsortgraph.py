import matplotlib.pyplot as plt

n = [100, 500, 1000, 2000, 5000]
time = [50, 1200, 5000, 20000, 120000]

n2 = [x**2 for x in n]
scale = time[-1] / n2[-1]
n2_scaled = [x * scale for x in n2]

plt.figure() 

plt.plot(n, time, marker='o', label="Actual Time")
plt.plot(n, n2_scaled, linestyle='--', label="O(n^2)")

plt.xlabel("Input Size")
plt.ylabel("Time")
plt.title("Selection Sort Analysis")

plt.legend()
plt.grid()

plt.savefig("selection_sort_comparison.png")  
plt.show()