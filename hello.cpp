#include<iostream>
using namespace std;

int main() {
    string fName;
    cout << "Enter your name: ";
    getline(cin, fName);
    cout << "Hello, " << fName << ". Welcome to Open Source!" << endl;
    return 0;
}