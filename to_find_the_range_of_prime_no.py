start=int(input("enter the starting number:"))
end=int(input("enter the ending number:"))
print()
if(start<=2):
    print(2)
for i in range(start,end+1,1):
    flag=0
    for j in range(2,i,1):
        if(i%2==0):
            flag=1
            break
    if(flag==0 and i>2):
        print(i)

    
    
