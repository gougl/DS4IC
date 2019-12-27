#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#define Max 10
template<typename T>
class arrayqueue:arraylist<T>{
private:
	arraylist<T> *queue;
	int SIZE;
	int front, rear;
public:
	arrayqueue();
	void enqueue(T e);
	T outqueue();
};

template<typename T>
arrayqueue<T>::arrayqueue(){
	queue = new arraylist<T>;
	front = rear = 0;
	SIZE = Max;
}

template<typename T>
void arrayqueue<T>::enqueue(T e){
	queue->insert(rear,e);
	rear++;
}

template<typename T>
T arrayqueue<T>::outqueue(){
	T e = queue->del(0);
	front++;
	return e;

}

#endif
