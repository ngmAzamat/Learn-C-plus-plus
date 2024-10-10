#include <iostream>

int main() {
    bool isHasCar = true; 
    // short как int только от -32 000  до +32 000
    short s = 32;.
    // unsigned short как ishort только от 0  до +64 000
    // unsigned short a = 50000;
    // s--;
    // int num_1 = 1;
    int x = 1;

    x++;
    x--;
    // unsigned int как int только от 0  до  млн 
    unsigned int a1 = 1;
    long a2 = 1;
    unsigned long a3 = 1;
    long long a4 = 1;
    unsigned long long a5 = 1;
    float a6 = 3.1415f;
    double float a7 = 3.3456789234567890;

    char cymvol = '%$';


    setlocale(LC_ALL,"RU");
    int num = -45;
    std::cout << "all is okey\n" << std::endl;
    num = 3;
    std::cout << "Привет\n" << std::endl;
    std::cout << "Переменная: " << num << std::endl;
    int a;
    std::cout << "Введите переменную Переменную a: ";
    std::cin >> a;
    std::cout << "A:" << a << "\n";


    return 0;
}