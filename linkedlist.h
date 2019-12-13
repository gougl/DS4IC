#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

template<typename T>
class linkedlist;

template<typename T>
class node{
private:
	T data;
	node<T> *next;
public:
	node();
	node(T e);
	friend class linkedlist<T>;
};

template<typename T>
node<T>::node(){
	next = NULL;
}
template<typename T>
node<T>::node(T e){
	data = e;
	next = NULL;
}


template<typename T>
class linkedlist{
private:
	node<T> *head;
public:
	linkedlist();
	linkedlist(T e);
	void insert_head(T e);
	T del_first();
	void display();
	
};

template<typename T>
linkedlist<T>::linkedlist(){
	head = new node<T>();
}

template<typename T>
linkedlist<T>::linkedlist(T e){
	head = new node<T>(e);
}

template<typename T>
void linkedlist<T>::insert_head(T e){
	node<T> *newnode = new node<T>();
	newnode->data = e;
	newnode->next = head->next;
	head->next = newnode;
	
}

template<typename T>
T linkedlist<T>::del_first(){
	node<T> *q = head->next;
	T e = q->data;
	if(!q->next || !q)
		head->next = NULL;
	else
		head->next = q->next;
	free(q);
	return e;
	
}
template<typename T>
void linkedlist<T>::display(){
	node<T> *p = head->next;
	while(p){
		cout << p->data <<endl;
		p = p->next;
	}
}
#endif
