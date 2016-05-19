#include "StackArrary.h"

StackArrary::StackArrary()
{
}


StackArrary::~StackArrary()
{
}

void StackArrary::Init_stack()
{
	top = -1;					// 배열 0부터 값이 들어온것이기 때문에 -1로 설정
								// 프로그래머마다 다르게 설정해도됨
	
}

int StackArrary::Push(int input)
{
	if (top >= MAX - 1)			// MAX-1 일때 스택에 모두 들어간 경우이므로 커지면 오버플로우
	{
		cout << "\n     Stack overflow." << endl;
		return -1;
	}

	stack[++top] = input;
	
	return input;
}

int StackArrary::Pop()
{
	if (top < 0)				// top이 0보다 작은경우 스택이 비어있음
	{
		cout << "\n       Stack underflow." << endl;
		return -1;
	}

	return stack[top--];
}

void StackArrary::Printf_stack()
{
	int i;
	cout << "\n Stack contents : Top -----> Bottom \n";

	for (i = top; i >= 0; i--)
	{
		cout <<" " << stack[i];
	}
	cout << endl;
}
