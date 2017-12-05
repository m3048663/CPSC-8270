#ifndef TABLEMANAGER__H
#define TABLEMANAGER__H

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include "symbolTable.h"
#include "functionTable.h"


class Literal;


class TableManager {
public:
  static  TableManager& getInstance();
  const Literal* getEntry(const std::string & name); //get from symbol table
  const Node* getSuite(const std::string & name);  //get from func table
  void  insert(const std::string& name, const Literal* node);// insert into symbol table
  void  insert(const std::string& name, const Node* node);// insert into function table
  bool  checkName(const std::string& name) const; // check from symnbol table
  bool  checkFunc(const std::string& name) const; // check from function table


  void  pushScope(const std::string& name);
  void  popScope();
  void  display() const;

  
private:
  int currentScope;
  std::vector<SymbolTable> tables;
  std::vector<FunctionTable> functions;
  TableManager() :currentScope(0), tables(),functions() {
    tables.push_back(SymbolTable());
    functions.push_back(FunctionTable());
  }
};




#endif