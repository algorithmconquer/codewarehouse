#include <iostream>
#include "arraytemplate.h"
#include "SeqList.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    //
//    Vector v(10);
//    std::cout << "array capacitiy=" << v.Capacity() << std::endl;
//    std::cout << "array current length=" << v.Length() << std::endl;
//    v.Insert(0, 2);
//    v.Insert(1, 3);
//    v.Insert(1, 7);
//    v.Insert(3, 1);
//    std::cout << "array capacitiy=" << v.Capacity() << std::endl;
//    std::cout << "array current length=" << v.Length() << std::endl;
//    v.Print();
//    v.Delete(2); // v.Delete(0);v.Delete(2);
//    v.Print();

    // Test Seqlist
    Seqlist<std::string> seqlist(10);
    std::cout << "Initialize length=" << seqlist.Length() << std::endl;
    std::cout << "Initialize Capacity=" << seqlist.Capacity() << std::endl;
    seqlist.Insert(0, "zhang san");
    seqlist.Insert(1, "wang wu");
    seqlist.Insert(1,"li si");
    seqlist.Insert(3, "han mei");
    seqlist.Print();
    seqlist.Delete(2); //seqlist.Delete(3);
    seqlist.Print();
    return 0;
}