#include "../Include/Fibonacci.h"


int main() {
    std::shared_ptr<Fibonacci> newFib = std::make_shared<Fibonacci>();
    newFib->maxIterations = 46;
    newFib->calculate(0, 1);
    newFib->printList();
//    newFib->clearList(); // will clear the list, if you want to run again
//    newFib->calculate(0, 1); // will re-populate the list with new values

    return 0;
}