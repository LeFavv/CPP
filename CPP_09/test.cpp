#include <string>
#include <iostream>

int main(void)
{
    std::string test = "120";
    std::string test2 = "121";

    if (test > test2)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    return (0);
}