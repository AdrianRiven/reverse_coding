
a = int(input())
b = 0
i =2
while(True):
    if a%i ==0:
        b+=i
        a/=i
    else:
        i+=1
    if a==1 :
        break

print(b)



