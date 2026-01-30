import matplotlib.pyplot as plt

call_count = 0

def binary_search(arr, key, s, e):
    global call_count
    call_count += 1

    if s > e:
        return -1

    m = (s + e) // 2
    if arr[m] == key:
        return m
    elif arr[m] > key:
        return binary_search(arr, key, s, m - 1)
    else:
        return binary_search(arr, key, m + 1, e)

n_values = [50, 100, 200, 400, 800, 1600, 3200]

actual = []

for n in n_values:
    arr = list(range(n))
    call_count = 0
    binary_search(arr, -1, 0, n - 1)  # worst case
    actual.append(call_count)

plt.plot(n_values, actual, 'o-', label="Actual Calls")

plt.xlabel("n (Array Size)")
plt.ylabel("Recursive Calls")
plt.title("Binary Search Actual Performance")
plt.legend()
plt.grid(True)
plt.savefig("binary_search_graph.png")
plt.show()