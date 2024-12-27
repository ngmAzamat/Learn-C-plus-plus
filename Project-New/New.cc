#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL,"RU");
    int *pa = new int; 
    *pa = 10;
    cout << *pa << endl;
    delete pa; // надо чисть память после new
    return 0;
}