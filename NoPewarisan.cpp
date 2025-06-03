#include <iostream>
using namespace std;

class baseClass final{
    public:
        virtual void perkenalan() {
            cout << "Halo saya Function dari baseClass" << endl;
        }
};

class baseClass2{
    public:
        virtual void perkenalan() {
            cout << "Halo saya Function dari baseClass" << endl;
        }
};


class derivedClass : public baseClass2{
    public:
        void perkenalan1(){
            cout << "Halo saya Function dari derivedClass" << endl;
        }
};

int main(){
    derivedClass a;
    a.perkenalan1();

    return 0;
}