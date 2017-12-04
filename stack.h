#ifndef STRINGSTACK_H_
#define STRINGSTACK_H_
#include <iostream>
#include <string>
#include <stack>
#include <TrueStack.h>

class StringStack : public TrueStack
{
public:
	bool checkempty();
	void push(std::string);
  std::string pop();

private:
	std::stack<std::string> s;


};

#endif
