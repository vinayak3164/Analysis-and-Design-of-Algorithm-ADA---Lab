import matplotlib.pyplot as plt

n = [100, 500, 1000, 2000, 5000]

time = [50, 100, 150, 300, 600]

plt.plot(n, time, marker='o')

plt.xlabel("Input Size (n)")
plt.ylabel("Time Taken")
plt.title("Sum of n Numbers Time Analysis")

plt.grid()

plt.savefig("sum_graph.png")
plt.show()