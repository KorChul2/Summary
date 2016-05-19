#pragma once
#include <iostream>
using namespace std;

#define MAX 10	

class CircleQueueArrary
{
private:
	int queue[MAX];		//�迭�Ͻÿ��� ���̸� ��������ϹǷ� �����ؾ���
	int front, rear;

public:
	CircleQueueArrary();
	~CircleQueueArrary();

	void Init_queue();
	int Put(int input);
	int Get();
	void Printf_queue();
};

