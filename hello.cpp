#include "hello.h"
#include <iostream>

void Hello::SayHelloWorld()
{
    std::cout << "Hello, " << Name << "!" << std::endl;
    std::cout << "Your name is " << Name.length() << " characters long!" << std::endl;
}