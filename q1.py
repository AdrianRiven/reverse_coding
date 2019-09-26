import math
a,b=sorted(map(int,input().split()))
c=a+b
c=c/math.gcd(a,b)
print(int(c))