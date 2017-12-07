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

  return 0;
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

	return 0;
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
	return tables[currentScope].found(name);
	/*
	std::vector<SymbolTable>::const_reverse_iterator rit = tables.rbegin();
	for(; rit != tables.rend();rit++)
	{
		if(rit->found(name))
			return true;
		else
			return false;
	}
	*/
	/* with warning : comparison of integers of different signs
	for ( int i = 0; i < tables.size(); i++)
		if ( tables[i].found(name))
			return true;
		else
			return false;
	*/
	return 0;
}
bool  TableManager::checkFunc(const std::string& name) const
{
	return functions[currentScope].found(name);
	/*
	std::vector<FunctionTable>::const_reverse_iterator rit = functions.rbegin();
	for(; rit != functions.rend();rit++)
	{
		if(rit->found(name))
			return true;
		else
			return false;
	}
	*/
/* with warning
	for ( int i = 0; i < functions.size(); i++)
		if ( functions[i].found(name))
			return true;
		else
			return false;
*/
	return 0;
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
	std::vector<SymbolTable>::const_iterator it = tables.begin();
	for (; it!=tables.end(); ++it)
	{
		std::cout << "Symboltable : currentScope=" << currentScope << std::endl;
		it->display();
	}

	std::vector<FunctionTable>::const_iterator fit = functions.begin();
	for (; fit!=functions.end(); ++fit)
	{
		std::cout << "FuncTable : currentScope="<< currentScope <<std::endl;
		fit->display();
	}
	
}






