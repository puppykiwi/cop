#include <iostream>
#include <typeinfo>
#include "passwd.h"

int main(){
     
    int length = get_length();
}

int get_length(){

    int size;
    std::cout << "What is the desired length of your program: ";
    std::cin >> size;

    const char * type_length = typeid(size).name();
    std::cout << type_length << std::endl ;
    
    

    if (size > 0){
        std::cout << "test"; //debug
        return size;
    }
    else {
        std::cout << "Your length should be greater than 0";
    }
    
    return 0;
}