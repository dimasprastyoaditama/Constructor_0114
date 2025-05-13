#include <iostream>
using namespace std;
class buku{
    string Judul;
    public:
    buku setJudul(string judul){
        this->Judul = judul;
        return *this; //chain function
    }
    string getJudul(){
        return this->Judul;
    }
};

int main()
{
    buku bukunya;
    //chain function calls
    cout<<bukunya.setJudul("Matematika").getJudul();
    return 0;
}
