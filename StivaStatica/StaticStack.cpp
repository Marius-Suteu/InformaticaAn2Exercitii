#include "StivaStatica.h"
#include <iostream>
using namespace std;

	StaticStack::StaticStack(int size) {
		this->MaxSize = size;
		this->top = 0;
		this->data = new int[size];
	}
	StaticStack::StaticStack(const StaticStack& stiva) {
		MaxSize = stiva.MaxSize;
		top = stiva.top;
		data = new int[MaxSize];
		for (int i = 0; i < top; i++) {
			data[i] = stiva.data[i];
		}
	}
	StaticStack::~StaticStack() {
		 delete []data;
		 this->top = 0;
		 this->MaxSize = 0;
	 }
	bool StaticStack::isFull() {
		 if (top >= MaxSize - 1)
			 return true;
		 return false;
	 }
	bool StaticStack::isEmpty() {
		 if (top == 0)
			 return true;
		 return false;
	 }
	void StaticStack:: push(int element) {
		 if (isFull() == true)
			 cout << "Stiva este plina." << endl;
		 data[top] = element;
		 top++;
	 }
	int StaticStack:: pop() {
		 if (isEmpty())
			 cout << "Stiva este goala." << endl;
		 top--;
		 return data[top];
	 }
	int StaticStack::peek() {
		 if (isEmpty())
			 cout << "Stiva este goala." << endl;
		 return data[top - 1];
	 }
	void StaticStack:: print() {
		 for (int i = 0; i < top; i++)
			 cout << data[i]<<" ";
		 cout << endl;
	 }

