#include <iostream>
#include "StaticQueue.h"

using namespace std;
int main()
{
	StaticQueue* q = nullptr;
	cout << "Dati marimea cozii." << endl;
	int n;
	cin >> n;
	q = new StaticQueue(n);

	try
	{
		q->enQueue(1);
		q->enQueue(2);
		q->enQueue(3);
		q->enQueue(4);
		q->enQueue(5);

		cout << "Coada curenta: ";
		q->print();
		cout << "Primul element introdus este: " << q->deQueue() << endl;
		cout << "Coada ramasa dupa extragerea primului element: ";
		q->print();
		while(q->isEmpty() != true) {
			cout << q->deQueue() << " ";
		}
	}
	catch (const StaticQueue::QueueUnderFlow&) {
		cout << "Eroare coada este goala nu se pot scoate elemente." << endl;
	}
	catch (const StaticQueue::QueueOverFlow&) {
		cout << "Eroare coada este plina nu se pot adauga elemnte." << endl;
	}

	return 0;
}