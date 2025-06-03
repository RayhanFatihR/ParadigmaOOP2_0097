#include <iostream>
using namespace std;

class AbstraksKlas {
    private : string x, y;
    public:

    //method untuk mengisi nilai
    //private member
    void setXY(string a, string b){
        x = a;
        y = b;
    }
    //menampilkan nilai
    void display(){
        cout << " x: " << x << endl;
        cout << " y: " << y << endl;
    }
};

int main(){
    AbstraksKlas objek;
    objek.setXY("Lampung", "Indonesia");
    objek.display();

    return 0;
}