#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

class ending
{
    public:
        void terimakasih()
        {
            cout << "\n\n======TERIMA KASIH======\n\n";
        }
};

struct cashier
{
    int jum_beli, bayar, diskon, jumlah[50], harga[100], sub_tot[100];
    string nama_barang[50];
    float tot;
};

int main()
{
ending x;
    struct cashier bayars, jumlahbeli, diskons, jumlahs, hargas, subtots, tots,
    namabarang;
    char ulang;

menu:
    system("color a");
    cout << "----SELAMAT DATANG DI SELF SERVICE MART----" << endl;
    cout << "===========================================" << endl;
    cout << "------------SILAHKAN BERBELANJA------------" << endl;
    cout << endl;
    cout << "Masukan Jumlah Produk Yang Akan Dibeli : ";
    cin  >> jumlahbeli.jum_beli;

    for (int i = 0; i < jumlahbeli.jum_beli; i++)
    {
        cout << endl;
        cout << "Masukan Produk Ke-" << i + 1 << endl;
        cout << endl;

        cout << "Nama Produk    : ";
        cin  >> namabarang.nama_barang[i];

        cout << "Jumlah Produk  : ";
        cin  >> jumlahs.jumlah[i]; 

        cout << "Harga          : ";
        cin  >> hargas.harga[i];

        subtots.sub_tot[i] = jumlahs.jumlah[i] * hargas.harga[i]; 
        tots.tot += subtots.sub_tot[i];                 
    };

    system("CLS");
    cout << endl;
    cout << "=====================STRUK PEMBELIAN=====================" << endl;
    cout << "=========================================================" << endl;
    cout << "No    Produk    Jumlah     Harga     Sub Total" << endl;
    cout << "=========================================================" << endl;
    for (int i = 0; i < jumlahbeli.jum_beli; i++)
    {
        cout << i + 1 << setw(12) << namabarang.nama_barang[i] << setw(6) << jumlahs.jumlah[i] << setw(12) << hargas.harga[i] << setw(12) << subtots.sub_tot[i] << endl; // Menampilkan semua nilai array
    };
    cout << "=========================================================" << endl;

    if (tots.tot >= 100000)
    {
        diskons.diskon = 0.06 * tots.tot;
    }
    else if (tots.tot >= 50000)
    {
        diskons.diskon = 0.04;
    }
    else if (tots.tot >= 25000)
    {
        diskons.diskon = 0.02;
    }
    else
    {
        diskons.diskon = 0;
    }

    cout << "Jumlah Bayar : Rp." << tots.tot << endl;        
    cout << "Diskon       : Rp." << diskons.diskon << endl;       
    cout << "Total Bayar  : Rp." << tots.tot - diskons.diskon << endl; 
    cout << "Bayar        : Rp.";
    cin  >>  bayars.bayar;                                                    
    cout << "Kembali      : Rp." << (bayars.bayar - (tots.tot - diskons.diskon)) << endl; 

    cout << "ingin Berbelanja Lagi? (y/n)" << endl;
    cin  >> ulang;

    while (ulang == 'Y' || ulang == 'y')
    {
        goto menu;
    };

    while (ulang == 'N' || ulang == 'n')
    {
        goto akhir;
    };

akhir:
    x.terimakasih();
    getch();
};