n=int(input("enter the lenght of fibonacci number is ->"))
print()
a=1
b=1
print(a)
print(b)
i=2
while(i<n):
    c=a+b
    print(c)
    a=b
    b=c
    i=i+1
