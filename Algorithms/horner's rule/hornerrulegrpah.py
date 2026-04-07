import matplotlib.pyplot as plt

n = [100, 500, 1000, 2000, 5000]
time = [100, 200, 300, 500, 900]


plt.plot(n, time, marker='o')

plt.xlabel("Polynomial Degree (n)")
plt.ylabel("Time Taken")
plt.title("Horner's Rule Time Analysis")

plt.grid()

plt.savefig("horner_graph.png")
plt.show()