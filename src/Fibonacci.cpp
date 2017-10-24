//
// Created by glenn on 10/23/2017.
//

#include <iostream>
#include "../Include/Fibonacci.h"

Fibonacci::Fibonacci() {
    this->iterations = 0;
    this->list = std::make_shared<std::vector<int>>();
}

void Fibonacci::calculate(int start, int next) {
    this->iterations++;
    if (this->list->size() != 0) this->list->pop_back();
    this->list->push_back(start);
    this->list->push_back(next);
    if (this->iterations <= 10) this->calculate(next, start + next);
    this->iterations = 0;
}

void Fibonacci::printList() {
    printf("printing list: ");
    for (int i = 0; i < this->list->size(); i++){
        printf("%d", this->list.get()[i]);
    }
}

