# Template-Inclusion-Model

A simple example on how to use Templates with the inclusion model.

If you are like any other developer, you will want to separate your template class into a declaration file (.h) and an implementation file (.cpp). However, doing so will normally result in a compiler error.

To fix this error you need to *#include* your implementation file at the end of your header file as shown below:

<pre><code class="language-c">
#ifndef Stack_hpp
#define Stack_hpp

#include &lt;stdio.h>
#include &lt;vector>
#include &lt;stdexcept>
#include &lt;iostream>

template&lt;typename T>

class Stack{
    
    private:
    std::vector&lt;T> elements; //elements of container
    
    public:
    Stack(); //constructor
    
    void push(T const& uElement); //push element
    
    T top()const;   //return top element
};

#include "Stack.cpp"  //#Included the implementation file
#endif

</code>
</pre>

And in your implementation file (.cpp) you will need to use *Header guards*. I know, you normally use *header guards* in (.h) files, but this time you will also need to use them in your implementation file. See the snippet below:

<pre><code class="language-c">

#ifndef Stack_cpp  //Header guards 
#define Stack_cpp

#include "Stack.hpp"

template &lt;typename T>
Stack&lt;T>::Stack(){} //constructor

template &lt;typename T>
void Stack&lt;T>::push(T const& uElement){

    elements.push_back(uElement);  //push element into vector

}

template &lt;typename T>
T Stack&lt;T>::top() const{
    
    if (elements.empty()) {
        std::cout&lt;&lt;"Come on dude, I have nothing more to give";
        throw std::out_of_range("Stack&lt;>::top():empty stack");
    }
    
    return elements.back(); //return copy of last element
}

#endif

</code>
</pre>

Now you will be able to use your template in your main.c file:

<pre><code class="language-c">
#include "Stack.hpp"

int main(int argc, const char * argv[]) {

    //create Stack class of type int
    Stack&lt;int> stackOfInts;
    
    //push value 2
    stackOfInts.push(2);
    
    //get last value
    int intValue=stackOfInts.top();
    
    std::cout&lt;&lt;intValue&lt;&lt;std::endl;
    
    return 0;
}

</code>
</pre>

For more information, please see http://www.haroldserrano.com/blog/avoiding-code-duplication-with-class-templates-in-c
