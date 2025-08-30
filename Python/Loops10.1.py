# For Loops in python
# syn-->for el in var_name
"""
nums=(1,2,4,23,2,4,2,6,8,9) # tupels
for el in nums:
    print(el)
"""
"""
fruits=["Apple","Banana","Orange","Guvava"] # string
for str in fruits:
    print(str)
""" 
"""
str1="STRINGPYTHON"
for el in str1:
    print(el)
"""
"""
list=[1,2,3,4,5,6,7,8,9]  # list
for val in list:
    print(val)
else:    
    print("End")  # optinal 
"""
# Else use in break case.
"""
list=[1,2,3,4,5,6,7,8,9]  # list

for val in list:
    if(val==5):
        print("5 found ")
        break
    print(val)
    
print("End")  #  Else optinal 
"""
# Range in For Loops
"""
--> Range functions returns a sequence of numbers, string from 0 by default & 
increment by 1(by default) & stop before a specified numbers.
syn--> for el in range(start,stop,step)
==> start-->passing an argument for start is optional.
==> stop-->passing an argument for stop is manadotry.
==>step--> it define the increment  and decrement & it is also optional.
"""
# 1.
"""
for el in range(5):
    print(el)
"""
# 2. 
"""
for el in range(2,10):
    print(el)   """
# 3.
"""
for el in range(2,10,2):
    print(el)
"""
# print odd and even no.
 # for Even No.
"""for i in range(2,101,2):
    print(i)  
    """  
 # for odd No.
for i in range(1,100,2):
    print(i)   

# WAP to print multiplication of n number.     