#include <iostream>
#include <fstream>
#include <string>

using namespace std;


 
int main() {
    ofstream file("new_flags.svg", ios_base::out);
    if(file.is_open()) {
        int a;
        cout << "enter color code like that: 000000\n";
        cin >> a;
        int b;
        cout << "enter height like that: 100\n";
        cin >> b;
        int c;
        cout << "enter width: like that: 100\n";
        cin >> c;
        file <<  "<svg xmlns=\"http://www.w3.org/2000/svg\" height=\"" << b << "px\" width=\"" << c << "px\"><rect height=\"" << b << "\" width=\"" << c << "\" fill=\"#" << a << "\"/></svg>\n";
        file.close();
    }
    // cout << argc;


    return 0;
}
