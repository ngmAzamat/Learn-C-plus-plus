#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int counter = 0; // Инициализация счетчика правильных ответов

class Quiz {
public:
    string quest, option1, option2, option3, option4;
    int answer;

    Quiz(const string& q, const string& o1, const string& o2, const string& o3, const string& o4, int ans)
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
    vector<Quiz> questions; // Вектор для хранения вопросов
    string path = "quiz.txt";
    ifstream file(path);

    if (!file.is_open()) {
        cout << "Error: не удалось открыть файл \n";
        return 1;
    }

    string quest, option1, option2, option3, option4;
    int answer;

    // Чтение данных из файла
    while (getline(file, quest) && getline(file, option1) && getline(file, option2) && getline(file, option3) && getline(file, option4) && file >> answer) {
        file.ignore(); // Пропуск новой строки после ответа
        questions.emplace_back(quest, option1, option2, option3, option4, answer); 
    }

    file.close();

    // Задаем вопросы пользователю
    for (auto& question : questions) {
        question.questions();
    }

    cout << "ваш итоговый счет: " << counter << endl;
    return 0;
}
