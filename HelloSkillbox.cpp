#include <iostream>

class Stack {
public:
    int pop() {
        int tempValue;
        int* newArray = new int[size - 1];
        tempValue = arr[0];
        
        for (int i = 1; i < size; i++) {
            newArray[i - 1] = arr[i];
        }

        size--;
        delete[] arr;
        arr = newArray;
        return tempValue;
    }
    void push(int pushValue) {
        int* newArray = new int[size + 1];

        newArray[0] = pushValue;
        for (int i = 0; i < size; i++)
        {
            newArray[i + 1] = arr[i];
        }

        size++;
        delete[] arr;
        arr = newArray;
    }

    void printStack() {
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    int* arr;
    int size = 0;
};

int main() {
    Stack stack;
    
    for (int i = 0; i < 10; i++) {
        std::cout << "Push in stack value: " << i << std::endl;
        stack.push(i);
    }
    std::cout << "Our stack\n";
    stack.printStack();

    std::cout << "pop value from stack\n";
    std::cout << "Value is " << stack.pop() << std::endl;
    std::cout << "Our stack\n";
    stack.printStack();

  
    return 0;
}
