#include "LinearQueueLinkedList.h"



LinearQueueLinkedList::LinearQueueLinkedList()
{
}


LinearQueueLinkedList::~LinearQueueLinkedList()
{
}

void LinearQueueLinkedList::Init_queue()
{
	head = new node;
	tail = new node;
	head->prev = head;
	head->next = tail;
	tail->prev = head;
	tail->next = tail;
}

int LinearQueueLinkedList::Put(int input)
{
	node* t;
	if ((t = new node) == NULL)
	{
		cout << "\n   Out of Memory";
		return -1;
	}

	t->key = input;
	tail->prev->next = t;		// 즉, tail이전의 노드의->next가 t라는말임
	t->prev = tail->prev;
	tail->prev = t;
	t->next = tail;
	return input;
}

int LinearQueueLinkedList::Get()
{
	node* t;
	int i;
	t = head->next;
	if (t == tail)
	{
		cout << "\n   Queue underflow";
		return -1;
	}
	i = t->key;
	head->next = t->next;
	return 0;
}

void LinearQueueLinkedList::Printf_queue()
{
	node* t;
	t = head->next;
	while (t != tail)
	{
		cout << " " << t->key;
		t = t->next;
	}
	cout << endl;
}
