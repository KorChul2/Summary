#pragma once
#include <iostream>
using namespace std;

#define MAX 10		

class StackArrary
{
private:
	int stack[MAX];		//배열일시에는 길이를 정해줘야하므로 선언해야함
	int top;

public:
	StackArrary();
	~StackArrary();

	void Init_stack();
	int Push(int input);
	int Pop();
	void Printf_stack();
};

