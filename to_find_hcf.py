
def find_hcf(num1,num2):
    a=0
    b=0
    if(num1>num2):
        a=num1
        b=num2
    else:
        a=num2
        b=num1
    ans=-1
    for i in range(1,b+1,1):
        if(a%i==0 and b%i==0):
            ans=i
    return ans
num1=int(input("enter the first number:"))
num2=int(input("enter the second number:"))
hcf=find_hcf(num1,num2)
print("the hcf of num1",num1,"and",num2,"is",hcf)
    
