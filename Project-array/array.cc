#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL,"RU");
    int nums[4];
    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;
    nums[3] = 4;
    nums[3]++;
    cout << nums[0];
    // int num2[5] = {1, 2, 3, 4, 5};
    float numbers[5];
    for(int i = 0; i < 5; i++) {
        cout << "Enter number " << i << ":";
        cin >> numbers[i];
    }
    for(int i = 0; i < 5; i++) {
        cout << "El:" << numbers[i] << endl;
    }
    float summa;
    float min = numbers[0];

    for(int i = 0; i < 5; i++) {
        summa += numbers[i];
        if(numbers[i] < min) {
            min = numbers[i];
            cout << "min: " << min;
        }
    }
    cout << "summa: " << summa;
    cout << "min: " << min;

    for(int i = 0; i < 4; i++) {
        cout << nums[i] << endl;
    }

    return 0;
}
