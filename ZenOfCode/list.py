

# exploring list in python 

l1 = [] 
print(l1) 
# methods of list 
l1.append(34) 
l1.append(45) 
l1.append(67) 
l1.append(89)
print("List after appending element is " )  
print(l1) 
print("List after poping the three elements" ) 
print(l1.pop()) # 89 
print(l1.pop()) # 67 
print(l1.pop())  # 45 
print(l1) 



for i in range(5) : 
    l1.append(i*i*i) 
print(l1)
# l1.extend("Namasted Vishwa") 
print(l1) 
print("After reversing list is : ") 
l1.reverse() 
print(l1) ;
print("List after sorting is: ")
l1.sort(reverse=False) # sort the element by ascending order
print(l1) 
print("list after sorting in decreasing order") 
l1.sort(reverse=True) 
print(l1) ;


l2 = l1.copy() 
print(l2) 

print(l2.count(0))
print(l2.count(78))  
l2.remove(34) 
print(l2) 
try:
    l2.remove(788)
except (ValueError) :
    print("Given element was not found in list") 

print(l2) 
try:
    l2.index(45)
except : 
    print("Some error has occured")  
print(l2.index(8)) 
print(l2.index(64)) 

print(l2.__len__() ) 
print("Length of list l2 is : {}".format(len(l2))) 
print(l2.__sizeof__())# size of l2 list in bytes  
l3 = l2+l1
print(l3) 

print(l2*3) 
print(l3+l3) 
print("l3 repr was....") 
print(l3.__repr__()) # return the list in form of string 

print(type(l3)) 


# list of list in python 
l3 = [[1,2,3,4,5] ,["Hello", "Hi" ,"Namaste" ] , True , False ,56.78 ] 
print(l3) 


# indexing and slicing 
print(l3[0]) 

print(l3[1]) 
print(l3[2]) 
print(l3[3]) 
print(l3[4]) 
try :
    print(l3[5])
except : 
    print("Index error!") 
print(l3[0][0]) 
print(l3[0][1] )
print(l3[0][2] ) 
print(l3[0][3]) 
print(l3[0][4]) 


# list slicing 

l4 = list("Namaste Duniya") 
print(l4) 

# slicing with positive index

# slicing with negative index 


