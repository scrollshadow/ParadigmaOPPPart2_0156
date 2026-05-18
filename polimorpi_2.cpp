#include <iostream>
using namespace std;

class CetakCetak {
public:
    void cetak(int i) { //fungsi cetaka petrtama
        cout << "Mencetak integer: " << i << endl;
    }
    void cetak(double f) {
        cout << "Mencetak float: " << f << endl;
    }
    void cetak(string c) {
        cout << "Mencetak string: " << c << endl;
    }
};

int main() {
    CetakCetak a;

    a.cetak(5);
    a.cetak(500.526);
    a.cetak("Format String");

    return 0;
}