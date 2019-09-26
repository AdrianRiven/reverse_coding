a=int(input())
i=2
j=0
while i<=a:
    while a%i == 0:
        a=a/i
        j=j+i
    i+=1
print(j)



