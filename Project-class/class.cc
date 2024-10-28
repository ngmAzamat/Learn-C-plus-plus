#include <iostream>
#include <string>


using namespace std;


class Buiding {
public:
    int year;
    string type;
     Get_info() {
        cout << "Type:" << type << ". Year:" << year  << endl;
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