from math import gcd
a = input()
b = a.split()
b = [int(j) for j in b]
b = int((b[0]+b[1])/gcd(b[0],b[1]))
print(b)