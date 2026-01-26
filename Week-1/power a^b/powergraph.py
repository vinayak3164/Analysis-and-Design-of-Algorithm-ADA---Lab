import matplotlib.pyplot as plt
b = [10, 100, 500, 1000, 5000]
time = [100, 200, 300, 400, 600]
plt.plot(b, time, marker='o')
plt.xlabel("Exponent (b)")
plt.ylabel("Time Taken")
plt.title("Time Analysis of Power Function")
plt.grid()
plt.savefig("power_graph.png")
plt.show()