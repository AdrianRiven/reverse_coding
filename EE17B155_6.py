a = int(input())
b =bin(a)
c = list(str(b))[2:]
d = []
c = ['0'] +c +['0']
for i in range(len(c)-1):
    if c[i] == c[i+1]:
        d.append('0')
    else:
        d.append('1')
print(eval(''.join(['0','b']+d)))