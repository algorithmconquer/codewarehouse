//
// Created by zhuwei on 2019-07-06.
//

#ifndef ARRAYTEMPLATE_SEQLIST_H
#define ARRAYTEMPLATE_SEQLIST_H

template <class T>
class Seqlist{
private:
    int size;
    int length;
    T* data;
public:
    Seqlist(int capacity);
    ~Seqlist();
    int Length() const;
    int Capacity() const;
    bool Insert(int index, T value);
    bool Delete(int index);
    void Print();
};
template <class T>
Seqlist<T>::Seqlist(int capacity) {
        size = capacity;
        length = 0;
        data = new T[size];
}
template <class T>
Seqlist<T>::~Seqlist() {
    delete []data;
}
template <class T>
int Seqlist<T>::Length() const {
    return length;
}
template <class T>
int Seqlist<T>::Capacity() const {
    return size;
}
template <class T>
bool Seqlist<T>::Insert(int index, T value) {
    if(index < 0 || index > length){
        return false;
    }
    if(index >= size){
        return false;
    }
    for (int i = length; i > index; --i) {
        data[i] = data[i-1];
    }
    data[index] = value;
    length++;
    return true;
}
template <class T>
bool Seqlist<T>::Delete(int index) {
    if(index < 0 || index >= length){
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
template <class T>
void Seqlist<T>::Print() {
    for(int i = 0; i < length; i++){
        std::cout << data[i] << ", ";
    }
    std::cout << std::endl;
}
#endif //ARRAYTEMPLATE_SEQLIST_H
