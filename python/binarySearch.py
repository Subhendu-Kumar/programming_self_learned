def binarySearch(arr, key, l, r):
    if l > r:
        return -1
    mid = (l + r) // 2
    if arr[mid] == key:
        return mid
    elif arr[mid] > key:
        return binarySearch(arr, key, l, mid - 1)
    else:
        return binarySearch(arr, key, mid + 1, r)


array = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
key = int(input("Enter key between 1 to 9 :"))
left = 0
right = len(array) - 1
index = binarySearch(array, key, left, right)
if index == -1:
    print("key", key, "is not found")
else:
    print("key", key, "is found at index", index)
