#pragma once
#include <iostream>
using namespace std;

#define MAX 10	

class CircleQueueArrary
{
private:
	int queue[MAX];		//배열일시에는 길이를 정해줘야하므로 선언해야함
	int front, rear;

public:
	CircleQueueArrary();
	~CircleQueueArrary();

	void Init_queue();
	int Put(int input);
	int Get();
	void Printf_queue();
};

