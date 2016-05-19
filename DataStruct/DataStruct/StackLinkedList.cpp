#include "StackLinkedList.h"



StackLinkedList::StackLinkedList()
{
}


StackLinkedList::~StackLinkedList()
{
}

void StackLinkedList::Init_stack()
{
	head = new Node;
	tail = new Node;
	head->next = tail;
	tail->next = tail;
}

int StackLinkedList::Push(int input)
{
	Node* t;
	if ((t = new Node) == NULL)
	{
		// 스택 오버플로우가 없음 연결리스트로 만들시 스택의 크기가 정해져있지 않기때문이다.
		// 대신 메모리가 부족한 경우에 에러를 만들면 된다.
		cout << "\n    Out of memory..." << endl;
		return -1;
	}
	t->key = input;
	t->next = head->next;
	head->next = t;

	return input;
}

int StackLinkedList::Pop()
{
	Node* t;
	int i;
	if (head->next == tail)			// 머리다음이 꼬리일경우 스택이 비어있는 경우이다.
	{
		cout << "\n     Stack underflow" << endl;
		return -1;
	}

	t = head->next;
	i = t->key;
	head->next = t->next;
	delete(t);
	return i;
}

void StackLinkedList::Printf_stack()
{
	Node* t;
	t = head->next;
	cout << "\n Stack contents : Top -----> Bottom \n";
	while (t != tail)
	{
		cout << " " << t->key;
		t = t->next;
	}
	cout << endl;
}
