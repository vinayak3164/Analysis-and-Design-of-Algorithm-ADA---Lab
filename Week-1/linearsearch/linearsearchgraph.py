import matplotlib.pyplot as plt

n = [100, 500, 1000, 2000, 5000]
time = [80, 200, 400, 900, 2000]

plt.plot(n, time, marker='o')

plt.xlabel("Input Size (n)")
plt.ylabel("Time Taken")
plt.title("Linear Search Time Analysis")

plt.grid()

plt.savefig("linear_search_graph.png")
plt.show()