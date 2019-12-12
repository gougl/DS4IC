#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <iostream>
#include "arraylist.h"


#define MaxSize 10
template<typename T>
class arraylist{
private:
	T *data;
	int length;
	int Max;
public:
	arraylist();
	//~arraylist();
	void insert(int pos,T e);
	T del(int pos);
	void display();
	
};



using namespace std;

template<typename T>
arraylist<T>::arraylist(){
	data = new T[MaxSize];
	length = 0;
	Max = MaxSize;
}
/*
template<typename T>
arraylist<T>::~arraylist(){
	free(data);
}*/

template<typename T>
void arraylist<T>::insert(int pos, T e){
	if(length == 0)
		data[length] = e;
	else{
		for(int i=length-1;i>=pos;i--)
			data[i+1] = data[i];
		data[pos] = e;
	}
	length++;
	
}

template<typename T>
void arraylist<T>::display(){
	for(int i=0;i<length;i++)
		cout << data[i] << endl;
}


template<typename T>
T arraylist<T>::del(int pos){
	T e = data[pos];
	for(int i = pos;i<length;i++)
		data[i] = data[i+1];
	return e;
}
#endif

