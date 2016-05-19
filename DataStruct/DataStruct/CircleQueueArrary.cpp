#include "CircleQueueArrary.h"



CircleQueueArrary::CircleQueueArrary()
{
}


CircleQueueArrary::~CircleQueueArrary()
{
}

void CircleQueueArrary::Init_queue()
{
	front = rear = 0;
}

int CircleQueueArrary::Put(int input)
{
	if ((rear + 1) % MAX == front)
	{
		cout << "\n   Queue overflow" << endl;
		return -1;
	}

	queue[rear] = input;
	rear = ++rear%MAX;
	return input;
}

int CircleQueueArrary::Get()
{
	int i;
	if (front == rear)
	{
		cout << "\n   Queue underflow" << endl;
		return -1;
	}

	i = queue[front];
	front = ++front%MAX;
	return i;
}

void CircleQueueArrary::Printf_queue()
{
	int i;
	for (i = front; i != rear; i = ++i%MAX)
	{
		cout << " " << queue[i];
	}
	cout << endl;
}
