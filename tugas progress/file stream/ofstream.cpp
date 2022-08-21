#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream MyFile("test.txt");

    MyFile << "test";

    MyFile.close();
}

