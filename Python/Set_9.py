# SET in python ->
"""
set is a collection of the unordered items.
Each element in the set must be Unique & immutable.
but set are mutable(changable) which means we can add or remove the item
from the sets
--> Create a set similar like we create in maths
set1={1,2,3,2,4,5,"Shintu",45.6}
they can access randomly.
--> we can add the tuples & string in the set beacuase  they are
immutable but  dict & list are mutuable so we can't add them into set.
"""
# #empty set
# set1=set() # null
# print(set1)-
set2={1,2,"shintu",4,3,2,1,8}
print(set2)
print(type(set2))
# Adding the tupels in set
set2.add((1,2,4,5))
print("After the Adding the tupels:",set2)
# # add list --> genearte Error
# set2.add([1,2,3])
# print(set2)
print("\n")
"""
# Remove the item from the set
print("After the Removing: ")
set2.remove(2)
print(set2)
"""
"""
# remove random value from the set
print(set2.pop())
"""

# Union --> when two  or more than two set are combined & returns a unique value 
# included the common value as a single variable.
set3={1,2,3,2,5,9,3,} 
set4={4,7,8}
print("Union of the Set:")
print(set3.union(set4))

# Intersection--> when two or more set are combined together & returns 
# common values of the set.

set5={1,2,3,5,6,7,"Shintu"}
set6={1,3,4,5,6,"Shintu","sintu",8}
print("\nAfter the Intersection: ")
print(set5.intersection(set6))

