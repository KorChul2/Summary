#include "StackArrary.h"			// ���� �迭�α���
#include "StackLinkedList.h"		// ���� ���Ḯ��Ʈ�� ����
#include "CircleQueueArrary.h"		// ����ť �迭�� ����
#include "LinearQueueLinkedList.h"  // ����ť ���Ḯ��Ʈ�� ����

int main()
{
	CircleQueueArrary* qArr = new CircleQueueArrary;
	qArr->Init_queue();
	qArr->Put(1);
	qArr->Put(2);
	qArr->Put(3);
	qArr->Put(4);
	qArr->Put(5);
	qArr->Put(6);
	qArr->Put(7);
	qArr->Put(8);
	qArr->Put(9);
	qArr->Printf_queue();

	qArr->Put(10);					// overflow�߻�
	qArr->Printf_queue();


	LinearQueueLinkedList* qList = new LinearQueueLinkedList;
	qList->Init_queue();
	qList->Put(1);
	qList->Put(2);
	qList->Put(3);
	qList->Put(4);
	qList->Put(5);
	qList->Put(6);
	qList->Put(7);
	qList->Put(8);
	qList->Put(9);
	qList->Printf_queue();
	qList->Put(10);
	qList->Printf_queue();
	qList->Put(11);
	qList->Put(12);
	qList->Put(13);
	qList->Printf_queue();			// overflow�߻� ����


	// �迭�� ������ �����ҽ� �ӵ��� ����, ũ�Ⱑ ������ �ִٴ� ����(�޸𸮳���)
	cout << endl << "Stack Arrary" << endl;
	StackArrary* sArr = new StackArrary;
	sArr->Init_stack();

	sArr->Push(5);
	sArr->Push(2);
	sArr->Push(1);
	sArr->Push(8);
	sArr->Push(3);
	sArr->Printf_stack();
	sArr->Pop();
	sArr->Printf_stack();

	cout << "------------------------------------------------------" << endl << endl;

	// ���Ḯ��Ʈ�� ������ �����ҽ� �ӵ��� ����, ũ�� ������ ����
	cout << endl << "Stack LinkedList" << endl;
	StackLinkedList* sList = new StackLinkedList;
	sList->Init_stack();
	sList->Push(5);
	sList->Push(2);
	sList->Push(1);
	sList->Push(8);
	sList->Push(3);
	sList->Printf_stack();
	sList->Pop();
	sList->Printf_stack();

	return 0;
}