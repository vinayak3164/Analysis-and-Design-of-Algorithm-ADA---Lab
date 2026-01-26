import matplotlib.pyplot as plt

# Generate 15 inputs
n = list(range(1, 16))

# Time complexity (2^n)
time = [2**i for i in n]

# Plot graph
plt.plot(n, time, marker='o')

plt.xlabel("Input Size (n)")
plt.ylabel("Time Complexity T(n)")
plt.title("Time Complexity of Tower of Hanoi (O(2^n))")

plt.grid()

# Save graph
plt.savefig("hanoi_time_complexity.png")

# Show graph
plt.show()