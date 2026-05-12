#ifndef JANTUNG_H
#define JANTUNG_H
using namespace std;
#include <iostream>

class jantung {
public:
    jantung(){
        cout << "jantung dihidupkan\n";
    }

    ~jantung() {
        cout << "jantung dimatikan\n";
    }
};
#endif