def selectionSort(arr):
    n = len(arr)
    for i in range(n):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j

        arr[i], arr[min_index] = arr[min_index], arr[i]

    return arr


arr = []
x = int(input("Enter the no of elements of the array : "))
print("Enter the elements of array one by one : ")

for i in range(x):
    n = int(input())
    arr.append(n)

sorted_arr = selectionSort(arr)
print("Sorted array is:", sorted_arr)
