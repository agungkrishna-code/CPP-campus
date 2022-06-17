#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main()

{
   for (int i = 0; i <= 100; i++)
   {
      cout << endl
         << "Loading . . . " << i << "%" << endl;
      system("cls");
   }
   cout << "LOADING COMPLETE" << endl;

   system("color a");
   string user, pass;

   cout << "Masukkan USERNAME : ";
   cin >> user;
   cout << "Masukkan PASSWORD : ";
   cin >> pass;

   if (user == "test" && pass == "login")
   {
      cout << "\n\nPASSWORD dan USERNAME Anda Cocok\nAnda Berhasil Masuk" << endl;
   }

   else
   {
      cout << "Gagal Masuk, Password Atau Username Anda Salah";
   }

   getch;
}