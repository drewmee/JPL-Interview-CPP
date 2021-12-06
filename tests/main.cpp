#include <iostream>
#include <vector>
#include <string>

#include "../lib/robots.hpp"

using namespace std;

int main()
{
    // Iterate over vector of strings
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    // Example of calling function declared in header file
    int a = 13, b = 22;
    cout << "Sum is: "
         << sumOfTwoNumbers(a, b)
         << endl;

    // Instantiate class and print the data member
    MyClass my_class;
    cout << my_class.my_name << endl;
}