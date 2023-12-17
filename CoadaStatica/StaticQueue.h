#pragma once
#ifndef Coada_Statica_H
#define Coada_Statica_H

using namespace std;

class QueueAbstract {
public:
	virtual void enQueue(int) = 0;
	virtual int deQueue() = 0;
	virtual bool isEmpty() = 0;
	virtual bool isFull() = 0;
	virtual void print() = 0;

	class QueueUnderFlow {};
	class QueueOverFlow {};

};
class StaticQueue: public QueueAbstract {
private:
	int* data;
	int maxSize;
	int end;
	
public:
	StaticQueue(int size = 100);
	StaticQueue(const StaticQueue&);
	~StaticQueue();

	virtual void enQueue(int) override;
	virtual int deQueue() override;
	virtual bool isEmpty() override;
	virtual bool isFull() override;
	virtual void print() override;

	class QueueOverFlow {};
	class QueueUnderFlow {};
};
#endif Coada_Statica_H
