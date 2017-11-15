#pragma once
#include "StackOverflowException.h"
#include "StackUnderflowException.h"

namespace StackExercise
{
	const int STACK_SIZE = 10;

	template<typename T>
	class Stack
	{
	public:

		//template<typename T>
		Stack()
			: m_nextIndex(0)
		{}

		//template<typename T>
		void Push(T val)
		{
			if (m_nextIndex < STACK_SIZE)
			{
				m_impl[ m_nextIndex ] = val;
				++m_nextIndex;
			}
			else
			{
				throw StackOverflowException();
			}
		}

		//template<typename T>
		T Pop()
		{
			if (m_nextIndex > 0)
			{
				--m_nextIndex;
				return m_impl[ m_nextIndex ];
			}
			else
			{
				throw StackUnderflowException();
			}
		}

	private:
		T m_impl[STACK_SIZE];
		int m_nextIndex;
	};
}