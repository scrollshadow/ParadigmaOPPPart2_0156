#include <iostream>
using namespace std;

class orang {
public:
    string nama;

    orang(string pNama) : nama(pNama) { //memanggial construktor dari class induk untuk mengisi data naknya
        cout << "orang dibuat" << endl;
    }
    ~orang() {
        cout << "orang dihapus" << endl; // sama aja cuman langsung dihapus
    }
};

class pekerja {
public:
    int id;

    pekerja(int pId) : id(pId) {
        cout << "pekerja dibuat" << endl;
    }
    ~pekerja() {
        cout << "pekerja dihapus" << endl;
    }
};

class pelajar : public orang, public pekerja {
public:
    string sekolah;

    pelajar(string pNama, int pId, string pSekolah) :
        orang(pNama),
        pekerja(pId),
        sekolah(pSekolah) {
        cout << "pelajar dibuat" << endl;
    }
    ~pelajar() {
        cout << "pelajar dihapus" << endl;
    }
};

int main() {
    pelajar andi("Andi", 1, "SMK 1");

    return 0;
}