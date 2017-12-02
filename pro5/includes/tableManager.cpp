#include <map>
#include <algorithm>
#include "tableManager.h"
#include "symbolTable.h"
#include "functionTable.h"
#include "literal.h"

TableManager& TableManager::getInstance()
{
	static TableManager instance;
	return instance;
}

// get from symbol table
const Literal* TableManager::getEntry(const std::string & name)
{
  std::vector<SymbolTable>::reverse_iterator rit=tables.rbegin();

  for (; rit !=tables.rend() ; ++rit)
   {
   	if(rit->found(name)) 
   		return rit->getEntry(name);
   }

  if ( rit == tables.rend() ) throw name+std::string(" not found");

} 

// get from func table
const Node* TableManager::getSuite(const std::string & name)
{
	std::vector<FunctionTable>::reverse_iterator rit = functions.rbegin();
	for (; rit != functions.rend(); ++rit)
	{
		if (rit->found(name))
			return rit->getEntry(name);
	}
	if (rit == functions.rend()) throw name+std::string("not found");
} 


// insert into symbol table
void  TableManager::insert(const std::string& name, const Literal* node)
{
	tables[currentScope].insert(name,node);
}

// insert into function table
void  TableManager::insert(const std::string& name, const Node* node)
{
	functions[currentScope].insert(name,node);
}
bool  TableManager::checkName(const std::string& name) const
{
	for ( int i = 0; i < tables.size(); i++)
		if ( tables[i].found(name))
			return true;
		else
			return false;
}
bool  TableManager::checkFunc(const std::string& name) const
{
	for ( int i = 0; i < functions.size(); i++)
		if ( functions[i].found(name))
			return true;
		else
			return false;
}

void  TableManager::pushScope()
{ 
	currentScope++;
	FunctionTable ftable;
	SymbolTable stable;
	tables.push_back(stable);
	functions.push_back(ftable);

}
void  TableManager::popScope()
{
	tables.pop_back();
	functions.pop_back();
	currentScope--;

}
void  TableManager::display() const
{
	/* can not use iterator, because hard to get currentscope
	std::vetor<SymbolTable>::iterator it = tables.begin();
	for (; it != tables.end(); ++it)
	{
		std::cout << "currentScope = " << i << std::endl;
		std::cout << tables[i].display();
	}

	std::vector<FunctionTable>::iterator it = functions.begin();
	for (; it != functions.end(); ++it)
	{
		std::cout << "currentScope = " << i << std::endl;
		std::cout << functions[i].display();
	}
	*/

	for (int i = 0; i < tables.size(); i++)
	{
		std::cout << "SYMBOL TABLE, currentscope = " << i << std::endl;
		tables[i].display();
	}
	for (int i = 0; i < functions.size();i++)
	{
		std::cout << "FUNC TABLE, currentscope = " << i << std::endl;
		functions[i].display();
	}
}






