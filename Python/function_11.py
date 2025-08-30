# Function in Python
"""
--> Block of statement that perform a specific task.
    def fun_name(paramas1,paramas2...):
    # Some Work
    return val

 func_name(arg1,arg2...) # function call.
"""
"""def cal_sum(x,y):
    sum=x+y
    print(sum)
    

cal_sum(12,14)
"""
# Check evne odd .
"""
def even_odd():
    x=int(input("Enter  the No:"))
    if(x % 2 == 0):
        print("Even")
    else:
        print("Odd")   

even_odd()
"""

# display the string in one singl line.
"""
list=["delhi","karnal","kaithal","jind","panchkula","Bhivani"]
def display():
    for i in list:
     print(i,end=" ") # end used for display anythig in single line,by default("\n")
display()  
"""
# multiplication of N no.
"""
n=int(input("Table of:"))
def multi(n):
  for i in range(1,11):
     print(n*i)

multi(n)
"""
# factorial of N no.
"""
def fact_n(n):
   fact=1
   for i in range(1,n+1):
      fact*=i
   print(fact)  

fact_n(5)  
"""    

# Convert usd to inr --> 1 usd = 89inr
def converter(usd_value):
    inr=usd_value*89
    print(usd_value,"USD =",inr,"INR")

converter(73)
