#include <iostream>

// выводим сообщение и значение в консоль
void printHello(int value) {
    std::cout << "Hello world " << value << '\n';
}

int main() {
    int x = 100;

    printHello(x);

    return 0;
}
