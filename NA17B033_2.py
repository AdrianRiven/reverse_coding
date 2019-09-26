n=int(input())
s=0
i=2
a=n
while(a>1 and i<=n):
    if(a%i==0):
        s=s+i
        a=a/i
        i=1
    i=i+1
print(str(s))

            
    