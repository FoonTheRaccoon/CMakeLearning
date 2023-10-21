#include <iostream>
#include <ostream>
#include <vector>
#include <string>
#include "libEntry.h"
#include "FunctionHelpers.h"



int main()
{
    std::cout << "Hello from Main.cpp!\n";

    TestLibrary::TestFunction();
    FunctionHelpers::HelperOne();

    std::string input;
    std::cin >> input;

    return EXIT_SUCCESS;
}