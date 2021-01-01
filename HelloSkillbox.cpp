#include <iostream>
#include <string>

int main() {
    std::string SomeText = "Skillbox";

    // консольный вывод информации о переменной SomeText
    std::cout << "Text = " << SomeText << std::endl;
    std::cout << "Lenght = " << SomeText.length() << std::endl;
    std::cout << "First character = " << SomeText[0] << std::endl;
    std::cout << "Last character = " << SomeText[SomeText.length() - 1] << std::endl; 

    return 0;
}
