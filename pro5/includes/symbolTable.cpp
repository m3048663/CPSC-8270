#include <map>
#include <algorithm>
#include "symbolTable.h"
#include "literal.h"


bool SymbolTable::found(const std::string& name) const
{
  std::map<std::string, const Literal*>::const_iterator it = table.find(name);
  if ( it == table.end() ) return false;
  else return true;

}
void SymbolTable::insert(const std::string& name, const Literal* val)
{
  table[name]=val;
}
const Literal* SymbolTable::getEntry(const std::string& name) const
{
  std::map<std::string, const Literal*>::const_iterator it = table.find(name);
  if ( it == table.end() ) throw name+std::string(" not found");
  return it->second;
}
void SymbolTable::display() const
{
  std::map<std::string, const Literal*>::const_iterator it = table.begin();
  while(it != table.end())
  {
    std::cout << it->first << " : " << it->second << std::endl;
    it ++;
  }
}


/*SymbolTable& SymbolTable::getInstance() {
  static SymbolTable instance;
  return instance;
}

const Literal* SymbolTable::getValue(const std::string& name) const {
  //std::cout<<name<<std::endl;
  std::map<std::string, const Literal*>::const_iterator it = 
    table.find(name);
  if ( it == table.end() ) throw name+std::string(" not found");
  return it->second;
}

void SymbolTable::setValue(const std::string& name, const Literal* val) { 
  table[name]=val;

}

*/

