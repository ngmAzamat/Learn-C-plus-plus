#include <iostream>
#include <string>


using namespace std;


int main() {
    setlocale(LC_ALL,"RU");
    const int SIZE  = 10;
    int arr[SIZE];
    for(int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
    cout << sizeof(arr) << endl;
    return 0;
}