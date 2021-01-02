#include <iostream>
#define CURRENT_DATE 2

int main() {
    const int N = 5;
    int arr[N][N];
    int sum = 0;
    

    // заполнение матрицы
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = i + j;
        }
    }

    // вывод матрицы
    std::cout << "Matrix: \n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << arr[i][j] << '\t';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // суммирование строки, индекс которой определяется остатком от деления текущей даты календаря
    for (int i = 0; i < N; i++) {
        sum += arr[CURRENT_DATE % N][i];
    }
    std::cout << "Result sum row " << CURRENT_DATE % N << " = " << sum << std::endl;

    return 0;
}
