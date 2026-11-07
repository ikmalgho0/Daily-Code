#include <iostream>
using namespace std;

double f(double x) {
    return x + 2;
}

double g(double x) {
    return (x * x) - (3 * x) + 2;
}

double penjumlahan(double x) {
    return f(x) + g(x);
}

double komposisi(double x) {
    return f(g(x));
}

int main() {
    double x;

    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "f(x): " << f(x) << endl;
    cout << "g(x): " << g(x) << endl;
    cout << "Hasil f(x) + g(x): " << penjumlahan(x) << endl;
    cout << "(f o g): " << komposisi(x) << endl;
    
    return 0;
}