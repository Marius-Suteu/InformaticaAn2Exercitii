#include "LSIcoadaDinamica.h"

int main() {
    Coada queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    queue.print(); 

    queue.dequeue();
    queue.print(); 

    return 0;
}