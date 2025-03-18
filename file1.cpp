#include <iostream>
using namespace std;

int main(){
    //Perulangan for untuk pencacahan naik
    int i;
    cout << "Perulangan For Pencacahan Naik" << endl;
    for (i = 0; i <= 4; i++) {
        cout << "Nilai i : " << i
        << " Lari keliling lapangan" << endl;
    }

    cout << "Nilai i terakhir : " << i << endl;
    cout << endl;

    //Perulangan for untuk pencacahan turun
    cout << "Perulangan For Pencacahan Turun" << endl;
    for (i = 4; i >= 0; i--) {
        cout << "Nilai i : " << i
        << " Lari keliling lapangan" << endl;
    }

    cout << "Nilai i terakhir : " << i << endl;
}