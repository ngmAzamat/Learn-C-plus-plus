#include <iostream>
#include <string>


using namespace std;


class PC {
private: 
    int diagonal;
    string os;
public:
        void PC(int diagonal, string os) {
            this->diagonal = diagonal;
            this->diagonal = diagonal;

        
    }
};

class Laptop: public PC {
    private: 
        float weight;
    public:     
         PC(int diagonal, string os) {
            this->weight = weight;

        
    }
};

int main() {
    setlocale(LC_ALL,"RU");
    Laptop Mac(16, "Mac", 1.5f);



    return 0;
}