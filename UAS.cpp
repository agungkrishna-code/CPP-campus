#include <iostream>
#include <array>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

// Array berjumlah 20
int nilai[20];
int jml_nilai = 0;
int rata_rata = 0;
int nilai_max = 0;
int nilai_min = 100;
int valid = 0;
int mark;
int i, j, temp;
char ulang;

// Deklarasi Main
int main()
{

menu:
    system("color a"); //merubah warna pada terminal 
    cout << "=============================================" << endl;
    cout << "===UAS PRAKTEK ALGORITMA DAN STRUKTUR DATA===" << endl;
    cout << "=============================================" << endl;
    cout << "Nama    : Dewa Gede Agung Krishnananda Sudewa" << endl;
    cout << "Kelas   : BE213"                               << endl;
    cout << "NIM     : 210030533"                           << endl;
    cout << "=============================================" << endl;
    cout << "Masukkan nilai[20] : "                         << endl;
    cout << "=============================================" << endl;

    // Looping Array
    for (int i = 0; i < 20; i++)
    {

        // Fungsi Menginput nilai
        cout << "Nilai = " << i + 0 << ": ";
        cin >> nilai[i];

        // Menjumlahkan nilai
        jml_nilai = jml_nilai + nilai[i];

        // Mencari nilai terbesar
        if (nilai_max < nilai[i])
        {
            nilai_max = nilai[i];
        }

        // Mencari nilai terkecil
        else if (nilai_min > nilai[i])
        {
            nilai_min = nilai[i];
        }
    }

    // Fungsi Sorting
    for (i = 0; i < 20; i++)
    {
        for (j = i + 1; j < 20; j++)
        {
            if (nilai[i] > nilai[j])
            {
                temp = nilai[i];
                nilai[i] = nilai[j];
                nilai[j] = temp;
            }
        }
    }

    system("CLS");
    cout << "=========================================" << endl;

    // Menampilkan jumlah nilai
    cout << "Jumlah nilai array \t"
        << "= " << jml_nilai << endl;

    // Menghitung rata-rata nilai
    rata_rata = jml_nilai / 20;

    // Menampilkan nilai rata
    cout << "Rata-rata nilai array \t"
        << "= " << rata_rata << endl;

    // Menampilkan nilai tertinggi
    cout << "Nilai terbesar \t\t"
        << "= " << nilai_max << endl;

    // Menampilakn nilai terendah
    cout << "Nilai terkecil \t\t"
        << "= " << nilai_min << endl;

    // menampilkan sorting
    cout << "Urutan nilai dari yang terkecil ke besar "
        << "= ";
    for (i = 0; i < 20; i++)
    {
        cout << nilai[i] << ",";
    }
    cout << endl;

    cout << "=========================================" << endl
        << endl;

// Fungsi Dan output Nilai Searching
menu2:
    cout << "Masukkan nilai yang ingin dicari : ";
    cin >> mark;
    for (int i = 0; i < 20; i++)
    {
        if (mark == nilai[i])
        {
            valid = 1;
        }
    }
    if (valid == 1)
    {
        cout << "Angka [" << mark << "] ditemukan pada indeks : " << endl;
        for (int i = 0; i < 20; i++)
        {
            if (mark == nilai[i])
            {
                cout << "Ke - " << i << endl;
            }
        }
    }
    else
    {
        cout << "Angka tidak ditemukan!" << endl;
    }

    // Perulangan
    cout << "ingin mengulang(y)/mengulang searching(u) (y/n/u)";
    cin >> ulang;

    while (ulang == 'Y' || ulang == 'y')
    {
        goto menu;
    }

    while (ulang == 'U' || ulang == 'u')
    {
        goto menu2;
    }

    while (ulang == 'T' || ulang == 't')
    {
        goto akhir;
    }

akhir:

    cout << "\n\n===TERIMA KASIH===\n\n";

    getch();
}
