a = int(input())
a = str(bin(a))
a = a[0:2] +a[2:][::-1]
print(int(eval(a)))