import matplotlib.pyplot as plt

n = [100, 500, 1000, 2000, 4000, 8000]
time = [200, 800, 1500, 3000, 6500, 13000]

plt.plot(n, time, marker='o')

plt.xlabel("Input Size (n)")
plt.ylabel("Time (nanoseconds)")
plt.title("Missing Number Time Analysis")

plt.grid()

plt.savefig("missing_number_graph.png")
plt.show()