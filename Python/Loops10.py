# Loops in python --> While & For Loops
#  While Loops
# syn--> while condition:
#  // message 
# incremnet or deccrement
# print no. 1 to 100
"""
x=int(input("Enter the no: ")) 
i=1
while i<=x :
    print(i)
    i+=1
"""
# reverse them
"""
x1=int(input("Enter the no: "))
i=x1
while i>0:
    print(i,[i])
    i-=1
"""
   
# print hello 5 times
"""
str="Hello"
i=0
while i<5:
    print(str,[i])
    i+=1

print("code Execute.")   
"""
# WAP to print table of n.
"""
y=int(input("Enter the no for table : "))
i=1
while i<=10:
   print (y,"*",i," : ",i*y)
   i+=1
""" 
# print them by using loops.
"""
x=[1,4,9,16,25,36,49,64,81,100,121,144,169,196,225]
i=0
while i < len(x):
    print(x[i])
    i+=1
"""
# Find specific no...    
x=[1,4,9,16,25,36,49,64,81,100,121,144,169,196,225]
x1=int(input("Enter the no: "))
i=0 

while i < len(x) :

    if(x[i] == x1):
        print("found at ", i ," position")
        break

    else:
        print("Finding..")
    
    i+=1        
        