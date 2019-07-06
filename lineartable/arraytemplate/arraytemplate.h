//
// Created by zhuwei on 2019-07-06.
//

#ifndef ARRAYTEMPLATE_ARRAYTEMPLATE_H
#define ARRAYTEMPLATE_ARRAYTEMPLATE_H

class Vector{
private:
    int size;
    int length;
    int* data;
public:
    Vector(int capacity);
    ~Vector();
    int Length();
    int Capacity();
    bool Insert(int index, int value);
    bool Delete(int index);
    void Print();
};

Vector::Vector(int capacity) {
    std::cout << "===Start construct===" << std::endl;
    size = capacity;
    length = 0;
    data = new int[size];
    std::cout << "===End construct===" << std::endl;
}
Vector::~Vector() {
    std::cout << "===Start deconstruct===" << std::endl;
    delete[] data;
    std::cout << "===End deconstruct===" << std::endl;
}
int Vector::Length() {
    return length;
}
int Vector::Capacity() {
    return size;
}
bool Vector::Insert(int index, int value) {
    std::cout << "===Start insert===" << std::endl;
    if(index < 0 || index > length){
        std::cout << "===insert error===" << std::endl;
        return false;
    }
    if(index >= size){
        std::cout << "===inser error===" << std::endl;
        return false;
    }
    for(int i=length; i>index; i--){
        data[i] = data[i-1];
    }
    data[index] = value;
    length++;
    std::cout << "===End insert===" << std::endl;
    return true;
}
bool Vector::Delete(int index) {
    if(index < 0  || index >= length){
        return false;
    }
    if(index >= size){
        return false;
    }
    for (int i = index; i < length-1; ++i) {
        data[i] = data[i+1];
    }
    length--;
    return true;
}
void Vector::Print() {
    std::cout << "===Start Print===" << std::endl;
    for (int i = 0; i < length; ++i) {
        std::cout << data[i] << ", ";
    }
    std::cout << std::endl;
    std::cout << "===End Print===" << std::endl;
}
#endif //ARRAYTEMPLATE_ARRAYTEMPLATE_H
