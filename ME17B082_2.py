a = int(input())

# Pr = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31]
Sum=0

Id = 2
while True:

    # if (a%Pr[Id] == 0):
    #     a /= Pr[Id]
    #     Sum += Pr[Id]
    #     continue
    
    if (a%Id == 0):
        a /= Id
        Sum += Id
        continue
    
    Id += 1

    if (a == 1):
        break

print(int(Sum))