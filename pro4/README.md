Finished all the task 

pick_unop : set MinusOP() function in literal.h and inherited by INT and Float class.

pick_multop : add DbStarBinaryNode, DbSlashBinaryNode, PercentBinaryNode


pick_PLUS_MINUS : use the given method AddBinaryNode, SubBinaryNode

augassign: such as += : use AddBinaryNode and AsgBinaryNode 

atom: set variable name in NMAE and value in FLOAT and INT

a=b=c=10 question: set star_EQUAL_R rule in parse.y and modify the rule in star_EQUAL to 
	EQUAL pick_yield_expr_testlist star_EQUAL_R
that could be change the equal direction.

-15%4 question: (x%y + y)%y

memory leak: pool.add(Node*)
	     end_scanner()
	     fclose(input_file)
	     PoolOfNodes::getInstance().drainThePool()
		
 
