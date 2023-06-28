''' Python has no command for declaring a variable.
     A variable is created the moment you first assign a value to it.'''


number_1 = 34       #<class 'int'>
print(type(number_1))
print(number_1)
#string_1 = heelo   # error NameError: name 'heelo' is not defined. 
                    #as heelo is not defined  here  for string we have to put it in the quotes
string_1 = "heelo"
print(string_1)
num_float_1 = 23.0
print(type(num_float_1))   # <class 'float'>

## now if we want floating value to increase the decimal point we will use .2f or .3f for decimal points
"""So %. 2f means to round up to two decimal places. 
You can play around with the code to see what happens as you change the number in the formatter."""
num_float_2="{:.2f}".format(num_float_1) 
print(num_float_2)
## similarly we can use "{:.3f}"".format to change format to 3 points

num_float_3="{:.3f}".format(num_float_1)
print(num_float_3)
###  program to use pythagoras therorem 
### as per pythagoras in a triangle square of hy = sq of per + sq of base
import math
print("Enter Base Value:")
a = float(input())
print("Enter Perpendicular Value:")
b = float(input())
c = a*a + b*b
d = "{:.2f}".format(math.sqrt(c))
print(d)


#### using functions to calculate the pythagoras value

def Pythagoras(a,b):
    c = a*a + b*b
    d = "{:.2f}".format(math.sqrt(c))
    return d
print("Enter Base Value:")
a = float(input())
print("Enter Perpendicular Value:")
b = float(input())
print(Pythagoras(a,b))


### program making use of init functions