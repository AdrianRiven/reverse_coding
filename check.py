import re
f = open("out.txt","r")
f1=f.readlines()
f2 = input()
f3 = re.split(" |\n|\r",f1[0])
f4 = re.split(" |\n|\r",f2)
f3= [i for i in f3 if i!='']
if f3!=f4:
	print("NOT EQUAL")