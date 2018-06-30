#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')')
	{
	  return true;
	}
	else if(opening == '{' && closing == '}')
	{
		return true;
	}
	else if(opening == '[' && closing == ']')
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool BalancedParenthesescheck(char *exp){

	int size = strlen(exp);
	cout << size << endl;
	stack<char> s;

	for(int i = 0; i < size; i++){

		if((exp[i] == '(') || (exp[i] == '{') || (exp[i] == '['))
		{
			s.push(exp[i]);
		}
		else if((exp[i] == ')') || (exp[i] == '}') || (exp[i] == ']'))
		{
			if((s.empty()) || (!ArePair(s.top(), exp[i])))
			{
				char status = s.top();
				return false;
			}

			else
			{
				s.pop();
			}
		}
	}
	return (s.empty() ? true : false);
}

int main( void )
{
	char exp[] = "{[]()[]()}";
	bool check = BalancedParenthesescheck(exp);
	cout << check << endl;

	return 0;
}
