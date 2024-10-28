#include <iostream>
#include <string>


using namespace std;


int main() {
    setlocale(LC_ALL,"RU");
    int a = 0;
    int &b = a;
    // b не равен значению a b - ссылка на память a
    cout << &a << " - " << a << endl;
    cout << &b << " - " << b << endl;
    // провиреям это - есле значение одинакование то тогда да
    int val = 0;
    int* ptrval = &a;

    *ptrval = 20;
    *ptrval = nullptr;
    // b не равен значению a b - ссылка на память a
    cout << &val << " - " << a << endl;
    cout << &ptrval << " - " << b << endl;
    // провиреям это - есле значение одинакование то тогда да
    return 0;
}