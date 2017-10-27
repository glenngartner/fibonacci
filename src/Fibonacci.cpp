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
    this->list->push_back(start);
    if (this->iterations <= this->maxIterations) {
        this->calculate(next, start + next);
    }
    this->iterations = 0;
}

void Fibonacci::printList() {
    printf("\n\t==============================\n");
    printf("\tPrinting %d fibonacci numbers \n", this->maxIterations);
    printf("\t==============================\n\n");
    for (int i = 0; i < this->list->size(); i++) {
        int num = (*this->list)[i];
        printf("\t\t%d\n", num);
    }
}

void Fibonacci::clearList() {
    (*this->list) = {};
}

