#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    int angka = 10;
    float desimal = 0.1;
    string kalimat = "rio";
    double tinggi = 10.4;
    char jenis_kelamin = 'L';
    bool isSunny = true;

    cout << "Angka: " << angka << endl;

    int angka;

    cout << "Masukan angka: ";
    cin >> angka;

    cout << "Angka: " << angka << endl;

    getch();

    //operator penjumlahan
    int angka1 = 10;
    int angka2 = 2;

    int hasil = angka1 + angka2;

    cout << "Hasilnya adalah: " << hasil << endl;


    //operator pengurangan
    int angka1 = 10;
    int angka2 = 2;

    int hasil = angka1 - angka2;

    cout << "Hasilnya adalah: " << hasil << endl;

    //operator perkalian
    int angka1 = 10;
    int angka2 = 2;

    int hasil = angka1 * angka2;

    cout << "Hasilnya adalah: " << hasil << endl;

    //operator pembagian
    int angka1 = 10;
    int angka2 = 2;

    int hasil = angka1 & angka2;

    cout << "Hasilnya adalah: " << hasil << endl;

    //operator perbandingan
    int angka1 = 5;
    int angka2 = 5;

    bool hasil = (angka1 = angka2);

    cout << "Hasilnya adalah: " << boolalpha << hasil << endl;

    // operator logika
    bool kondisi1 = false;
    bool kondisi2 = false;

    bool hasil = (kondisi1 || kondisi2);
    cout << "Hasilnya adalah: " << boolalpha << hasil << endl;

    bool kondisi1 = false;
    bool hasil = kondisi1;

    cout << boolalpha << hasil << endl;

    //pecabangan
    string kata;
    cout << "Masukan kata: ";
    cin >> kata;

    if (kata == "HALO") {
        cout << "kata sesuai" << endl;
    } else {
        cout << "kata tidak sesuai" << endl;
    }

    int tv;
    cout << "Daftar channel tv" << endl;
    cout << "1. RCTI" << endl;
    cout << "2. Trans7" << endl;
    cout << "3. TVRI" << endl;

    cout << "Masukan channel pilhan: ";
    cin >> tv;

    switch(tv){
    case 1 :
        cout << "Channel yang anda pilih RCTI" << endl;
        break;
    case 2 :
        cout << "Channel yang anda pilih Trans7" << endl;
        break;
    case 3 :
        cout << "Channel yang anda pilih TVRI" << endl;
        break;
    default:
        cout << "Channel tidak tersedia" << endl;
    }

// For loop
    for(int i = 5; i > 0; i--) {
        cout << i << "Hello Bro!" << endl;
    }