#pragma once
#ifndef STACK_H_
#define STACK_H_
#include "queue.cpp"

template <class T>
class stack {
private:
	queue<T> q1, q2;
public:
	stack();
	~stack();
	void push(T);
	T pop();
	bool isEmpty();
	void empty();
};

#endif // !STACK_H_
