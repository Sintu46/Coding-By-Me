"""
Dictionaries are used to store data values in Key:Values pairs.
They are unordered, mutuable(changeable) & don't allow duplicate keys.
To assign & add new value in Dictionary.
dict["key"]="value"
"""

# CREATE A DICTIONARY
"""
dict={
    "name":"sintu kumar",
    "roll_no" : 82,
    "stream" : "B.C.A",
   " cgpa" :7.29,
   "marks" :[78,68,77]
}
print(dict)  # for whole
print(type(dict))
dict["name"]="Shintu"  # reassigning / Overwrite

dict["learning"]="python" # adding a new key value pairs in dict.
print(dict["name"]) # for particular key value
print(dict)  # for whole
"""
# Nested Dictionary
student = {
    "name": "Shintu",
    "roll_no" : 82,
    "subject":{
        "Commerce" : 30,
        "DSA" : 40,
        "English" : 30

    }
}

print(student)
print(student["subject"]["DSA"])

# Dictionary Method
"""
--> dict_name.keys()--> returns all keys
--> dict_name.values--> returns all values.
--> dict_name.items-->  returns all (key , value)
--> dict_name.get("key") -->returns all key according to the value
--> dict_name.update(newDict)--> insert the specified items to the dictionary.
--> student.update({"city" : "Karnal","state": "Haryana"})
--> newDict ={"City": "Karnal","state":"Haryana"}
--> student.update(newDict)
--> newDict={"name":"Sahil"} # Update the student name value

"""