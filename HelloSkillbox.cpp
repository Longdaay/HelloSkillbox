#include <iostream>
#include "Helpers.h"

// выводим значение в консоль
void PrintResultValue(int value) {
    std::cout << "Result = " << value << '\n';
}

int main() {
    int x = 3;
    int y = 5;

    // считаем квадрат суммы значений и выводим в консоль
    PrintResultValue(GetSummSquareValues(x, y));

    return 0;
}
