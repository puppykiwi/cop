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
    
    if ((type_length) == "int"){
        if size > 0{
            return size;
        }
        else {
            std::cout << "Your length should be greater than 0"
        }
    }
}