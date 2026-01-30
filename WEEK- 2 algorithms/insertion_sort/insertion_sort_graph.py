import matplotlib.pyplot as plt
import csv
n_worst = []
time_worst = []
with open("insertion_worst_case.csv", "r") as file:
    reader = csv.reader(file)
    next(reader)  
    for row in reader:
        n_worst.append(int(row[0]))
        time_worst.append(float(row[1]))
plt.plot(n_worst, time_worst, 'o-', label="Worst Case")
plt.xlabel("Input Size (n)")
plt.ylabel("Time (microseconds)")
plt.title("Insertion Sort Worst Case")
plt.legend()
plt.grid(True)
plt.savefig("insertion_sort_worst.png", dpi=300)
plt.show()