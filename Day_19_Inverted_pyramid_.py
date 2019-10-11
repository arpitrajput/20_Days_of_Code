# taking input - number of rows
n = int(input())

for i in range(n):
    
    # printing white space
    for j in range(-1,i*2-1):
        print(" ",end='')

    # printing *
    for j in range(n*2-i*2-1):
        print("* ",end='')
    
    # for new line
    print()