#include <iostream>
int generateID()
{
static int s_id{ 0 };
return ++s_id;
}

int main()
{
std::cout << generateID() << '\n'; // Prints 1
std::cout << generateID() << '\n'; // Prints 2
std::cout << generateID() << '\n'; // Prints 3
}