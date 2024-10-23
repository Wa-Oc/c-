#include <iostream>

class Addition {
private:
    int num1, num2, num3;

public:
    // Constructor to initialize the three integers
    Addition() : num1(22), num2(30), num3(50) {}

    // Member function to return the product of the integers
    int product() {
        return num1 * num2 * num3;
    }
};

int main() {
    Addition addition;

    std::cout << "Product of 22, 30, and 50: " << addition.product() << std::endl;

    return 0;
}