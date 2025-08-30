# Prctice Questin of the set and the Dictionary.
# WAP to  store the meaning  in the dictionary
dict={
    "table":["a piece of furniture","a fact & figures"],
    "cat" :"a small animal"
}
print(dict)

# Assume one classroom is required for 1 subject then how many classrooms are requierd for 
# per subject by all student with in gieven set
subject={"python","java","python","c++","python","c++","java","c","javascript","python"}
print("Total no of class required for student: ")
print(len(subject))

# WAP to entr the marks of 3 subject from the user and store them into dictionary .Usually 
# dictionary is null. use subject as a key value.
dict1={}
x=int(input("enter DSA marks :"))
dict1.update({"DSA":x})
y=int(input("enter Eng marks :"))
dict1.update({"Eng":y})
z=int(input("enter commerce marks :"))
dict1.update({"Commerce":z})
print(dict1)

