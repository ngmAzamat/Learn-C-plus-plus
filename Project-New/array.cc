#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL,"RU");
    int size = 10;
    int *array = new int[size];
    for(int i = 0; i < size; i++) {
        cout << endl;
        cout << endl;
    }
    delete *array;
    return 0;
}