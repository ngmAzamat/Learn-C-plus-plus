#include <iostream>
#include <termios.h>
#include <unistd.h>

void getPassword(std::string &password) {
    struct termios oldt, newt;
    int ch;

    // Получаем текущие параметры терминала
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;

    // Отключаем отображение вводимых символов
    newt.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    // Считываем пароль
    std::getline(std::cin, password);

    // Восстанавливаем старые параметры терминала
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}

int main() {
    std::string password;

    std::cout << "Введите пароль: ";
    getPassword(password);

    std::cout << "\nВведенный пароль: " << password << std::endl;

    return 0;
}
