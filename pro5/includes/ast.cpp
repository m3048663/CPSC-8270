#include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include "ast.h"

const Literal* IdentNode::eval() const { 
  //const Literal* val = SymbolTable::getInstance().getValue(ident);
  const Literal* val = TableManager::getInstance().getEntry(ident);
  return val;
}

const Literal* CallNode::eval() const{
  TableManager& tm = TableManager::getInstance();
  if(!tm.checkFunc(ident)){
    std::cout << "function" << ident << "Not Found" << std::endl;
    std::exception up = std::exception();
    throw up;
  }

  tm.pushScope();
  tm.getSuite(ident)->eval();
  //const Literal* res = TableManager::getInstance().getEntry("__RETURN__");
  tm.popScope();

  return nullptr;
  // return res;
}


FuncNode::FuncNode(const std::string id, Node* stmts) :
  Node(),ident(id),suite(stmts) {
    TableManager::getInstance().insert(id,suite);
  }

const Literal* FuncNode::eval() const {
  std::cout << "Call Function : ...." << std::endl;
  return nullptr;
}

void SuiteNode::insert(Node* i)
{
  stmts.push_back(i);
}

const Literal* SuiteNode::eval() const {
  if (stmts.empty()) return nullptr;
  else
    {
      for(const Node* n : stmts){
      if (n) 
        {
          n->eval();
        }
      else
        throw std::string("A suite node is nullptr");
      /*
      if (TableManager::getInstance().checkName("__RETURN__"))
      {
        break;
      }
      */
      }
      return nullptr;
    }
}




const Literal* IfNode::eval() const{
  std::cout <<"eval Ifnode" << std::endl;
  if (!test) return 0;

  TableManager& tm = TableManager::getInstance();

  const Literal* lit = test->eval();
  lit = dynamic_cast<const Literal*>(lit);
  if (!lit) throw std::string("Couldn't evaluate test in IfNode");

  bool flag = lit->eval()->isTrue();
  std::cout << "get Ifnode flag" << std::endl;
  
  if (flag) {
    if (!thenSuite) throw std::string("thenSuite is null");
    tm.pushScope();
    thenSuite->eval();
    /*
    if(tm.checkName("__RETURN__")) {
      const Literal* ret = tm.getEntry("__RETURN__");
      tm.popScope();
      tm.insertSymb("__RETURN__",ret);
    }
    else{
      tm.popScope();
    }
    */
    tm.popScope();

  }
  else if ( !flag ){
    if ( ! elseSuite ){
      // This is probably an If with no ELSE
      return nullptr;
    }
    tm.pushScope();
    elseSuite->eval();
    

    /*
    if(tm.checkName("__RETURN__")) {
      const Literal* ret = tm.getEntry("__RETURN__");
      tm.popScope();
      tm.insertSymb("__RETURN__",ret);
    }
    else{
      tm.popScope();
    }
    */
    tm.popScope();


  }
  else {
    throw std::string("Neither true nor false?");
  }

  return nullptr;
}





const Literal* PrintNode::eval() const
{
  if (!node) {
  std::cout<<std::endl;
  return 0;
  }
  node->eval()->print();
  return 0 ;
}






//BinaryNode

AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  //const Literal* res = right->eval();
  //const std::string n = static_cast<IdentNode*>(left)->getIdent();
  //SymbolTable::getInstance().setValue(n, res);
  //TableManager::getInstance().insert(n,res);
}


const Literal* AsgBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  TableManager::getInstance().insert(n,res);
  return res;
}

const Literal* AddBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  //return (*x+*y);
  return (*x).operator+(*y);
}

const Literal* SubBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)-(*y));
}

const Literal* MulBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)*(*y));
}

const Literal* DivBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)/(*y));
}



const Literal* PctBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)%(*y));
}


const Literal* DbStarBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)^(*y));
}


const Literal* DbSlashBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).DbSlash(*y);
}

const Literal* LessBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).Less(*y);
}

