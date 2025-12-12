def linearSearch(arr, key):
    for i in range(len(arr)):
        if arr[i] == key:
            return i
    return -1


array = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
key = int(input("Enter key between 1 to 9 :"))
index = linearSearch(array, key)

if index == -1:
    print("key", key, "is not found")
else:
    print("key", key, "is found at index", index)
