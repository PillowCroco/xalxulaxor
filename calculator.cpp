#include "calculator.h"

int Calculator::add(int x, int y)
{
	return x+y;
}

int Calculator::mul(int x, int y)
{
	return x*y;
  
int Calculator::div(int x, int y)
{
	try
	{
		if (y == 0)
			throw y;
	}catch (int e)
	{
		cout <<"Cannot divide by 0." << endl;
	}

	return x/y;
}
