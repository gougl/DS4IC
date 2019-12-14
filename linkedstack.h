#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include "linkedlist.h"

template<typename T>
class linkedstack:public linkedlist<T>{
private:
	linkedlist<T> *stack;
public:
	linkedstack();
	void push(T e);
	T pop();
};

template<typename T>
linkedstack<T>::linkedstack(){
	stack = new linkedlist<T>();
}

template<typename T>
void linkedstack<T>::push(T e){
	stack->insert_head(e);
}

template<typename T>
T linkedstack<T>::pop(){
	return stack->del_first();
}
#endif
