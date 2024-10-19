#include <iostream>

using namespace std;

int main() {
    int sisi;

    cout << "Masukkan panjang sisi persegi: ";
    if (cin >> sisi) {
        cout << "Luas persegi adalah: " << sisi * sisi << endl;
    } else {
        cout << "Angka Tidak Valid. Harap masukkan angka bulat." << endl;
    }

    return 0;
}