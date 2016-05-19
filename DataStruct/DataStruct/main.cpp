#include "StackArrary.h"			// 스택 배열로구성
#include "StackLinkedList.h"		// 스택 연결리스트로 구성
#include "CircleQueueArrary.h"		// 원형큐 배열로 구성
#include "LinearQueueLinkedList.h"  // 선형큐 연결리스트로 구성

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

	qArr->Put(10);					// overflow발생
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
	qList->Printf_queue();			// overflow발생 안함


	// 배열로 스택을 구성할시 속도에 이점, 크기가 제한이 있다는 단점(메모리낭비)
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

	// 연결리스트로 스택을 구성할시 속도는 느림, 크기 제한이 없음
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