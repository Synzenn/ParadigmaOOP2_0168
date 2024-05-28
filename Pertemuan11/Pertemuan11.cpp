#include <Iostream>
using namespace std;

class seseorang {
public:
    //Pure virtual function
    virtual void pesan() = 0;

    //virtual function biasa
    //virtual void() {
        //cout<<"Pesan dari seseorang"<<endl;
    //}
};

class joko :public seseorang {
public:
    //deklarasi
    void pesan() {
        //implemenasi
        cout << "Pesan dari joko" << endl;
    }
};


int main() {
    
}