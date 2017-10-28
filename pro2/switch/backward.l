%{
// Flex handles ambiguity by matching longest string;
// in case of tie, it matches the first one.

#include <iostream>
#include <string>
#include <stack>
void backward( char* msg);
int i;
%}

words [a-zA-Z0-9&_?!"'`; ]

%%
{words}+	{backward(yytext);}
%%

int yywrap()
{
    yylex_destroy();
	return 1;
}

void backward( char* msg)
{
	std::stack<std::string> backward;
	for(i = 0; i < yyleng; i++)
	{
		switch(msg[i])
		{
            case '@':       return 1;
			case 'a': 		backward.push(u8"\u0250"); break;
			case 'b': 		backward.push(u8"\u0071"); break;
			case 'c': 		backward.push(u8"\u0254"); break;
			case 'd':		backward.push(u8"\u0070"); break;
			case 'e': 		backward.push(u8"\u01DD"); break;
			case 'f':		backward.push(u8"\u025F"); break;
			case 'g':		backward.push(u8"\u0253"); break;
			case 'h':		backward.push(u8"\u0265"); break;
			case 'i':		backward.push(u8"\u0131"); break;
			case 'j':		backward.push(u8"\u027E"); break;
			case 'k':		backward.push(u8"\u029E"); break;
			case 'l':		backward.push(u8"\u006C"); break;
			case 'm':		backward.push(u8"\u026F"); break;
			case 'n': 		backward.push(u8"\u0075"); break;
			case 'o':		backward.push(u8"\u006F"); break;
			case 'p':  		backward.push(u8"\u0064"); break;
			case 'q': 		backward.push(u8"\u0062"); break;
			case 'r': 		backward.push(u8"\u0279"); break;
			case 's': 		backward.push(u8"\u0073"); break;
			case 't':  		backward.push(u8"\u0287"); break;
			case 'u': 		backward.push(u8"\u006E"); break;
			case 'v': 		backward.push(u8"\u028C"); break;
			case 'w':		backward.push(u8"\u028D"); break;
			case 'x':		backward.push(u8"\u0078"); break;
			case 'y': 		backward.push(u8"\u028E"); break;
			case 'z': 		backward.push(u8"\u007A"); break;
			case 'A': 		backward.push(u8"\u2200"); break;
			case 'B': 		backward.push(u8"\u0412"); break;
			case 'C': 		backward.push(u8"\u0186"); break;
			case 'D': 		backward.push(u8"\u15E1"); break;
			case 'E': 		backward.push(u8"\u018E"); break;
			case 'F': 		backward.push(u8"\u2132"); break;
			case 'G':	 	backward.push(u8"\u2141"); break;
			case 'H': 		backward.push(u8"\u0048"); break;
			case 'I': 		backward.push(u8"\u0049"); break;
			case 'J': 		backward.push(u8"\u017F"); break;
			case 'K': 		backward.push(u8"\u22CA"); break;
			case 'L': 		backward.push(u8"\u2142"); break;
			case 'M': 		backward.push(u8"\u0057"); break;
			case 'N':	 	backward.push(u8"\u004E"); break;
			case 'O': 		backward.push(u8"\u004F"); break;
			case 'P': 		backward.push(u8"\u0500"); break;
			case 'Q': 		backward.push(u8"\u038C"); break;
			case 'R': 		backward.push(u8"\u1D1A"); break;
			case 'S': 		backward.push(u8"\u0053"); break;
			case 'T': 		backward.push(u8"\u22A5"); break;
			case 'U': 		backward.push(u8"\u2229"); break;
			case 'V': 		backward.push(u8"\u039B"); break;
			case 'W': 		backward.push(u8"\u004D"); break;
			case 'X':		backward.push(u8"\u0058"); break;
			case 'Y': 		backward.push(u8"\u2144"); break;
			case 'Z': 		backward.push(u8"\u005A"); break;
			case '1': 		backward.push(u8"\u21C2"); break;
			case '2': 		backward.push(u8"\u218A"); break;
			case '3':		backward.push(u8"\u218B"); break;
			case '4':		backward.push(u8"\u07C8"); break;
			case '5':	 	backward.push(u8"\u03DA"); break;
			case '6': 		backward.push(u8"\u0039"); break;
			case '7': 		backward.push(u8"\u3125"); break;
			case '8': 		backward.push(u8"\u0038"); break;
			case '9': 		backward.push(u8"\u0036"); break;
			case '0': 		backward.push(u8"\u0030"); break;
			case '\&': 		backward.push(u8"\u214B"); break;
			case '\_':		backward.push(u8"\u203E"); break;
			case '\?':		backward.push(u8"\u00BF"); break;
			case '\!': 		backward.push(u8"\u00A1"); break;
			case '\"':		backward.push(u8"\u201E"); break;
			case '\`':		backward.push(u8"\u002C"); break;
			case '\.':		backward.push(u8"\u02D9"); break;
			case '\,': 		backward.push(u8"\u0027"); break;
			case '\;':		backward.push(u8"\u061B"); break;
			case ' ':		backward.push(u8"\u0020"); break;
		}
		
		
	}
	while(!backward.empty())
	{
		std::cout << backward.top();
		backward.pop();
	}	
}

