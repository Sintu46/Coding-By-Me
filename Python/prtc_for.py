# Traverse through the For loop.
"""
x=(1,2,3,7,6,5,9,4)
for el in x:
    print(el)
"""
# find element through for loops
"""    
x1=(1,2,3,5,8,7,3,7,9)
i=0
x=7
for el in x1:
    if(x1[i]==x):
        print(x,"fund at",i,"index.")
        break
    else:
        print("finding..")
    i+=1    
"""
# Range in For Loops
"""
for i in range(1,10,1):
    print(i)
"""
#  Print the Multiplication of n number.
"""  
x=int(input("Table of:"))
for i in range(1,11):
    i*=x
    print(i)
"""
# Factorial of n number.
"""
x1=int(input("Enter the No:"))
fact=1
for i in range(1,x1+1):
     fact*=i
print("Factorial of ",x1,":",fact)   
"""
# Sum of N number.
"""
v=int(input("Enter the No:"))
sum=0
for i in range(1,v+1):
     sum+=i
print("Sum of natural no:",sum)
"""
# pass keyword-->is used when we write a code and we don't  want to copmplete now.
for i in range(101,1,1):
    pass  # if not write then generate an error
print("Exit the code.")