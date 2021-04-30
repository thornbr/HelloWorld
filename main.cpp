#include "hello.h"
#include <iostream>

int main()
{
    Hello hello;

    std::cout << "What is your name?" << std::endl;
    std::string name;

    std::cin >> name;

    hello.Name = name;

    hello.SayHelloWorld();
    return 0;
}