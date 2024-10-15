#include <iostream>
using namespace std;
int totalBarang = 0;  
float totalHarga = 0; 

void tampilkanMenu() {
    cout << "\nSelamat Datang Di Supermarket Kami!!\n";
    cout << "=== MENU SUPERMARKET ===\n";
    cout << "1. Pilih Barang\n";
    cout << "2. Lihat Total Harga\n";
    cout << "3. Keluar\n";
    cout << "========================\n";
}
void pilihBarang(){
    int pilihanBarang;
    char lanjut; 

    do {
        tampilkanMenu();
        cout << " Pilih jenis barang:\n";
        cout << "1. Makanan\n";
        cout << "2. Minuman\n";
        cout << "3. Snack\n";
        cout << "Masukkan pilihan barang (1-3): ";
        cin >> pilihanBarang;

        if (pilihanBarang == 1) {
            totalBarang++;
            totalHarga += 20000; 
            cout << "Makanan berhasil ditambahkan ke keranjang.\n";
        } 
        else if (pilihanBarang == 2) {
            totalBarang++;
            totalHarga += 10000; 
            cout << "Minuman berhasil ditambahkan ke keranjang.\n";
        } 
        else if (pilihanBarang == 3) {
            totalBarang++;
            totalHarga += 5000; 
            cout << "Snack berhasil ditambahkan ke keranjang.\n";
        } 
        else {
            cout << "Pilihan barang tidak valid! Coba lagi.\n";
        }
            cout << "Apakah Anda ingin menambah barang lagi? (y/n): ";
            cin >> lanjut;
        } while (lanjut == 'y' || lanjut == 'Y'); 

}
void lihatTotalHarga() {
    cout << "\nTotal barang dalam keranjang: " << totalBarang << "\n";
    cout << "Total harga: Rp " << totalHarga << "\n";
}

void keluar() {
    cout << "\nTerima kasih telah berbelanja di Supermarket kami!\n";
}
void menutampilan() {
int pilihan;

    do {
        tampilkanMenu();
        cout << "Masukkan pilihan (1-3): ";
        cin >> pilihan;

        if (pilihan == 1) {
            pilihBarang();
        } 
        else if (pilihan == 2) {
            lihatTotalHarga();
        } 
        else if (pilihan == 3) {
            keluar();
        } 
        else {
            cout << "Pilihan tidak valid! Coba lagi.\n";
        }
  } while (pilihan != 3); 
}





int main() {
menutampilan();
return 0;
}
