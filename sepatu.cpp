#include <iostream>
#include <string>

using namespace std;

int main() {
    string sesuai, kirim;
    cout << "START" << endl;
    cout << "Pergi ke toko sepatu" << endl;
    
    do {
        cout << "Mencoba sepatu..." << endl;
        cout << "Apakah sepatu sesuai? (ya/tidak): ";
        cin >> sesuai;

        if (sesuai == "tidak") {
            cout << "Pilih sepatu lain yang sesuai" << endl;
        }
    } while (sesuai == "tidak");

    cout << "Sepatu dibungkus" << endl;

    cout << "Pergi ke jasa pengiriman" << endl;
    cout << "Kirim sepatu? (ya/tidak): ";
    cin >> kirim;

    if (kirim == "ya") {
        cout << "Sepatu dikirim" << endl;
    } else {
        cout << "Sepatu tidak jadi dikirim" << endl;
    }

    cout << "END" << endl;

    return 0;
}
