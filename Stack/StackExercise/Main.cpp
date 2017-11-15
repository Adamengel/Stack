#include <iostream>
#include "Stack.h"

class test
{
public:
	int bbb;
};

void main()
{
	try {
		StackExercise::Stack<test> sTest;
		test t();
		sTest.Push(test());
		sTest.Push(test());
		sTest.Push(test());
		sTest.Push(test());
		sTest.Push(test());
		sTest.Push(test());
		sTest.Push(test());
		sTest.Push(test());
		sTest.Push(test());
		sTest.Push(test());
		test t2 = sTest.Pop();

		StackExercise::Stack<int> sInt;
		sInt.Push(1);
		sInt.Push(2);
		sInt.Push(3);
		sInt.Push(4);
		sInt.Push(5);
		sInt.Push(6);
		sInt.Push(7);
		sInt.Push(8);
		sInt.Push(9);
		sInt.Push(10);
		int temp = sInt.Pop();
	}
	catch (StackExercise::StackUnderflowException& ex)
	{
		//stack underflow
	}
	catch (StackExercise::StackOverflowException& ex)
	{
		//stack overflow
	}
	catch (...)
	{
		//unknownerror
	}

}