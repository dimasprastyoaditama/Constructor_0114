#include <iostream>
using namespace std;

class mahasiswa{
public:
mahasiswa(); //Construktor mahasiswa
};

mahasiswa::mahasiswa(){
cout<<"Construktor Terpanggil"<<endl; //Definisi Construktor
};

int main(){
mahasiswa mhs; //Pembuatan Object
return 0;
}
