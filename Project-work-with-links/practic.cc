#include <iostream>
#include <string>


using namespace std;

void minimal(int* arr, int len) {
    int min = *arr;
    for(int i = 0; i < len; i++) {
        if(min > *(arr + i)) {
            min = *(arr + i);
        }
    }
    cout << min << endl;
}

int main() {
    setlocale(LC_ALL,"RU");
    int arr[] = { 5, 7, 3, -2, 5 };
    minimal(arr, 5);
    return 0;
}