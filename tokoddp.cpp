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
void pilihBarang()
{
    int pilihanBarang;
    int totalbarang;
    int totalharga;
    char lanjut; 

    do {
        cout << " Pilih jenis barang: "<<endl;
        cout << "1. Makanan "<<endl;
        cout << "2. Minuman "<<endl;
        cout << "3. Snack "<<endl;
        cout << "Masukkan pilihan barang (1-3): "<<endl;
        cin >> pilihanBarang;

        if (pilihanBarang == 1) {
            totalBarang++;
            totalHarga += 20000; 
            cout << "Makanan berhasil ditambahkan ke keranjang.";
        } 
        else if (pilihanBarang == 2) {
            totalBarang++;
            totalHarga += 10000; 
            cout << "Minuman berhasil ditambahkan ke keranjang.";
        } 
        else if (pilihanBarang == 3) {
            totalBarang++;
            totalHarga += 5000; 
            cout << "Snack berhasil ditambahkan ke keranjang.";
        } 
        else {
            cout << "Pilihan barang tidak valid! Coba lagi.";
        }
            cout << "Apakah Anda ingin menambah barang lagi? (y/n): ";
            cin >> lanjut;
        } while (lanjut == 'y' || lanjut == 'Y'); 

}
void lihatTotalHarga() {
    cout << "Total barang dalam keranjang: " << totalBarang << endl;
    cout << "Total harga: Rp " << totalHarga << endl;
}


void keluar() {
    cout << "Terima kasih telah berbelanja di Supermarket!";
}





int main() {
menutampilan();
tampilkanMenu();
pilihBarang();
lihatTotalHarga();
keluar();
cout <<endl;
return 0;
}
