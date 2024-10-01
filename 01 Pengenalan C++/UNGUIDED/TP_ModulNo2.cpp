//Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di- input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100

#include <iostream>
using namespace std;

// Fungsi untuk mengubah satuan menjadi kata
string convertSatuan(int number) {
    string satuan[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"};
    return satuan[number];
}

// Fungsi untuk mengubah puluhan menjadi kata
string convertPuluhan(int number) {
    if (number == 10) return "Sepuluh";
    if (number == 11) return "Sebelas";
    if (number < 20) return convertSatuan(number % 10) + " Belas";
    string puluhan[] = {"", "", "Dua Puluh", "Tiga Puluh", "Empat Puluh", "Lima Puluh", 
                        "Enam Puluh", "Tujuh Puluh", "Delapan Puluh", "Sembilan Puluh"};
    return puluhan[number / 10] + " " + convertSatuan(number % 10);
}

// Fungsi utama untuk mengonversi angka ke kata
string numberToWords(int number) {
    if (number == 0) return "Nol";
    if (number == 100) return "Seratus";
    return convertPuluhan(number);
}

int main() {
    int angka;

    // Input angka dari 0 hingga 100
    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    // Validasi input
    if (angka < 0 || angka > 100) {
        cout << "Angka harus antara 0 hingga 100." << endl;
    } else {
        // Output hasil konversi
        cout << angka << " : " << numberToWords(angka) << endl;
    }

    return 0;
}
