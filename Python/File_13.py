# Fele I/O in python
# --> Python can be used to perform operations on file such as read,
#     write,open,close ,delete a file.
#    types of files--> text files--> .txt,.docx,.log etc...
#                      binary files--> .mp4,.mov,.png,.jpeg etc...
#     syn--> f=open("file_name","mode")
# --> if we open a file in "a" or "w" mode python will create a nwe file if does't exist.
# -->" r+" mode-> is used to write and read data together in any file.the data of file 
#     will not be truncate(change or delete if data is alraedy exist.) it overwrite the 
#     subsequent from the begining.
#      
# --> "w+"mode--> open for reading and writing. The file is created if it is not 
#       exist, otherwise , it is truncate(replace the file subsequent with new. ). 
# --> "a" mode-->Open for writing.subsequent writes always at the end of the current file.
# --> "a+" mode-->Open for writing.subsequent writes always at the endof the current file.
# Create A File
"""
f=open("file.txt","r") # read
# data=f.read(10)  # read the 10 character of the file
# print(data)  
# print(data) # all data is reads.
# line1=f.readline() # read the  one line at a time .
# print(line1)
f.close()
"""
"""
# write a file --> if we do in same file then it will overwrite the file msg.
f=open("Python.txt","a")
# f.write("He hurried towards his parents, her feet obedient to their call,his eyes") # read(r)
# f.write("\nstill lingering on the receding toys. ") # append(a)
f.write("\n As he came to where they had stopped to wait for him,\n he could not suppress.")
# append-->a
f.close()
"""
# read and write together--> R+
"""
f=open("Python.txt","r+")
f.write("the desire of his heart, even though he well knew the old,\ncold stare of the refusual in their eyes.")
print(f.read())
f.close()
"""
# read and write together--> w+
#f=open("looked.txt","w+")
f=open("looked.txt","a+")
#f.write("the desire of his heart, even though he well knew the old,\ncold stare of the refusual in their eyes.")
#f.write("\"I want that toy,\"he pleaded. His father loooked at him red-eyed,")
f.write("in his familiar tyrant's\nway.His mother,melted by the free spirit")
print(f.read())
f.close()


