#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "arraylist.h"
#define MaxSize 10

template<typename T>
class arraystack:public arraylist<T>{
private:
	arraylist<T> *stack;
	int top;
	int Max;

public:
	arraystack();
	void push(T e);
	T pop();
	bool isEmpty();

};

template<typename T>
bool arraystack<T>::isEmpty(){
	if(top == 0)
		return true;
	return false;
}

template<typename T>
arraystack<T>::arraystack(){
	stack = new arraylist<T>();
	top = 0;
	Max = MaxSize;
}


template<typename T>
void arraystack<T>::push(T e){
	stack->insert(top++,e);
}

template<typename T>
T arraystack<T>::pop(){
	return stack->del(--top);
}

#endif

