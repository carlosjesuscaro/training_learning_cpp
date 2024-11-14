#include <iostream>
#include <string>

// Standard hello world
void hello_world() {
    std::cout << "Hello, World!" << std::endl;
    std::cout <<std::endl << std::endl;
}

void name_on_screen() {
    std::string name;
    std::cout << "What is your name? s" << std::flush;
    std::cin >> name;
    std::cout << "Nice to meet you " << name << std::endl;
}


int main() {
    hello_world();
    name_on_screen();
    return 0;
}
