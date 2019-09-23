#include<iostream>
#include<string>

int main() {
    std::cout << "whot is your name "<<std::flush;
    std::string name;
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;
    return 0;
}
