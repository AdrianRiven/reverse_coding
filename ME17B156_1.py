import math
import string
A,B=input().split(" ")
a=int(A)
b=int(B)
s = a + b
gcd = math.gcd(a,b)
if (a<0 and b>0) or (a>0 and b<0) :
	print(int(-1*abs(s/gcd)))
else :
	print(int(abs(s/gcd)))

