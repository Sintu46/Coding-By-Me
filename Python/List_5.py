# List ==>
"""
List==> A built in  a data type that stores a set of values.
it can store elment of different types(int,float,string,etc.) together
It is similar to array in some cases and replacement of it in python .
marks=[46,56,37,57]
fruit=["Apple","Banana","Orange"] #[0]="Apple", [1]="Banana"....
"""
# create a List
"""
mark=[67,78,98,78]
print(mark)
print(type(mark))
"""
# Mutable(change value) in List
""" 
student=["Shintu",78,"karnal"]
print(student[1])
student[0]="Sahil"  # we can change the value in list nut not in the string.
so it is mutable.
print(student)
"""
# Slicing in List ==>it include the list item & access the element.
"""
mark=[45,56,67,78,59,87,88]
print(mark[:4]) # [0 : 4] ==>not include 4th index
print(mark[3:len(mark)])  # [3:last] but not include last 
# Simiarily Work with the words.
# Negative Indexing
print(mark[-3:-1]) # [-1=88,-2=87,-3=59...] ==> not include lst index value.
"""                                                                                                                                               
# List Method ==>
# Append,Sort(Asc/Desc),reverse,insert & many more...
list=[2,3,5,1,4,9,2]
# list.append(6)
# print(list)
# list.sort() # Ascending order
# print(list)
# list.sort(reverse=True) # Descending order
# print(list)
# list.reverse()
# print(list)
# list.insert(2,4) # insert element(idx,el)
# print(list)
# list.remove(2) # remove first occurence(first time come)
# print(list)
list.pop(0) # delete by index
print(list)


