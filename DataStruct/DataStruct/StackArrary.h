#pragma once
#include <iostream>
using namespace std;

#define MAX 10		

class StackArrary
{
private:
	int stack[MAX];		//�迭�Ͻÿ��� ���̸� ��������ϹǷ� �����ؾ���
	int top;

public:
	StackArrary();
	~StackArrary();

	void Init_stack();
	int Push(int input);
	int Pop();
	void Printf_stack();
};

