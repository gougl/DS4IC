#include <iostream>
#include "hello.h"
#include "arraylist.h"
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
}
