#include <iostream>


using namespace std;

void printf(string text) {
    cout << text << endl;
}


void printf(int text) {
    cout << text << endl;
}
// перегрузка - функции с одним названием однако не дают ошибку потому что одно принимает string а другой int

void add(int a, int b) {
    int x = a + b;
    printf(x);
}


int main() {
    setlocale(LC_ALL,"RU");
    add(1, 2);
    printf("Hello world");
    return 0;
}