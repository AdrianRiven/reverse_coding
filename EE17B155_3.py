def diff(prev,i):
    if prev in 'AEIOU' and i in 'AEIOU':
        return False
    elif prev not in 'AEIOU' and i not in 'AEIOU':
        return False
    return True


a = input()
b = list(a)
out =1
prev = ''
for i in b:

    if prev == '':
        prev = i
    elif diff(prev,i):
        out +=1
        prev = i
print(out)