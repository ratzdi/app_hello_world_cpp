#include <hello_world_cpp/library.hpp>

#include <iostream>

int main() {
    std::cout << "Hello World app started" << std::endl;
    const td::HelloWorld api_object{};
    api_object.print_hello();

    return 0;
}
