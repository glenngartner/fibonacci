#include "../Include/Fibonacci.h"


int main() {
    Fibonacci *newFib = new Fibonacci();
    newFib->calculate(0, 1);
    newFib->printList();

    return 0;
}