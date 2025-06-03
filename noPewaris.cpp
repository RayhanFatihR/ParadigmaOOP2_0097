#include <iostream>
using namespace std;

class baseClass {
    public:
        virtual void perkenalan() final{
            cout << "Halo saya Function dari baseClass" << endl;
        }
};

class derivedClass : public baseClass{
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