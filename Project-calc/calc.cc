#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL,"RU");
    float num1, num2;

    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    char math;
    cout << "Enter math symvol: ";
    cin >> math;
    float res;
    if(math == '+') {
        res = num1 + num2;
    }
    else if(math == '-') {
        res = num1 - num2;
    }
    else if(math == '*') {
        res = num1 * num2;
    }
    else if(math == '/') {
        res = num1 / num2;
    }
    cout << res << "\n";
    return 0;
}
