number = []
x = int(input("Enter the no of elements of the array : "))
print("Enter the elements of array one by one : ")

for i in range(x):
    n = int(input())
    number.append(n)

max = number[0]

for num in number:
    if num > max:
        max = num

print("max element is ", max)
