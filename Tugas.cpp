#include <iostream>
#include <string>
using namespace std;

// pembuatan class user
class User {
protected:
    static int globalId;
    int id;
    string nama;
    string email;

public:
  User(string pNama, string pEmail)
  
