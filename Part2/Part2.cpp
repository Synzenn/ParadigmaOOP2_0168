#include <iostream>
using namespace std;

//class parent
//tambahkan final sesufah nama class
//untuk mencegah adanya overrriding
class baseClass {
public:
    virtual void perkenalan() {
        cout << "Hallo saya Function dari base class";
    }
};
class derivedClass : public baseClass {
public:
    void perkenalan() {
        cout << "Hallo saya Function dari derived Class";
    }
};
int main() {
    
}