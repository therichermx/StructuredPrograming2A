import sys

#original list
tempF = {63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72,82, 64, 75 , 90, 64, -999, 99, 82, 95, 82};

print("Farenheit temperatures : " + str(tempF)) #original °f temp list

celsius = [N for N in tempF if N > 0]

print("Positive °F temperatures : " + str(celsius)) #reduced °f list

#//Celsius to Fahrenheit: (°F − 32) × 5/9 = °C
tempC = [((X-32)*(5/9)) for X in celsius ]
print("Temperatures in °C" + str(tempC)) # °c list

print('Highest value: {}'.format(max(tempC)))
print('Average: {}'.format(sum(tempC) / len(tempC)))
