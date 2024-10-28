#include <iostream>
#include <string>
using namespace std;



int main() {
    setlocale(LC_ALL,"RU");
    char word[] = {"a", "s"};
    for(int i = 0; i < 3;i++) {
        cout << word[i];
    }
    string words = "аиб";
    return 0;
}