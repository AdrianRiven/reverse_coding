import MySQLdb

class SqlDb:
	def __init__(self):
		self.host = '0.0.0.0'                
		self.user = 'root'
		self.pswd = ''
		self.db = 'RC'
		self.conn =	None
		self.cur = None

	def db_connect(self):
		self.conn = MySQLdb.connect(user=self.user, password=self.pswd,host=self.host,database=self.db)
		self.cur = self.conn.cursor()

	def add_mark(self,q,m,r):
		self.db_connect()

		entries = self.cur.execute("SELECT {0} from marks where (roll1 = '{1}') OR (roll2 = '{2}') ".format(q,r,r))
		print(entries)
		if entries < m:
			self.cur.execute("update marks SET {0} = {1} where roll1 = '{2}' or roll2 = '{3}' ".format(q,m,r,r))
		self.conn.commit()

	def get_mark(self,r):
		self.db_connect()

		self.cur.execute("SELECT * from marks where roll1 = '{0}' or roll2 = '{1}' ".format(r,r))
		a=self.cur.fetchall()
		#a,b,c,d,e,f,g,h,i = self.cur.fetchall()
		print(a)
		return a[0]
	def add_entry(self,roll1,roll2):
		self.db_connect()

		self.cur.execute("INSERT into marks(roll1,roll2,q1,q2,q3,q4,q5,q6,Total) values('{0}','{1}',0,0,0,0,0,0,0)".format(roll1,roll2))
		self.conn.commit()