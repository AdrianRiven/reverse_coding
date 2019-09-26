from db import SqlDb
import re
DB=SqlDb()
f=open("Participants.txt","r")
f1=f.readlines()
print(f1)
for i in range(len(f1)):
	f3 = re.split("\r|\n|\t",f1[i])
	print(f3)
	x,y,z=f3
	DB.add_entry(x,y)