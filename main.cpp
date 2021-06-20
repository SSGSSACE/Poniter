#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p=&x;
    std::cout << "Gia tri cua x la: " << x << std::endl;
    std::cout << "Dia chi cua bien x la: " << &x << std::endl;
    std::cout << "Gia tri cua p la: " << p << std::endl;
    std::cout << "Dia chi cua bien p la: " << &p << std::endl;
    std::cout << "Gia tri cua bienDia chi cua bien p la: " << &p << std::endl;
    *p=20;
    std::cout << "-------------SAU DO--------------" << std::endl;
    std::cout << "Gia tri cua x la: " << x << std::endl;
    std::cout << "Dia chi cua bien x la: " << &x << std::endl;
    std::cout << "Gia tri cua p la: " << p << std::endl;
    std::cout << "Dia chi cua bien p la: " << &p << std::endl;
    return 0;
}