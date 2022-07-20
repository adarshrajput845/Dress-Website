import math
def calcSIN (x,y) :
    k = math.sin(x)*math.cos(y) + math.cos(x)*math.sin(y)
    return k
    
x = int(input("enter an angle"))
y = int(input("Enter another angle"))
m = calcSIN (x,y)
print(m)