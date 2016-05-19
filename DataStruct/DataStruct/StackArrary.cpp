#include "StackArrary.h"

StackArrary::StackArrary()
{
}


StackArrary::~StackArrary()
{
}

void StackArrary::Init_stack()
{
	top = -1;					// �迭 0���� ���� ���°��̱� ������ -1�� ����
								// ���α׷��Ӹ��� �ٸ��� �����ص���
	
}

int StackArrary::Push(int input)
{
	if (top >= MAX - 1)			// MAX-1 �϶� ���ÿ� ��� �� ����̹Ƿ� Ŀ���� �����÷ο�
	{
		cout << "\n     Stack overflow." << endl;
		return -1;
	}

	stack[++top] = input;
	
	return input;
}

int StackArrary::Pop()
{
	if (top < 0)				// top�� 0���� ������� ������ �������
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
