#include <iostream>
#include <string>

int main() {
    // Переменная для хранения имени (изменено на GitHub)
    std::string name; 
    std::cout << "Enter your name: ";
    std::cin >> name;
    // Вывод приветствия
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}