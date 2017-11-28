#ifndef TABLEMANAGER__H
#define TABLEMANAGER__H


#include <iostream>
#include <string>
#include <vector>
#include "symbolTable.h"
#include "functionTable.h"

class Literal;

class TableManager{
public:
	static TableManager& getInstance();

	const Literal* getEntry(const std::string& name);  // from symbol table
	const Node* getSuite(const std::string& name); // from function table

	void insert(const std::string& name, const Literal* node);
	void insert(const std::string& name, const Node* node);

	bool checkName(const std::string& name) const;
	bool checkFunc(const std::string& name) const;

	void pushScope();
	void pushScope();
	void display() const;

private:
	int currentScope;
	std::vector<symbolTable> tables;
	std::vector<functionTable> functions;

	TableManager() : currentScope(0), tables(), functions() {
		tables.push_back(symbolTable());
		functions.push_back(FunctionTable());
	}
};

#endif