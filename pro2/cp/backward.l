%{
// Flex handles ambiguity by matching longest string;
// in  of tie, it matches the first one.

#include <iostream>
#include <string>
#include <stack>

std::stack<std::string> backward;
void reverse(std::stack<std::string>& backward);

%}

words [a-zA-Z0-9&_?!"'`;]
blank [ ]
CP		"\n"


%%
.		{return 1;}
{blank}	{backward.push(u8"\u0020");}
{CP}	{reverse(backward); }
a 		{backward.push(u8"\u0250");}
b 		{backward.push(u8"\u0071");} 
c 		{backward.push(u8"\u0254");} 
d		{backward.push(u8"\u0070");} 
e 		{backward.push(u8"\u01DD");} 
f		{backward.push(u8"\u025F");} 
g		{backward.push(u8"\u0253");} 
h		{backward.push(u8"\u0265");} 
i       {backward.push(u8"\u0131");} 
j		{backward.push(u8"\u027E");} 
k		{backward.push(u8"\u029E");} 
l		{backward.push(u8"\u006C");} 
m		{backward.push(u8"\u026F");} 
n 		{backward.push(u8"\u0075");} 
o		{backward.push(u8"\u006F");} 
p  		{backward.push(u8"\u0064");} 
q 		{backward.push(u8"\u0062");} 
r 		{backward.push(u8"\u0279");} 
s 		{backward.push(u8"\u0073");} 
t  		{backward.push(u8"\u0287");} 
u 		{backward.push(u8"\u006E");} 
v 		{backward.push(u8"\u028C");} 
w		{backward.push(u8"\u028D");} 
x		{backward.push(u8"\u0078");}
y 		{backward.push(u8"\u028E");} 
z 		{backward.push(u8"\u007A");} 
A 		{backward.push(u8"\u2200");}
B 		{backward.push(u8"\u0412");}
C 		{backward.push(u8"\u0186");}
D 		{backward.push(u8"\u15E1");}
E 		{backward.push(u8"\u018E");} 
F 		{backward.push(u8"\u2132");} 
G	 	{backward.push(u8"\u2141");} 
H 		{backward.push(u8"\u0048");} 
I 		{backward.push(u8"\u0049");}
J 		{backward.push(u8"\u017F");} 
K 		{backward.push(u8"\u22CA");} 
L 		{backward.push(u8"\u2142");} 
M 		{backward.push(u8"\u0057");} 
N	 	{backward.push(u8"\u004E");} 
O 		{backward.push(u8"\u004F");} 
P 		{backward.push(u8"\u0500");} 
Q 		{backward.push(u8"\u038C");}
R 		{backward.push(u8"\u1D1A");} 
S 		{backward.push(u8"\u0053");} 
T 		{backward.push(u8"\u22A5");}
U 		{backward.push(u8"\u2229");} 
V 		{backward.push(u8"\u039B");} 
W 		{backward.push(u8"\u004D");} 
X		{backward.push(u8"\u0058");} 
Y 		{backward.push(u8"\u2144");} 
Z 		{backward.push(u8"\u005A");} 
1 		{backward.push(u8"\u21C2");} 
2 		{backward.push(u8"\u218A");} 
3		{backward.push(u8"\u218B");} 
4		{backward.push(u8"\u07C8");} 
5	 	{backward.push(u8"\u03DA");} 
6 		{backward.push(u8"\u0039");} 
7 		{backward.push(u8"\u3125");} 
8 		{backward.push(u8"\u0038");} 
9 		{backward.push(u8"\u0036");} 
0 		{backward.push(u8"\u0030");} 
\& 		{backward.push(u8"\u214B");} 
\_		{backward.push(u8"\u203E");} 
\?		{backward.push(u8"\u00BF");} 
\! 		{backward.push(u8"\u00A1");} 
\"		{backward.push(u8"\u201E");} 
\`		{backward.push(u8"\u002C");} 
\.		{backward.push(u8"\u02D9");} 
\, 		{backward.push(u8"\u0027");} 
\;		{backward.push(u8"\u061B");} 
%%


int yywrap()
{
    yylex_destroy();
	return 1;
}

void reverse(std::stack<std::string>& backward)
{
	while(!backward.empty())
	{
		std::cout << backward.top();
		backward.pop();
	}
	std::cout << std::endl;	
}

