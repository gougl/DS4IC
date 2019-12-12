#pragma once
#include "hello.h"
#include "arraylist.h"
int main(){

//	Hello a;
//	a.print();
	
	arraylist<int> b;
	b.insert(0,1);
	b.insert(0,2);
	b.insert(0,3);
	b.display();
	return 0;
	
}
