#include <iostream>
using namespace std;

int main() {

    string nama;
    int gol, jam, upah, lembur, gaji;

    cout << "Masukkan nama anda: "; 
    cin >> nama;
    cout << "Masukkan golongan anda: "; 
    cin >> gol;
    cout << "Masukkan jam kerja anda per minggu: "; 
    cin >> jam;

    if (gol < 1 || gol > 3 || jam < 0) {
        cout << "Input tidak valid" << endl;
        return 0;
    }

    upah = (gol == 1) ? 25000 : ((gol == 2) ? 35000 : 50000);
    lembur = (jam > 48) ? (jam - 48) * 10000 : 0;
    gaji = (upah * jam) + lembur;

    cout << "\n";
    cout << "Total gaji " << nama << " per minggu : Rp " << gaji << "\n";

    return 0;
}
