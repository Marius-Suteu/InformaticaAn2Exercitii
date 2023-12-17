#include "StaticQueue.h";
#include <iostream>
using namespace std;

StaticQueue::StaticQueue(int size) {
	this->data = new int[size];
	this->maxSize = size;
	this->end = 0;
	}
	StaticQueue::StaticQueue(const StaticQueue& coada) {
		data = new int[maxSize];
		maxSize = coada.maxSize;
		end = coada.end;
		for (int i = 0; i < coada.end; i++) {
			data[i] = coada.data[i];
		}
	}
	StaticQueue:: ~StaticQueue() {
		delete[] data;
	}
	bool StaticQueue::isFull() {
		if (maxSize == end -1)
		return true;
		return false;
	}
	bool StaticQueue::isEmpty() {
		if (end == 0)
			return true;
		return false;
	}
	void StaticQueue::enQueue(int element) {
		if (isFull() == true) {
			cout << "Coada este plina, nu se mai pot adauga elemente." << endl;
		}
		data[end] = element;
		end++;
	}
	int StaticQueue::deQueue() {
		if (isEmpty() == true) {
			cout << "Coada este goala, nu exista element de sters." << endl;
			return -1;
		}
		int aux = data[0];
		for (int i = 0; i < end-1; i++)
		{
			data[i] = data[i + 1];
		}
		end--;
		return aux;
	}
	void StaticQueue::print() {
		if (isEmpty() == true) {
			cout << "Coada este goala.\n";
			return;
		}
		
		for (int i = 0; i < end; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
	}
