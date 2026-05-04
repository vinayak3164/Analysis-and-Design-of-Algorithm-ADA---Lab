import matplotlib.pyplot as plt

heights = [100, 500, 1000, 2000, 5000, 10000]
time = [2, 3, 4, 5, 6, 7]  

plt.plot(heights, time, marker='o')

plt.xlabel("Initial Height")
plt.ylabel("Time (microseconds)")
plt.title("Bouncing Ball Time Analysis")

plt.grid()

plt.savefig("bounces_graph.png")
plt.show()