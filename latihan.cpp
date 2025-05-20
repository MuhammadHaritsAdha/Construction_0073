// Buatlah program C++ dengan class Barang yang meimiliki atribut : namaBarang,
// kodeBarang
// program memiliki constructor berparameter 
// untuk mengisi nilai namaBarang dan kodeBarang.
// serta memiliki fungsi untuk menampilkan informasi barang.


#include <iostream>
using namespace std;

class Barang{
    public:
    Barang(string namaBarang, int kodeBarang);
};

Barang::Barang(string namaBarang, int kodeBarang){
    cout << "Construct Dengan Parameter" << endl;
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "Kode Barang : " << kodeBarang << endl;
}

int main(){
    Barang b("HP", 9876);
    return 0;
}