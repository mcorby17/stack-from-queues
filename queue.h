#pragma once
#ifndef QUEUE_H_
#define QUEUE_H_
#include "node.h"

template <class T>
class queue {
private:
	int size;
	node<T> *start, *end;

public:
	queue();
	~queue();
	void enqueue(T);
	T dequeue();
	bool isEmpty();
	void empty();
	int getSize();
};

#endif // !QUEUE_H_
