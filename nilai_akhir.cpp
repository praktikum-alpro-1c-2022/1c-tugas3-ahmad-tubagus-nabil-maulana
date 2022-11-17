#include <iostream>

using namespace std;

int main(){
    // deklarasi variabel
    int praktikum = 75, uts = 70, uas = 88;
    float total;

    // print
    cout << "Nilai praktikum: " << praktikum << endl;
    cout << "Nilai uts: " << uts << endl;
    cout << "Nilai uas: " << uas << endl;

    // rumus
    total = (praktikum * 0.2) + (uts * 0.3) + (uas * 0.5);

    // hasil akhir
    cout << "Nilai akhir mahasiswa dari praktikum, uts, uas adalah: " << total << endl;

  return 0;    
}