#include <iostream>
using namespace std;

class Barang{
    public :
        string nama;
        int jumlah;   
        string kategori;
        string tanggalProduksi;
        void tampilspek(){
            cout << "Nama barang : " << nama << endl;
            cout << "Jumlah barang : " << jumlah << endl;
            cout << "Kategori barang : " << kategori << endl;
            cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        }
        
}; 

int main(){
    Barang elektronik;
    Barang nonElectronik;

    elektronik.nama = "Laptop punya pak owo";
    elektronik.jumlah = 1;
    elektronik.kategori = "elektronik";
    elektronik.tanggalProduksi = "2007-01-07";
    elektronik.tampilspek();

    cout << endl;

    nonElectronik.nama = "Laptop punya pak owi";
    nonElectronik.jumlah = 1;
    nonElectronik.kategori = "non elektronik";
    nonElectronik.tanggalProduksi = "2007-07-07";
    nonElectronik.tampilspek();
}

// selesai