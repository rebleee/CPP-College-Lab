#include <iostream>
class StaticDemo {
public:
static int var;
};
int StaticDemo::var = 0; // Initialization
int main() {
std::cout << "Static member data = " << StaticDemo::var++ << std::endl; // 0
StaticDemo::var = 10;
std::cout << "Static member data = " << StaticDemo::var << std::endl;
}