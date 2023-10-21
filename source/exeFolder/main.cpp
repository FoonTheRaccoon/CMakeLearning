#include <iostream>
#include <ostream>
#include <vector>
#include <string>
#include "..\libFolder\libEntry.h"
#include "FunctionHelpers.h"


using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    Test::TestFunction();
    FunctionHelpers::HelperOne();

    int UnusedVar = 69;

    std::string input;
    cin >> input;

    return EXIT_SUCCESS;
}