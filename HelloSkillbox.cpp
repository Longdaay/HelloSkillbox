#include <iostream>
#include <vector>

class Stack {
public:
    int pop() {
        int tempValue;
        tempValue = arr[arr.size() - 1];
        arr.pop_back();
        return tempValue;
    }
    void push( int pushValue) {
        arr.insert(arr.begin(), pushValue);
    }

    void printStack() {
        for (int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<int> arr;
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

    return 0;
}
