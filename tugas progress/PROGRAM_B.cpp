#include <iostream>  

using namespace std; 

void infinity_loop();
void salah();
int mulai;

int main() 
{  
    cout << "=============================================" << endl;
    cout << "Nama    : lorem ipsum			  " << endl;
    cout << "NIM     : lorem ipsum                        " << endl;
    cout << "=============================================" << endl;
	cout << "tekan 1 untuk mulai! :";
    cin  >> mulai;
    system("CLS");

    if (mulai == 1)
    {
        infinity_loop();
    }
    else 
    {
        salah();
    }
}  

// function 1
void infinity_loop()
{
    do 
    {    
        cout << "Halo Dunia :)";    //perulangan do while
    }   while(true);     
}

// function 2
void salah()
{
    cout <<"anda tekan tombol yg salah :(" <<endl;
}
