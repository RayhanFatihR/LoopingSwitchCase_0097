#include <iostream>
using namespace std;

float LuasPersegiPanjang(float p,float l){
    return p * l;
}

float LuasLingkaran(float r){
    return 3.14 * r * r;
}

int main(){
    int pilihan;
    float panjang , lebar , jejari;

    do{
        cout << "====Menu====" << endl;
        cout << " 1. Menghitung Luas Persegi Panjang" << endl;
        cout << " 2. Menghitung Luas Lingkaran" << endl;
        cout << " 3. Exit" << endl;
        cout << "Pilihan (1/2/3) :";
        cin >> pilihan;

        switch(pilihan){
            case 1:
                cout << "Menghitung Luas Persegi Panjang" << endl;
                cout << "Masukan Panjang : ";
                cin >> panjang;
                cout << "Masukan Lebar : ";
                cin >> lebar;
                cout << "Luas Persegi Panjang : " << LuasPersegiPanjang(panjang, lebar) << endl;
                cout << endl;
                break;
        }
    }
}