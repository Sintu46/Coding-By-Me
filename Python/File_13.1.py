# "r+" --> read + overwrite (ptrfrom starting) ---no truncate
# "w+" --> read + write (ptr from starting) ---    truncate
# "r+" --> read + write (ptr at the end) ---     no truncate
# Module(like a library) is a file written by another programmer tat generally has 
# a function we can use.
# we need to import a os module for delete a file.

# With syntax-->
# with open("file_name.txt","r") as f:
# data=f.read()

# with open("Python.txt","r") as f:
#     data=f.read()
#     print(data)


# with open("Python.txt","w") as f:
#     f.write("OverWrite The Data\n It was a flowering mustard-field,pale like melting " \
#     "gold as\n it swept across  miles and miles of even land.")    


# Deleting a File --> using the os Module.

# import os
# os.remove("Demo.txt") # delete .

# WAP to replace a word  in a file.
# with open("practice.txt","w") as f:  # data
#     f.write("A group of dragon-flies were bustling about on their gaudy purple wings"\
#             "\nCome child,come,come come,on to footpath")
    
with open("practice.txt","r") as f: 
    data=f.read()   

newData=data.replace("come","fast") #  replace and read data
print(newData)

with open("practice.txt","w") as f:  #overwrite the data
 f.write(newData)