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
}


   

