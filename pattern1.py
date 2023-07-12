n=int(input("enter the number of row"))
print()
for i in range(n):
    for j in range(n - i - 1):
        print(" ",end=" ")
    for j in range(i + 1):
        print(j + 1, end=" ")
    for j in range(i,0,-1):
        print(j,end=" ")
    print()
for i in range(n-1):
    for j in range(i+1):
        print(" ",end=" ")
    for j in range(n-1-i):
        print(j+1,end=" ")
    for j in range(n-2-i,0,-1):
        print(j,end=" ")
    print()
    
