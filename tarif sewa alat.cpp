#include <iostream>
using namespace std;

int main() {
    int pilihanAlat;
    int durasiMenit;
    int tarifPer15Menit;
    int totalSewa;
    string namaAlat;
    
    cout << "==================================================" << endl;
    cout << "         ARENA GYM - TARIF SEWA ALAT" << endl;
    cout << "==================================================" << endl;
    cout << endl;
    cout << "Pilihan Alat:" << endl;
    cout << "1. Dumbbell  => Rp 5.000 / 15 menit" << endl;
    cout << "2. Treadmill => Rp 10.000 / 15 menit" << endl;
    cout << "3. Barbell   => Rp 8.000 / 15 menit" << endl;
    cout << "4. Static Bike => Rp 7.000 / 15 menit" << endl;
    cout << "==================================================" << endl;
    cout << endl;
    
    //Menerima input pilihan alat
    cout << "Masukkan pilihan alat (1-4): ";
    cin >> pilihanAlat;
    
    //Validasi input pilihan
    if (cin.fail() || pilihanAlat < 1 || pilihanAlat > 4) {
        cout << "Error: Pilihan tidak valid! Harus 1-4." << endl;
        return 1;
    }
    
    //Menerima input durasi pemakaian (menit)
    cout << "Masukkan durasi pemakaian (menit): ";
    cin >> durasiMenit;
    
    // Validasi input durasi
    if (cin.fail() || durasiMenit <= 0) {
        cout << "Error: Durasi harus lebih dari 0!" << endl;
        return 1;
    }
    
    //Switch untuk menentukan tarif 
    switch (pilihanAlat) {
        case 1:
            namaAlat = "Dumbbell";
            tarifPer15Menit = 5000;
            break;
        case 2:
            namaAlat = "Treadmill";
            tarifPer15Menit = 10000;
            break;
        case 3:
            namaAlat = "Barbell";
            tarifPer15Menit = 8000;
            break;
        case 4:
            namaAlat = "Static Bike";
            tarifPer15Menit = 7000;
            break;
        default:
            cout << "Error: Pilihan tidak valid!" << endl;
            return 1;
    }
    
    //looping untuk menghitung total tarif 
    totalSewa = 0;
    int menitTerhitung = 0;
    
    //Loop menghitung tarif
    while (menitTerhitung < durasiMenit) {
        totalSewa += tarifPer15Menit;
        menitTerhitung += 15;
    }
    
    //hasil
    cout << endl;
    cout << "==================================================" << endl;
    cout << "                 DETAIL PENYEWAAAN" << endl;
    cout << "==================================================" << endl;
    cout << "Alat yang disewa: " << namaAlat << endl;
    cout << "Durasi pemakaian: " << durasiMenit << " menit" << endl;
    cout << "Jumlah interval (15 menit): " << (menitTerhitung / 15) << " kali" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "TOTAL SEWA: Rp " << totalSewa << endl;
    cout << "==================================================" << endl;
    
    return 0;
}
