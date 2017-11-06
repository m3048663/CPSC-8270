# PRO 3
# NAME : Hui MA
# Clemson Email : mhui@g.clemson.edu

this project is to use bison & flex to implement a tool like mccabe in Python to print function name, function location and complexity of function.

I defined some full slope parameters.
Like:
	complexity: to log the complexity of the function
	isfinally: to flag whether have a finally in the funtion
				(because in try-expect-finally, if have finally here, the complexity would be 1. if not, the complexity would be increase by the count of try and expect)
	trycomplexity: the number of try and expect


try-expect-finally: the more difficult things is there is a for loop in 					try. My way is to assign the complexity to a tmp 						parameter. if have a finally, the the complexity 						would be increase from one. if not, the complexity						could be increase from the tmp value.

memory leak solution:
	I delete NAME in parse.y because I just use only one yylval from scan.l to parse.y, it would be the reason of memory leaking.
	I delete all NAME in parse.y in order to the further work.