import matplotlib.pyplot as plt

n = [100, 200, 500, 1000, 2000, 3000, 4000, 5000, 7000, 10000]

time = [0,0,0, 449, 1012, 1401, 1336, 3103, 5826, 7011]

plt.plot(n, time, marker='o')

plt.xlabel("Input Size (n)")
plt.ylabel("Time (microseconds)")
plt.title("Merge Sort Time Analysis")

plt.grid()

plt.savefig("merge_sort_graph.png")
plt.show()