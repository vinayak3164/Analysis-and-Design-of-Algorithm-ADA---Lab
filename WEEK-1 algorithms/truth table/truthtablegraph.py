import matplotlib.pyplot as plt

n = [5, 10, 15, 18, 20]

time = [50, 200, 1500, 8000, 30000]

plt.plot(n, time, marker='o')

plt.xlabel("Number of Variables (n)")
plt.ylabel("Time Taken")
plt.title("Truth Table Generation Time Analysis")

plt.grid()

plt.savefig("truth_table_graph.png")
plt.show()