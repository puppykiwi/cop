#include <iostream>
#include <typeinfo>
#include "passwd.h"

template <typename T>
void var_type (T var) {
    std::cout << typeid(var).name() << std::endl;
}

int main(){
     
    int length = get_length();
}

int get_length(){

    int size;
    std::cout << "What is the desired length of your program: ";
    std::cin >> size;

    // const char * type_length = typeid(size).name();
    // std::cout << type_length << std::endl ;
    // var_type(size);
    
    

    if (size > 0){
        // std::cout << "test"; //debug
        return size;
    }
    else {
        std::cout << "Your value should be an integer and larger than 0";
        return get_length();
    }
    
    return 0;
}