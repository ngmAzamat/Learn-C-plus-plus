#include <iostream>
#include <string>
#include <ctime>
#include <algorithm>

using namespace std;

class Knight {
public:
    int strength;
    int weight;
    int intelligence;
    int armor;
    string title;
};

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(nullptr));

    int a = rand() % 100; 
    Knight Loras; 
    Loras.strength = 0;
    Loras.weight = 0;
    Loras.intelligence = 10;
    Loras.armor = 10;
    Loras.title = "Prince  Loras";


    int Modificator_Loras = Loras.armor + Loras.strength + Loras.weight + Loras.intelligence;


    Knight Gregor; 
    Gregor.strength = 10;
    Gregor.weight = 10;
    Gregor.intelligence = 0;
    Gregor.armor = 5;
    Gregor.title = "Sir Grefor";
    int Modificator_Gregor = Gregor.armor + Gregor.strength + Gregor.weight + Gregor.intelligence;
    int base_Gregor = 50 - Modificator_Loras;
    int base_Loras = 50 - Modificator_Gregor;

    int chance_Gregor = Modificator_Gregor + base_Gregor;
    int chance_Loras = Modificator_Loras + base_Loras;
    cout << chance_Loras << endl;
    cout << chance_Gregor << endl;

    if (a <= chance_Loras && a != 1) {
        cout << "Победа Участника " << Loras.title << endl;
    } else if (a == 1) {
        cout << "Победа Участника " << Loras.title << endl;
        cout << "Смерть " << Gregor.title << endl;
    } else if (a >= chance_Loras && a != 100) {
        cout << "Победа Участника " << Gregor.title << endl;
    } else {
        cout << "Победа Участника " << Gregor.title << endl;
        cout << "Смерть " << Loras.title << endl;
    }

    return 0;
}
