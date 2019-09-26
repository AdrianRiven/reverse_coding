from flask import Flask, jsonify, request
from flask_cors import CORS
from werkzeug.utils import secure_filename
import os
import subprocess
from db import SqlDb 
app = Flask(__name__)
CORS(app)
DB = SqlDb()
def cpp(str,num,q,name):
	a1=subprocess.Popen(["g++", name],stdout=subprocess.PIPE)
	count=0;
	for i in range(1,num+1):
		os.system("rm out.txt")
		if len(a1.stdout.readline().decode("utf-8"))>0:
			return -1
		a=subprocess.Popen(["cat", "./input/{0}/{1}.txt".format(q,i)],stdout=subprocess.PIPE)
		output=subprocess.Popen(["./a.out"],stdin=a.stdout,stdout=subprocess.PIPE)
		a.wait()
		str3=output.stdout.readline().decode("utf-8")
		f=open("out.txt","w")
		a=subprocess.Popen(["echo",str3],stdout=f);
		b=subprocess.Popen(["cat","./output/{0}/{1}.txt".format(q,i)],stdout=subprocess.PIPE)
		output1=subprocess.Popen(["python","check.py"],stdin=b.stdout,stdout=subprocess.PIPE)
		b.wait()
		str2 = output1.stdout.readline().decode("utf-8")
		
		#print(str2)
		if len(str2) > 0:
			break
		else:
			count+=1
		
	return count
def c(str,num,q,name):
	a1=subprocess.Popen(["gcc", name],stdout=subprocess.PIPE)
	count=0;
	for i in range(1,num+1):
		os.system("rm out.txt")
		if len(a1.stdout.readline().decode("utf-8"))>0:
			return -1
		a=subprocess.Popen(["cat", "./input/{0}/{1}.txt".format(q,i)],stdout=subprocess.PIPE)
		output=subprocess.Popen(["./a.out"],stdin=a.stdout,stdout=subprocess.PIPE)
		a.wait()
		str3=output.stdout.readline().decode("utf-8")
		f=open("out.txt","w")
		a=subprocess.Popen(["echo",str3],stdout=f);
		b=subprocess.Popen(["cat","./output/{0}/{1}.txt".format(q,i)],stdout=subprocess.PIPE)
		output1=subprocess.Popen(["python","check.py"],stdin=b.stdout,stdout=subprocess.PIPE)
		b.wait()
		str2 = output1.stdout.readline().decode("utf-8")
		
		#print(str2)
		if len(str2) > 0:
			break
		else:
			count+=1
		
	return count

def py(str,num,q,name):
	#a1=subprocess.Popen(["g++", name],stdout=subprocess.PIPE)
	count=0;
	for i in range(1,num+1):
		os.system("rm out.txt")
		a=subprocess.Popen(["cat", "./input/{0}/{1}.txt".format(q,i)],stdout=subprocess.PIPE)
		output=subprocess.Popen(["python",name],stdin=a.stdout,stdout=subprocess.PIPE)
		a.wait()
		str3=output.stdout.readline().decode("utf-8")
		f=open("out.txt","w")
		a=subprocess.Popen(["echo",str3],stdout=f);
		b=subprocess.Popen(["cat","./output/{0}/{1}.txt".format(q,i)],stdout=subprocess.PIPE)
		output1=subprocess.Popen(["python","check.py"],stdin=b.stdout,stdout=subprocess.PIPE)
		b.wait()
		str2 = output1.stdout.readline().decode("utf-8")
		
		# print(len(str2))
		if len(str2) > 0:
			count+=0
		else:
			count+=1
		
	return count

@app.route("/Q1", methods=["POST"])
def q1():
	roll=request.form['roll']
	numout = [15,10,10,10,15,10]
	m = [1,3,4,5,3,6]
	for i in range(1,7):
		if 'answer'+str(i) in request.files:
			f = request.files['answer'+str(i)]
			file = request.files['answer'+str(i)]
			f.save(secure_filename(f.filename))
			if request.form['type'+str(i)] == "C++":
				mark=cpp('answer'+str(i),numout[i-1],"Q"+str(i),file.filename)
				if mark == -1:
					return jsonify({'success':False,'error':"Compilation Error"})
				else:
					print(mark)
					DB.add_mark("q"+str(i),mark*m[i-1],roll)
			if request.form['type'+str(i)] == "C":
				mark=c('answer'+str(i),numout[i-1],"Q"+str(i),file.filename)
				if mark == -1:
					return jsonify({'success':False,'error':"Compilation Error"})
				else:
					DB.add_mark("q"+str(i),mark*m[i-1],roll)
			if request.form['type'+str(i)] == "Python":
				mark=py('answer'+str(i),numout[i-1],"Q"+str(i),file.filename)
				if mark == -1:
					return jsonify({'success':False,'error':"Compilation Error"})
				else:
					print(mark)
					DB.add_mark("q"+str(i),mark*m[i-1],roll)
	li=DB.get_mark(roll)
	print(li)
	tot=0
	for i in range(2,9):
		tot+=li[i]				
	return jsonify({'success':True,'Q1':li[2],'Q2':li[3],'Q3':li[4],'Q4':li[5],'Q5':li[6],'Q6':li[7],'Total':tot})
if __name__ == "__main__":
  app.run(debug=True, host="0.0.0.0")