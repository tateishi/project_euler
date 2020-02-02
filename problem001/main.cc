// -*- mode: c++; coding: utf-8 -*-
#include <iostream>
#include <iomanip>

static bool divisable(long n, long d) {
    return n % d == 0;
}

static void solver(long number) {
    long sum = 0;
    for (int n = 1; n < number; ++n) {
        std::cout << std::setw(5) << n;
        if (divisable(n, 3) || divisable(n, 5)) {
            std::cout << " *";
            sum += n;
        }
        std::cout << std::endl;
    }

    std::cout << "The answer is " << sum << std::endl;
    return;
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
