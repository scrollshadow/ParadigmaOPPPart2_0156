#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0; //otomatis ke abstrak
    // virtual void pesan(){
    //     cout<<"Pesan dari seseorang"<<endl;
    // }
};

class joko : public seseorang {
public:
    void pesan() { //wajib mendefisinikan ulang
        cout << "Pesan dari joko" << endl;
    }
};

class lia : public seseorang {
public:
    void pesan() {
        cout << "Pesan dari lia" << endl;
    }
};

int main() {
    seseorang* obyek;//pointer
    joko a;
    lia b;

    obyek = &a; //pointer induk
    obyek->pesan();//fungsi pesan yg bakal di jalanin
    obyek = &b;// sama aja
    obyek->pesan();//sama aja

    // a.seseorang::pesan();
    // b.seseorang::pesan();

    return 0;
}