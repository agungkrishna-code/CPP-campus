#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string path = "data_ifstream.txt";
    ifstream file(path);
    
    if(file.is_open()){
    	cout << "File is open" << endl;
    } else cout << "File not open" << endl;
    
return 0;
}