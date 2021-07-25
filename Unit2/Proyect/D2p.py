import sys

myList = {2, 3, 4, 5}

print("Original numbers: " + str(myList)) #original °f temp list


#Make the scales
list0 = [X for X in myList]
list1 = [(X+1) for X in myList ]
list2 = [(X+2) for X in myList]
list3 = [(X+3) for X in myList]
#merge the new lists
Final_list = list0+list1+list2+list3
print(str(Final_list))