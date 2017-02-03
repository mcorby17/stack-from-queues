#include "queue.h"

template <class T>
queue<T>::queue() {
	size = 0;
	start = nullptr;
	end = nullptr;
}

template <class T>
queue<T>::~queue() {

}

template <class T>
void queue<T>::enqueue(T data) {
	node<T> *newNode = new node<T>;
	newNode->data = data;

	if (start == nullptr) { // IF start isn't pointing at anything, it must be an empty list
		start = newNode;
		end = newNode;
	}
	else {
		newNode->next = start;
		newNode->next->prev = newNode;
		start = newNode;
	}
	size++;
}

template <class T>
T queue<T>::dequeue() {
	if (size == 0) {
		cout << "Nothing in queue\n";
		exit(1);
	}
		
	else {
		T data = end->data;
		node<T> *tmp = end;
		end = end->prev;
		delete tmp;
		size--;
		if (size == 0) {
			start = nullptr;
			end = nullptr;
		}
		return data;
	}
}

template <class T>
bool queue<T>::isEmpty() {
	return size == 0 ? true : false;
}

template <class T>
void queue<T>::empty() {
	node<T> *tmp1;
	if (size == 0)
		cout << "No items in queue.\n";
	else if (size == 1) {
		tmp1 = start;
		delete tmp1;
		size--;
	}
	else {
		while (size != 0) {
			tmp1 = start;
			start = start->next;
			delete tmp1;
			size--;
		}
	}
}

template <class T>
int queue<T>::getSize() {
	return size;
}