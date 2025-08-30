# Create a String
# Three Way ==>

#str="Sintu Kumar"  # Double Quotes
#tr2='Shintu Kumar' # Single Quotes
#str3="""Shintu Chauhan"""  #Three Quotes
#print(str," ",str2," ",str3)

# String Function ==>#
# Concatentation
str1="Shintu"
str2="Kumar"
str3=str1+str2
print(str3)
#print(str1+str2)

#length
str_1="Sintu Kumar"
length=len(str_1)
print("Length of the String: ", length)

# Indexing ==> 
ch=(str_1[3])
print(ch)

# Slicing ==> is used to print words of the string from starting and Ending index
# but it not include the Ending index.
# Syn==> str_name[starting_ind:Ending_index]

str4="Shintu Chauhan" #[0='S,1=h,2=i,3=n,4=t,5=u,6=space...]
print(str4[0:5]) # Word of the last index is not include
print(str4[:13])  #[0:13]
print(str4[4:])  #[4:13]
print(str4[7:len(str4)])  #[5:13]
# Negative index==>is always start from the -1 and goes up to starting index.
# Shintu ==> [-1=u,-2=t,-3=n,-4=i,-5=h,-6=S]
str5="Shintu"
print(str5[-4:-1])



