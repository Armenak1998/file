#include<iostream>
#include<string>

int main() {
    std::cout << "what is your name "<<std::flush;
    std::string name;
    std::cin >> name;
    std::cout << "what is your surname "<<std::flush;
    std::string surname;
    std::cin >> surname;
    std::cout << "Hello " << name << " " << surname << std::endl;
    return 0;
}
