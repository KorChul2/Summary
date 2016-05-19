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
		// ���� �����÷ο찡 ���� ���Ḯ��Ʈ�� ����� ������ ũ�Ⱑ ���������� �ʱ⶧���̴�.
		// ��� �޸𸮰� ������ ��쿡 ������ ����� �ȴ�.
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
	if (head->next == tail)			// �Ӹ������� �����ϰ�� ������ ����ִ� ����̴�.
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
