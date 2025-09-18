#include "example.hpp"

#include <iostream>
using namespace std;

#define EXAMPLE_MACRO 10

Example::Example()
{
    this->x = EXAMPLE_MACRO;
}

void Example::update()
{
            
}

void Example::draw()
{
            
}

void Example::print()
{
    cout << "Example: " << x << endl;
}