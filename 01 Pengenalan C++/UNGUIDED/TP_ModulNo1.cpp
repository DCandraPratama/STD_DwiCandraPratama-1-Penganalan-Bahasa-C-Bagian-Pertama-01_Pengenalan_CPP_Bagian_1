//1.	Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.
#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    // Input dua bilangan float
    cout << "Masukkan bilangan pertama: ";
    cin >> num1;
    cout << "Masukkan bilangan kedua: ";
    cin >> num2;

    // Operasi aritmatika
    cout << "Penjumlahan: " << num1 + num2 << endl;
    cout << "Pengurangan: " << num1 - num2 << endl;
    cout << "Perkalian: " << num1 * num2 << endl;
    if (num2 != 0) {
        cout << "Pembagian: " << num1 / num2 << endl;
    } else {
        cout << "Pembagian tidak bisa dilakukan karena pembagi nol." << endl;
    }

    return 0;
}
