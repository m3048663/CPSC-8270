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
    std::cout << "Function " << ident << "Not Found" << std::endl;
    std::exception up = std::exception();
    throw up;
  }

  tm.pushScope();
  tm.getSuite(ident)->eval();
  //TableManager::getInstance().display();
  //const Literal* res = TableManager::getInstance().getEntry("__RETURN__");
  tm.popScope();

  return nullptr;
  // return res;
}

const Literal* FuncNode::eval() const {
  TableManager::getInstance().insert(ident,suite);
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
          //std::cout << TableManager::getInstance().checkName("__RETURN__") << std::endl;
          if(TableManager::getInstance().checkName("__RETURN__"))
            return TableManager::getInstance().getEntry("__RETURN__");
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
  if(!test) return nullptr;
  const Literal* lit = test->eval();
  if(!lit) throw std::string("test boolean operator is unvaild");

  if(lit->isTrue())
  {
    ifSuite->eval();
  }
  else if(elseSuite)
  {
    elseSuite->eval();
  }
  return nullptr;
}


const Literal* ReturnNode::eval() const {
  if(!node){
    const Literal* res=new IntLiteral(0);
    PoolOfNodes::getInstance().add(res);
    TableManager::getInstance().insert(name, res);
    return 0;
  }
  const Literal* res=node->eval();
  res->print();
  TableManager::getInstance().insert(name, res);
  return res;
}


const Literal* PrintNode::eval() const
{
  if (!node) {
  std::cout<<std::endl;
  return nullptr;
  }
  node->eval()->print();
  return nullptr;
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

const Literal* GrBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).Gr(*y);
}

const Literal* EqeqBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).Eqeq(*y);
}

const Literal* GreqBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).Greq(*y);
}

const Literal* LesseqBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).Lesseq(*y);
}

const Literal* NoteqBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).Noteq(*y);
}
