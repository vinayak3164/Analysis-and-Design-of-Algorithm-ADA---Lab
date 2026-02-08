import matplotlib.pyplot as plt
import csv

n_vals = []
time_vals = []

with open("quick.csv", "r") as f:
    reader = csv.reader(f)
    next(reader)

    for row in reader:
        n_vals.append(int(row[0]))
        time_vals.append(float(row[1]))

plt.plot(n_vals, time_vals, 'o-')

plt.xlabel("Input Size (n)")
plt.ylabel("Time")
plt.title("Quick Sort Performance")

plt.grid(True)

plt.savefig("quick_sort_graph.png", dpi=300)
plt.show()