#include <hello_world_cpp/library.hpp>
#include <hello_world_cpp/version.hpp>

#include <iostream>

int main()
{
    std::cout << "Hello World app started." << std::endl;
    const hello_world::HelloWorld api_object {};
    api_object.print_hello();
    std::cout << "Hello World lib GIT revision: " << hello_world::Version::get_git_hash() << std::endl;

    return 0;
}
