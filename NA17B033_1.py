s=input().split()
a=int(s[0])
b=int(s[1])
r=(a+b)/(a*b)
if(a>b):
    m=b
else:
    m=a
hcf=1
for i in range(1,m+1):
    if(a%i==0 and b%i==0):
        hcf=i
lcm=(a*b)/hcf
res=int(r*lcm)
print(str(res))