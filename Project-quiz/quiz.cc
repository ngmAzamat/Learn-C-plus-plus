#include <iostream>

using namespace std;

int counter = 0; // Инициализация счетчика правильных ответов
class war {
public:
const char* quest; 
const char* option1; 
const char* option2;
const char* option3; 
const char* option4;
int answer;
    war(const char* q, const char* o1, const char* o2, const char* o3, const char* o4, int ans)
        : quest(q), option1(o1), option2(o2), option3(o3), option4(o4), answer(ans) {}void questions() {    
    int HumanAnswer;
    cout << quest << endl;
    cout << option1 << endl;
    cout << option2 << endl;
    cout << option3 << endl;
    cout << option4 << endl;
    cin >> HumanAnswer;
    if (HumanAnswer == answer) {
        cout << "вы правы\n";
        counter++;
    } else {
        cout << "вы не правы\n";
    }
    };
};


int main() {
    war a("кто победил в битве при креси?", "1. Франция", "2. Англия", "3. Кастилия", "4. Шотландия",2);
    war b("сколько лет длилась столетняя война?","1. 116","2. 100","3. 106","4. 94",1);
    war c("в каком году была битва при Азенкуре?","1. 1346","2. 1451","3. 1356","4. 1415",4);
    war d("между кем и кем был мир в Аррасе?","1. между Бургундией и Францией","2. между Англей и Францией","3. между Бретанью и Англией","4. Шотландией и Англией",1);
    war e("во время осады какого города Жанну д'арк пленили?","1. Орлеан","2. Руан","3. Компьен","4. Париж",3);
    a.questions();
    b.questions();
    c.questions();
    d.questions();
    cout << "ваш итоговый счет: " << counter << endl;
    return 0;
}