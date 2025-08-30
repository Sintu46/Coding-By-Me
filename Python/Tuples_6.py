# Tupels ==> it is similar to list but it can not mutable
#  it can use the paranthesis () for declaring & initilization.
# if you declare a single value then you need to declare with (,) other wise
# it Converts into same data type.
# x=(5,)
# if x=(4)/("shintu") then it's data type is int/string respectively without using 
# the comma(,) 
# (change the value of variable after declare).
# x =(1,2,3,4,6)
# x[2]=5 not allowed in tuples but in list allowed.

# CREATE A TUPLES
"""
tup=(1,4,3,5,6,4,4)
print(tup)
print(type(tup))
print(tup.index(3)) # Index of the 3 --> 2
print(tup.count(4)) # how many times 4 appear in the tuples
"""
# PRACTICE 
# WAP to add your four  fav  movie in store them in list
"""
movie= []
mov1=input("Enter Your Fav Movie: ")
mov2=input("Enter Your Fav Movie: ")
mov3=input("Enter Your Fav Movie: ")
movie.append(mov1) 
movie.append(mov2) 
movie.append(mov3) 
print(movie)
"""
# WAP to check palindrome of element.
"""
num=[1,2,1]
num2=[1,"abc","abc",1]
copy_num=num2.copy()
print(copy_num)
copy_num.reverse()
if(copy_num==num2):
    print("Pailndrome")
else:
    print("Not A Palindrome")   
"""
# WAP to count no of grade a  in tuples
x= ('A','D','A','E','A','A','B','C')
print(x.count('A'))


