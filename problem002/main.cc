// -*- mode: c++; coding: utf-8 -*-
#include <iostream>
#include <iomanip>

static void solver(long number) {
    long a1 = 1;
    long a2 = 2;
    long fib = a2;
    long sum = 0;
    while (fib < number) {
        std::cout << std::setw(7) << fib << std::endl;
        if (fib % 2 == 0) {
            sum += fib;
        }

        fib += a1;
        a1 = a2;
        a2 = fib;
    }
    std::cout << "The answer is " << sum << "." << std::endl;
}

static void usage(char* program) {
    std::cout << program << " needs argument." << std::endl;
    std::cout << program << " <number>" << std::endl;
    return;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        usage(argv[0]);
        return 1;
    }

    long number = atol(argv[1]);
    solver(number);
    return 0;
}
