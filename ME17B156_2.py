from collections import Counter
def fact(n):
	b=[]
	while n % 2 == 0: 
		b.append(2) 
		n = n / 2
	for i in range(3,int(math.sqrt(n))+1,2): 
		while n % i== 0: 
		    b.append(i) 
		    n = n / i 
	if n > 2: 
		b.append(n)
		return b

a = int(input())
s=[]
count=0
if a<=1:
	print(0)
else:
	s=fact(a) 
	f=Counter(s)
	for key in f:
		count= count + key*f[key]
print(count)
