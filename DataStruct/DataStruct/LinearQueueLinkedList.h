#pragma once
#include <iostream>
using namespace std;

class node
{
private:
	friend class LinearQueueLinkedList;
	int key;
	node* prev;
	node* next;
};
class LinearQueueLinkedList
{
private:
	node* head, *tail;

public:
	LinearQueueLinkedList();
	~LinearQueueLinkedList();

	void Init_queue();
	int Put(int input);
	int Get();
	void Printf_queue();
};

