#include <iostream>
using namespace std;

//deklarasi class BangunDatar
class BangunDatar;

class persegiPanjang{
    public:
        void inputData(BangunDatar &bd);
        void outputData(BangunDatar &bd);
};

class BangunDatar{
    private:
        float panjang;
        float lebar;
        float hitungLuas(){
            return panjang * lebar;
        };
        float hitungKeliling(){
            return 2 * (panjang * lebar);
        };
    public:
         public: 
        // untuk mengakses panjang dan lebar
        friend void PersegiPanjang::inputData(BangunDatar &bd);
        // untuk mengakses fungsi
        friend void PersegiPanjang::outputData(BangunDatar &bd);       
};

void PersegiPanjang::inputData(BangunDatar &bd){
    cout << "Masukkan Panjang :";
    cin >> bd.panjang;
    cout << "Masukkan Lebar : ";
    cin >> bd.Lebar;
}


   

