//
// Created by glenn on 10/23/2017.
//

#ifndef FIBONACCI_FIBONACCI_H
#define FIBONACCI_FIBONACCI_H


#include <vector>
#include <memory>

class Fibonacci {
public:
    Fibonacci();
    std::shared_ptr<std::vector<int>> list;
    int iterations = 0;
    int maxIterations = 10;
    void calculate(int start, int next);
    void printList();


};


#endif //FIBONACCI_FIBONACCI_H
