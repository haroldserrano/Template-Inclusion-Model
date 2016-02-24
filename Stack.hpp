//
//  Stack.hpp
//  TemplateInclusionModel
//
//  Created by Harold Serrano on 2/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <vector>
#include <stdexcept>
#include <iostream>

template<typename T>

class Stack{
    
    private:
    std::vector<T> elements; //elements of container
    
    public:
    Stack(); //constructor
    
    void push(T const& uElement); //push element
    
    T top()const;   //return top element
};

#include "Stack.cpp"  //#Included the implementation file

#endif /* Stack_hpp */
