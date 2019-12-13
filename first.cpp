#include <iostream>
#include "hello.h"
#include "arraylist.h"
#include "linkedlist.h"
#include "arraystack.h"
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
}
