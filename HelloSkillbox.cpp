#include <iostream>

// выводим значения которые задаются с помощью printParametr
void printValuesByParametr(bool printParameter, int size) {
    std::cout << "Values 0 to " << size << ":\n";
    for (int i = printParameter; i <= size; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}


int main() {
    int N = 10;

    std::cout << "Even values 0 to " << N << ":\n";
    for (int i = 0; i <= N; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    printValuesByParametr(true, N); // true - odd, false - even values


    return 0;
}
