import sys

myList = {2, 3, 4, 5}

print("Original numbers: " + str(myList)) #original °f temp list


#Make the scales
tempC0 = [X for X in myList]
tempC = [(X+1) for X in myList ]
tempC2 = [(X+2) for X in myList]
tempC3 = [(X+3) for X in myList]
#merge the new lists
Final_list = tempC0+tempC+tempC2+tempC3
print("Temperatures in °C" + str(Final_list))