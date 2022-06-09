#include <iostream>

using namespace std;

class Buku{
    public:
        string judul;
        string penulis;

        Buku(string judul, string penulis){
            this->judul = judul;
            this->penulis = penulis;
        }
};

int main(){

    Buku Buku1("Who Rule The World", "(Noam Chomsky)");
    cout << Buku1.judul << endl;
	cout << Buku1.penulis << endl;

    Buku Buku2("Lord of the Rings", "(JRR Tolkien)");
    cout << Buku2.judul << endl;
	cout << Buku2.penulis << endl << endl;

    cout << "=============================================" << endl;
    cout << "Nama    : lorem ipsum" 			    << endl;
    cout << "NIM     : lorem ipsum"                         << endl;
    cout << "=============================================" << endl;

    return 0;
}
