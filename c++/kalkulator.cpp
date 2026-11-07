#include <iostream>
using namespace std;

double tambah(double a, double b) {
    return a + b;
}

double kurang(double a, double b) {
    return a - b;
}

double kali(double a, double b) {
    return a * b;
}

double bagi(double a, double b) {
    return a / b;
}

double pilihOperasi(double a, double b, int pilihan) {
    if (pilihan == 1) return tambah(a, b);
    else if (pilihan == 2) return kurang(a, b);
    else if (pilihan == 3) return kali(a, b);
    else if (pilihan == 4) return bagi(a, b);
    else return 0;
}

int main() {
    double a, b;
    int pilihan;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "\n1. Tambah \n2. Kurang \n3. Kali \n4. Bagi \nPilih operasi: ";
    cin >> pilihan;

    cout << "Hasil: " << pilihOperasi(a, b, pilihan) << endl;

    return 0;
}