#include <iostream>
#include <ostream>
#include <string>
#include "libEntry.h"
#include "FunctionHelpers.h"



int main()
{
    std::cout << "Hello from Main.cpp!\n";

    TestLibrary::TestFunction();
    FunctionHelpers::HelperOne();

    glm::vec3 var1(1,2,3);
    glm::vec3 var2(4,5,6);
    glm::vec3 var3 = var1 + var2;
    std::cout << "GLM test Main: " << var3.x << "\n";

    //std::string input;
    //std::cin >> input;

    return EXIT_SUCCESS;
}