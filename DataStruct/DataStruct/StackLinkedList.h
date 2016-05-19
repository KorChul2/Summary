#pragma once
#include <iostream>
using namespace std;

class Node
{
private:
	friend class StackLinkedList;
	int key;
	Node* next;
};

class StackLinkedList
{
private:
	Node* head, *tail;
public:
	StackLinkedList();
	~StackLinkedList();

	void Init_stack();
	int Push(int input);
	int Pop();
	void Printf_stack();
};

