# Bubble Sort
# Print the number of swaps 

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
count = 0

for i in range(n):
    for j in range(0,n-i-1):
        if a[j] > a[j+1]:
            a[j],a[j+1] = a[j+1],a[j]
            count += 1

print("Array is sorted in {} swaps.".format(count))
print("First Element: {}".format(a[0]))
print("Last Element: {}".format(a[n-1]),end="")