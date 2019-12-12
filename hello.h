
#ifndef HELLO_H
#define HELLO_H

#include <iostream>
using namespace std;



class Hello{

private:
	int a;
public:
	Hello();
	void print();
};

Hello::Hello(){
	a = 0;
}

void Hello::print(){
	cout << "hello world" <<endl;
}

#endif
