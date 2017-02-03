#include <iostream>
#include "stack.h"

template <class T>
stack<T>::stack() {

}

template <class T>
stack<T>::~stack() {

}

template <class T>
void stack<T>::push(T data) {
	q1.enqueue(data);
}

template <class T>
T stack<T>::pop() {
	//Move all items into the second queue until there's only 1 in the first queue
	while (q1.getSize() > 1) {
		q2.enqueue(q1.dequeue());
	}

	//Save dequeued item, which will be the most recent item entered
	T data = q1.dequeue();

	//Move all items back into first queue
	while (!q2.isEmpty()) {
		q1.enqueue(q2.dequeue());
	}

	return data;
}

template <class T>
bool stack<T>::isEmpty() {
	return q1.isEmpty();
}

template <class T>
void stack<T>::empty() {
	q1.empty();
}