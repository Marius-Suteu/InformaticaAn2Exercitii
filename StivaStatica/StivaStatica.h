#pragma once
#ifndef STIVA_STATICA_H
#define STIVA_STATICA_H
#include <exception>
using namespace std;

class StackAbstract {
public:
	//Metode abstracte pentru stiva abstracta.
	virtual void push(int) = 0;
	virtual int pop() = 0;
	virtual int peek() = 0;
	virtual bool isEmpty() = 0;
	virtual bool isFull() = 0;
	virtual void print() = 0;
	//Exceptii.
	class StackOverfllw{};
	class StackUnderFlow{};
};

class StaticStack: public StackAbstract {
private:
	int* data;
	int MaxSize;
	int top;
public:
	StaticStack(int MaxSize = 100);
	StaticStack(const StaticStack&);
	~StaticStack();
	//Metode abstracte pentru stiva abstracta.
	virtual void push(int) override;
	virtual int pop() override;
	virtual int peek() override;
	virtual bool isEmpty() override;
	virtual bool isFull() override;
	virtual void print() override;
	//Exceptii.
	class StackOverFlow {};
	class StackUnderFlow {};
};
#endif
