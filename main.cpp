//
//  main.cpp
//  TemplateInclusionModel
//
//  Created by Harold Serrano on 2/20/16.
//  Copyright © 2016 haroldserrano.com. All rights reserved.
//

#include <iostream>
#include "Stack.hpp"

int main(int argc, const char * argv[]) {

    //create Stack class of type int
    Stack<int> stackOfInts;
    
    //push value 2
    stackOfInts.push(2);
    
    //get last value
    int intValue=stackOfInts.top();
    
    std::cout<<intValue<<std::endl;
    
    return 0;
}
