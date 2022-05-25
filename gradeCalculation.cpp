#include <iostream>

using namespace std;

int main()
{
float tugas, kuis, uts, uas;
float na;
char g;


cout << "Nilai Akhir dan Nilai Huruf" << endl;
cout << "==============================================" << endl ;


cout << "Masukkan Nilai Tugas : " ;
cin >> tugas ;
cout << "MAsukkan Nilai Kuis : " ;
cin >> kuis ;
cout << "Masukkan Nilai UTS : " ;
cin >> uts ;
cout << "Masukkan Nilai UAS : " ;
cin >> uas ;


cout << "==============================================" << endl ;


na = (tugas * 20/100) + (kuis * 20/100) + (uts * 30/100) + (uas * 30/100);
cout << "Nilai Akhir : " << na << endl ;


if(na <= 20){
g = 'E';
}
else if (na <= 40) {
g = 'D';
}
else if (na <= 60 ) {
g = 'C';
}
else if (na <= 80) {
g ='B';
}
else if (na <= 100) {
g = 'A';
}
else {
cout << "Grade Tidak Ditemukan";
}


cout << "Grade : " << g << endl ;



return 0;
}