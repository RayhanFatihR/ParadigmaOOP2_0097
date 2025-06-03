#include <iostream>
using namespace std;

class baseClass{
    public:
        virtual void perkenalan(){
            cout << "Halo saya Function dari baseClass" << endl;
        }
};

class derivedClass : public baseClass{
    public:
        void perkenalan(){
            cout << "Halo saya Function dari derivedClass" << endl;
        }
};

int main(){
    derivedClass a;
    a.perkenalan();

    return 0;
}