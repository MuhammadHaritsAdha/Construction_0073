#include <iostream>
using namespace std;

//deklarasi bangun datar
class BangunDatar;

class PersegiPanjang{
    public:
    void inputData(BangunDatar &bd);
    void OutputData(BangunDatar &bd);
};

class BangunDatar{
    private:
        float panjang;
        float lebar;
        float hitungLuas(){
            return panjang * lebar;
        };
        float hitungKeliling(){
            return 2 * (panjang + lebar);
        };
    public: 
        //untuk mengakses panjanng dan lebar
        friend void PersegiPanjang::inputData(BangunDatar &bd);
        friend void PersegiPanjang::OutputData(BangunDatar &bd);
};

void PersegiPanjang::inputData(BangunDatar &bd){
    cout << "Masukkan Panjang = ";
    cin >> bd.panjang;
    cout << "Masukkan Lebar = ";
    cin >> bd.lebar;
};

void PersegiPanjang::OutputData(BangunDatar &bd){
    cout << "Luas = " << bd.hitungLuas() << endl;
    cout << "Keliling = " << bd.hitungKeliling() << endl;
};

int main(){
    PersegiPanjang pP;
    BangunDatar bD;
    pP.inputData(bD);
    pP.OutputData(bD);
};