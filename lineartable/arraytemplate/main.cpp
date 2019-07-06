#include <iostream>
#include "arraytemplate.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    //
    Vector v(10);
    std::cout << "array capacitiy=" << v.Capacity() << std::endl;
    std::cout << "array current length=" << v.Length() << std::endl;
    v.Insert(0, 2);
    v.Insert(1, 3);
    v.Insert(1, 7);
    v.Insert(3, 1);
    std::cout << "array capacitiy=" << v.Capacity() << std::endl;
    std::cout << "array current length=" << v.Length() << std::endl;
    v.Print();
    v.Delete(2); // v.Delete(0);v.Delete(2);
    v.Print();
    return 0;
}