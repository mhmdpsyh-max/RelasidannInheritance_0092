#ifndef IBU_H
#define IBU_H


#include <iostream>
#include <vector>
using namespace std;
#include "anak.h"

class Ibu {
public: 
    string nama;
    vector<anak*> daftar_anak;

    Ibu(string pNama) :nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    };
    
    ~Ibu() {
         cout << "Ibu \"" << nama << "\" tidak ada\n";
    }
    
    void tambahAnak(anak*);
    void cetakAnak();
};

void Ibu::tambahAnak(anak* pAnak) {
    daftar_anak.push_back(pAnak);
}

void Ibu::cetakAnak(){
 cout << "Daftar anak dari Ibu \"" << this->nama <<"\":\n";
 for (int i = 0; i< daftar_anak.size(); i++) {
    cout << daftar_anak[i]->nama << endl;
   }
   cout <<endl;
}
#endif