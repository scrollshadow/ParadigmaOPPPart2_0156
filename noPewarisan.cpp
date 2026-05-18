#include <iostream>
using namespace std;

class BaseClass {
public:
    int x;

protected: //variabel aman dari luas
    int y;

private:
    int z;
};

class DerivedClass : public BaseClass {
public:
    void setY(int a) {
        y = a;
    }
    void displayY() {
        cout << "Nilai y: " << y << endl;
    }
};

int main() {
    DerivedClass a;
    a.x = 10;
    cout << "Nilai x: " << a.x << endl;

    a.setY(20);
    a.displayY();

    return 0;
}