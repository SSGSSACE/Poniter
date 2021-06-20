#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p=&x;
    std::cout << "Gia tri cua x la: " << x << std::endl;
    std::cout << "Dia chi cua bien x la: " << &x << std::endl;
    return 0;
}