#include <stack.h>

bool StringStack::checkempty()
{
  if(s.empty == true){
    return true;
  else{
    return false;
  }
}

void StringStack::push(std::string value)
{
	s.push(value);
}

std::string StringStack::pop()
{
  if(!s.empty())
  {
    std::string value = s.top();
    s.pop();
    return value;
  }
}

