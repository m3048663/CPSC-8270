x = 3
def f():
	def g():
		y = 5
	def h():
		print y
	g()
	h()

f()