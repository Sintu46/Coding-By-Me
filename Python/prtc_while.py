# Multiplication of N number.
"""
x=int(input("Table of :"))
i=1
while i<=10:
    print(i*x)
    i+=1
"""
# Traverse in the list using loops.
"""
list=(1,4,9,16,25,36,49,64,81,100)
i=0
while i < len(list):
    print(list[i])
    i+=1
"""
# find sum of natural no.
"""
x1=int(input("Enter the no:"))
sum=0
i=1
while i<= x1:
    sum+=i
    i+=1
print("Sum of natural no:",sum)
"""
# Find the factorial of n number.
"""
x2=int(input("Enter the No.:"))
fact=1
i=1
while i<=x2:
    fact*=i
    i+=1
print("Factorial of ",x2," :",fact)
"""
# Skip the number from the series
x3=int(input("Enter the No: "))
i=0
while i <= x3:
    if(i==5):
            i+=1
            continue
    print(i)
    i+=1
