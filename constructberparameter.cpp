#include <iostream>
using namespace std;

class Mahasiswa{
    public:
    Mahasiswa(int nim, string nama); //COnstruct dengan parameter
};

//Definisi constructor dengan Parameter
Mahasiswa::Mahasiswa(int nim, string nama){
    cout << "Constructor Dengan Parameter Terpanggil"<<endl;
    cout << "NIM : " << nim << endl;
    cout << "Nama :" << nama << endl;
}

int main(){
    Mahasiswa mhs(12345, "Harits");
    return 0;
}