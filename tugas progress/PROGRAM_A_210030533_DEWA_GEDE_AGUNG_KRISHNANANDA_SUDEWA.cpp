#include <iostream>
#include <math.h>
using namespace std; 

int userInput() 
{
	cout << "pilih angka: ";
	int no{};
	cin >> no;
	return no;
}

char userOpr() 
{
	cout << "Enter operasi aritmatika yg diinginkan ( +, -, *, / ): ";
	char opr{};
	cin >> opr;
return opr;
}

int calculate(int input1, char operasi, int input2)
{
if (operasi == '+')
{
	return input1 + input2;
}

else if (operasi == '-')
{
	return input1 - input2;
}

else if (operasi == '*')
{
	return input1 * input2;
}

else if (operasi == '/')
{
	return input1 / input2;
}
return 0;
}

int main()
{
    cout << "=============================================" << endl;
    cout << "Nama    : Dewa Gede Agung Krishnananda Sudewa" << endl;
    cout << "NIM     : 210030533"                           << endl;
	cout << "=============looping||calculator=============" << endl;
    cout << "=============================================" << endl;
while (true)
{
	int input1{ userInput() };
	int input2{ userInput() };
	char operasi{ userOpr() }; 
	cout << input1 << " " << operasi << " " << input2 << " = " << calculate(input1, operasi, input2) << '\n' << '\n';
}
return 0;
}