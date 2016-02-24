//
//  Stack.cpp
//  TemplateInclusionModel
//
//  Created by Harold Serrano on 2/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#ifndef Stack_cpp  //Header guards
#define Stack_cpp

#include "Stack.hpp"

template <typename T>
Stack<T>::Stack(){} //constructor

template <typename T>
void Stack<T>::push(T const& uElement){

    elements.push_back(uElement);  //push element into vector

}

template <typename T>
T Stack<T>::top() const{
    
    if (elements.empty()) {
        std::cout<<"Come on dude, I have nothing more to give";
        throw std::out_of_range("Stack<>::top():empty stack");
    }
    
    return elements.back(); //return copy of last element
}

#endif