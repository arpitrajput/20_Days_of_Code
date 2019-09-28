#Pattern: Closed Box

# Print the given pattern for the given number of rows.

# Pattern for N=4

# 1111
# 1  4
# 1  4
# 4444


n = int(input())

for i in range(1,n+1):
    for j in range(1,n+1):
        if i == 1 or i == n:
            print(i,end="")
            continue
        if j == 1 or j == n:
            print(j,end="")
        else:
            print(" ",end="")
    print()