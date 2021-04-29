#include <iostream>

int main()
{
    std::cout << "What is your name?" << std::endl;
    std::string name;

    std::cin >> name;

    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "Your name is " << name.length() << " characters long!" << std::endl;
    return 0;
}