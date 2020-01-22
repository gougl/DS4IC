#include <iostream>
#include "allinone.h"
#include "hello.h"
#include "arraylist.h"
#include "linkedlist.h"
#include "arraystack.h"
#include "linkedstack.h"
//#include "honoi.h"
#include "arrayqueue.h"
#include "fromMac16.h"
#include "binarytree.h"
using namespace std;

int main(){
	Hello hello;
	hello.print();

	arraylist<char> arr;
	arr.insert(0,'a');
	arr.insert(0,'b');
	arr.insert(0,'c');
	arr.display();

	cout << "the delete the element of index 1 is "<<arr.del(1)<<endl;
	cout << "the rest is " << endl;
	arr.display();
	cout << "this is first g++ program" << endl;

	linkedlist<int> ls;
	ls.insert_head(1);
	ls.insert_head(2);
	ls.insert_head(3);
	ls.display();
	cout << "delete the first elem of linkedlist is " << ls.del_first();
	cout << "the rest is " << endl;
	ls.display();

	arraystack<char> s;
	cout << s.isEmpty() << endl;
	s.push('s');
	s.push('t');
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	linkedstack<char> st;
	st.push('x');
	st.push('y');
	cout << st.pop() << endl;
	cout << st.pop() << endl;
	
	arrayqueue<int> arrque;
	arrque.enqueue(5);
	arrque.enqueue(6);
	cout << arrque.outqueue() << endl;
	cout << arrque.outqueue() << endl;
	//cout << "Plz input the number of discs for honoi :" << endl;
	//int n;
	//cin >> n;
	//functionInhonoi();
	//honoi(n,'a','b','c');
	output();

	btree<char> *bt = new btree<char>();
	bt->setRoot('a');
	cout << bt->getRootData() << endl;
	btnode<char> *rootNode = bt->getRoot();
	bt->setLchild(rootNode,'b');
	bt->setRchild(rootNode,'c');	



}
