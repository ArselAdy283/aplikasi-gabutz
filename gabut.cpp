#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <fstream>
using namespace std;

void loop_kalimat() {
    string kalimat;
    int jumlah_loop;

    cout << "Masukkan kalimat yang mau dilooping: ";
    cin.ignore();
    getline(cin, kalimat);
    cout << "Masukkan jumlah loop: ";
    cin >> jumlah_loop;

    stringstream buffer;
    for (int loop = 1; loop <= jumlah_loop; loop++) {
        buffer << loop << ". " << kalimat << endl;
    }

    cout << "\n=== Hasil Looping ===\n";
    cout << buffer.str();

    ofstream file("hasil_loop.txt");
    file << buffer.str();
    file.close();
    cout << "\nHasil looping disimpan ke 'hasil_loop.txt'\n";
    system("pause");
}

void hitung_umur() {
    int tahun_pilihan, tahun_lahir, umur;

    cout << "Pilih tahun berapa ya: ";
    cin >> tahun_pilihan;
    cout << "Kamu lahir tahun berapa: ";
    cin >> tahun_lahir;

    umur = tahun_pilihan - tahun_lahir;
    cout << "\nUmurmu " << umur << " tahun di tahun " << tahun_pilihan << "\n" << endl;
    system("pause");
}

void kalkulator() {
    int angka_pertama, angka_kedua, hasil;
    char operasi;

    while (true) {
        cout << "Masukkan angka pertama: ";
        cin >> angka_pertama;
        cout << "Masukan angka kedua: ";
        cin >> angka_kedua;

        cout << "Pilih operasi perhitungan (+,-,*,/): ";
        cin >> operasi;

        bool valid = true;

        switch (operasi) {
            case '+':
                hasil = angka_pertama + angka_kedua;
                cout << "Hasilnya: " << hasil << "\n" << endl;
                break;

            case '-':
                hasil = angka_pertama - angka_kedua;
                cout << "Hasilnya: " << hasil << "\n" << endl;
                break;

            case '*':
                hasil = angka_pertama * angka_kedua;
                cout << "Hasilnya: " << hasil << "\n" << endl;
                break;

            case '/':
                if (angka_kedua == 0) {
                    cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
                    valid = false;
                } else {
                    hasil = angka_pertama / angka_kedua;
                    cout << "Hasilnya: " << hasil << endl;
                }
                break;

            default:
                cout << "Input operasi tidak valid." << endl;
                valid = false;
                break;
        }

        if (valid) {
            system("pause");
            break;
        }
    }
}

int main() {
    while (true) {
        system("cls");
        cout << "==================================" << endl;
        cout << "Selamat datang di Aplikasi Gabutz" << endl;
        cout << "==================================" << endl;
        cout << endl;
    
        int pilihan;
        cout << "Daftar aplikasi:" << endl;
        cout << "1. Aplikasi loop kalimat" << endl;
        cout << "2. Apikasi hitung umur" << endl;
        cout << "3. Aplikasi kalkulator" << endl;
        cout << "\nPilih aplikasi: ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                system("cls");
                loop_kalimat();
                break;
            
            case 2:
                system("cls");
                hitung_umur();
                break;

            case 3:
                system("cls");
                kalkulator();
                break;
        
            default:
                cout << "Piihan tidak valid";
                break;
        }
    }
}
    