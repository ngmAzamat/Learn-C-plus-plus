#include <iostream>

int main() {
    bool x = true;
    setlocale(LC_ALL,"RU");
    int a;
    std::cout << "Введите переменную Переменную a: ";
    std::cin >> a;
    if (a >/*>=*/ 3 || x) {
            std::cout << "Переменная a: более трех\n";

    } else if(a == 3 && x) {
        std::cout << "Переменная a: три\n";

    } else {
        std::cout << "Переменная a: менее трех\n";
    }


    return 0;
}