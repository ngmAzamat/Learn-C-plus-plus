#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class svg {
    public: 
        svg(ofstream&file, int argc, char* argv[]) {
            if(argc == 4) {
                    char* height = argv[1];
                    cout << height << endl;
                    char* width = argv[2];
                    cout << width << endl;

                    char* color = argv[3];
                    cout << color << endl;

                    file <<  "<svg xmlns=\"http://www.w3.org/2000/svg\" height=\"" << height << "px\" width=\"" << width << "px\"><rect height=\"" << height << "\" width=\"" << width << "\" fill=\"#" << color << "\"/></svg>\n";
            } else {
                cout << "Error 2: неправильное числе Аргументов - нужно цвет высоту и ширину\n";
            }

        }
        ~svg() {
            // if(file.is_open()) {
            //     file.close();
            // }
        }
};


int main(int argc, char* argv[]) {
    ofstream file("new_flags.svg", ios_base::out);
    if(file.is_open()) {
        svg obj(file, argc, argv);
    } else {
        cout << "Error 1: не удалось открыть файл \n";
    }




    return 0;
}
