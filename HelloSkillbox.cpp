#include <iostream>
#include <math.h>

class Auto {
public:
    Auto() : ModelAuto("None"), costAuto(0) {}

    Auto(std::string ModelAuto, int costAuto) {
        this->ModelAuto = ModelAuto;
        this->costAuto = costAuto;
    }

    void printInfoAboutAuto() {
        std::cout << "Model : " << ModelAuto << std::endl;
        std::cout << "Cost auto: " << costAuto << std::endl;
    }

    std::string getModelAuto() { return ModelAuto; }
    int getCostAuto() { return costAuto; }

private:
    std::string ModelAuto;
    int costAuto;
};

class Vector {
public:
    Vector() : x(0), y(0), z(0), moduleVector(0)
    {}

    Vector(double x, double y, double z) {
        this->x = x;
        this->y = y;
        this->z = z;
        moduleVector = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    }

    void PrintVector() {
        std::cout << '\n' << x << " " << y << " " << z << std::endl;
    }

    double GetModuleVector() { return moduleVector; }

private:
    double x;
    double y;
    double z;
    double moduleVector;
};


int main() {
    Auto car("BMW", 10000);
    Vector vec(1,2,3);

    std::cout << "Ex1 - show info about car\n";
    car.printInfoAboutAuto();

    std::cout << std::endl;
    std::cout << "Ex2 - get module vector\n";
    std::cout << "Result module vector: " << vec.GetModuleVector() << std::endl;

    return 0;
}
