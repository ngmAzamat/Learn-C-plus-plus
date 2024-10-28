#include <iostream>
#include <string>


using namespace std;


class Arrays {
private: 
    int len;
    int* arr;
public:
    Arrays(int len, int* arr) {
        this->len = len
        for(int i; i < len; i++) {
            *(arr + i) = *(a + i);
        }
    }
    void get() {
                for(int i; i < len; i++) {
            *(arr + i) = *(a + i);
        }
    }
};

int main() {
    setlocale(LC_ALL,"RU");
    Buiding shool;
    shool.type = "Школа";
    shool.year = 15;
    shool.Get_info();


    return 0;
}