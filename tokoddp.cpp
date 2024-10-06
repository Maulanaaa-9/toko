#include <iostream>
using namespace std;
int pilihan;
int totalBarang = 0;  
float totalHarga = 0; 

void menutampilan() {
int pilihBarang;
int pilihan;
int keluar;
int lihatTotalHarga;

    do {
        cout << "Masukkan pilihan (1-3): ";
        cin >> pilihan;

        if (pilihan == 1) {
            pilihBarang;
        } 
        else if (pilihan == 2) {
            lihatTotalHarga;
        } 
        else if (pilihan == 3) {
            keluar;
        } 
        else {
            cout << "Pilihan tidak valid! Coba lagi."<<endl;
        }
  } while (pilihan != 3); 
}



void tampilkanMenu() {
    cout << "=== MENU SUPERMARKET ==="<<endl;
    cout << "1. Pilih Barang"<<endl;
    cout << "2. Lihat Total Harga"<<endl;
    cout << "3. Keluar"<<endl;
    cout << "========================"<<endl;
}
