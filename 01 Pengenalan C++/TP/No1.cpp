#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string nama, nim;
    cout << "Siapa nama anda? ";
    getline(cin, nama);  // Menggunakan getline untuk membaca seluruh baris input
    cout << "Berapa nim anda? ";
    getline(cin, nim);
    cout << "Nama saya:" << nama << endl;
    cout << "NIM saya:" << nim << endl;
    return 0;
}