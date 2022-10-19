#include <iostream>
#include <math.h>

using namespace std;

int main(){
    // deklarasi variabel
    int panjangsisiAlas = 8, sisiTinggi = 10;
    float sisiMiring;

    // rumus
    sisiMiring = (panjangsisiAlas*panjangsisiAlas)+(sisiTinggi*sisiTinggi);
    sisiMiring = sqrt(sisiMiring);

    // hasil akhir
    cout << "==========\n";
    cout << "Sisi miring dari panjang sisi alas 8cm dan sisi tinggi 10cm segitiganya adalah: " << sisiMiring << endl;

  return 0;    
}