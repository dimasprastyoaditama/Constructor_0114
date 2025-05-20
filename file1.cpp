//Buatlah program c++ dengan class Barang yang memiliki atribut: namaBarang,
//kodeBarang
//program memiliki construktor berparameter untuk mengisi
//nilai namaBarang dan kodeBarang.
//serta memiliki fungsi untuk menampilkan informasi barang.

#include <iostream>
#include <string>
using namespace std;

class barang {
    public:
    string namaBarang;
    int kodeBarang;
    barang(string nama, int kode) {
        namaBarang = nama;
        kodeBarang = kode;
    }
    void cetak() {
        cout << "Nama Barang: " << namaBarang << endl;
        cout << "Kode Barang: " << kodeBarang << endl;
    }
};
    int main (){
        barang brg1 ("buku", 20000); //nama barang dan kode barang
        barang brg2 ("pulpen", 15000); //nama barang dan kode
        barang brg3 ("penghapus", 5000); //nama barang dan kode barang

        cout << "Barang 1: " ; brg1.cetak();
        cout << "Barang 2: " ; brg2.cetak();
        cout << "Barang 3: " ; brg3.cetak();

        return 0;
    }