#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
private:
int nim;
string nama;
public:
mahasiswa();
mahasiswa(int);
mahasiswa(string);
mahasiswa(int iNim, string iNama);
void cetak();
};

mahasiswa::mahasiswa(){
}

mahasiswa::mahasiswa(int iNim){
    nim = iNim; // definisi hanya NIM
}

mahasiswa::mahasiswa(string iNama){
    nama = iNama; // definisi hanya Nama
}

mahasiswa::mahasiswa(int iNim, string iNama){
    nim = iNim; // definisi NIM dan Nama
    nama = iNama;
}

void mahasiswa::cetak(){
    cout << endl << "NIM = " << nim << endl;
    cout << "Nama = " << nama << endl;
}

int main(){
    mahasiswa mhs1(102030);          // hanya NIM
    mahasiswa mhs2("Andi");          // hanya Nama
    mahasiswa mhs3(010203, "Santi"); // NIM dan Nama
    
    ///tampilkan Nilai
    cout << "Mahasiswa 1 : "; mhs1.cetak();
    cout << "\nMahasiswa 2 : "; mhs2.cetak();
    cout << "\nMahasiswa 3 : "; mhs3.cetak();

    return 0;
}
