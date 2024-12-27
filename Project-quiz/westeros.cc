#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int counter = 0; // Инициализация счетчика правильных ответов

class War {
public:
    const char* quest;
    const char* option1;
    const char* option2;
    const char* option3;
    const char* option4;
    int answer;

    War(const char* q, const char* o1, const char* o2, const char* o3, const char* o4, int ans)
        : quest(q), option1(o1), option2(o2), option3(o3), option4(o4), answer(ans) {}

    void questions() {    
        int HumanAnswer;
        cout << quest << endl;
        cout << "1. " << option1 << endl;
        cout << "2. " << option2 << endl;
        cout << "3. " << option3 << endl;
        cout << "4. " << option4 << endl;
        cin >> HumanAnswer;

        if (HumanAnswer == answer) {
            cout << "вы правы\n";
            counter++;
        } else {
            cout << "вы не правы\n";
        }
    }
};

int main() {
    // Создание объектов вопросов
    War a("Какой город является столицей Вестероса?", 
          "1. Королевская Гавань", "2. Винтерфелл", "3. Риверран", "4. Браавос", 1);
    War b("Кто является матерью драконов?", 
          "1. Серсея", "2. Арья", "3. Дейенерис", "4. Санса", 3);
    War c("Как называется оружие, которое может убить Белых Ходоков?", 
          "1. Сталь Валарийская", "2. Обычный меч", "3. Лук и стрелы", "4. Яд", 1);
    War d("Какой род находится на севере?", 
          "1. Ланнистеры", "2. Таргариены", "3. Старки", "4. Грейджои", 3);
    War e("Кто убил Неда Старка?", 
          "1. Тирион", "2. Серсея", "3. Джейме", "4. Джоффри", 4);

    // Задаем вопросы
    a.questions();
    b.questions();
    c.questions();
    d.questions();
    e.questions();

    // Вывод итогового счета
    cout << "ваш итоговый счет: " << counter << endl;

    return 0;
}