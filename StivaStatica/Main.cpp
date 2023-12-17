#include "StivaStatica.h"
#include <iostream>
using namespace std;
int main() {
	StaticStack* stiva = nullptr;
	cout << "Dati marimea stivei." << endl;
	int n;
	cin >> n;
	stiva = new StaticStack(n);
	try {
		StaticStack stiva(5);
		stiva.push(1);
		stiva.push(2);
		stiva.push(3);
		stiva.push(4);
		stiva.push(5);

		cout << "Stiva: ";
		stiva.print();
		cout << "Elementul din varful stivei este: " << stiva.peek() << endl;
		stiva.pop();
		cout << "Stiva dupa eliminarea unui element este: ";
		stiva.print();

		for (int i = 0; i < 6; i++) {
			stiva.pop();
		}
	}
	catch (const StaticStack::StackUnderFlow&) {
		cout << "Eroare: Stiva este goala, nu se poate scoate element!" << endl;
	}
	catch (const StaticStack::StackOverFlow&) {
		cout << "Eroare: Stiva este plina, nu se poate adauga element!" << endl;
	}
	return 0;
	
}