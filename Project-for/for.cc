#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL,"RU");
    for(int i = 0; i < 10; i++) {
        cout << i << "\n";
    }
    int a = 0;
    while(a < 10) {
        cout << a << "\n";
        a++;
    }
    return 0;
}
