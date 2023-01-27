#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    // deklarasi variabel
    int jumlah_beli, jumlah_barang[50], sub_total[50], harga_barang[50], bayar;
    string nama_barang[50];
    double diskon;
    float total;
    cout << endl;

    cout << "                         === Kasir Gedemarket === \n";
    for (int i = 0; i < 36; i++)
    {
        printf("- ", i);
    }

    // jumlah beli barang
    cout << endl;
    cout << "Masukkan Jumlah Beli : ";
    cin >> jumlah_beli;

    for (int i = 0; i < jumlah_beli; i++)
    {
        cout << endl;
        cout << "Masukkan barang ke-" << i + 1 << endl;

        // input nama barang kedalam array
        cout << endl;
        cout << "Masukkan nama barang   : ";
        cin >> nama_barang[i];

        // input jumlah barang kedalam array
        cout << "Masukkan jumlah barang : ";
        cin >> jumlah_barang[i];

        // input harga barang kedalam array
        cout << "Harga barang           : ";
        cin >> harga_barang[i];

        // total harga sementara
        sub_total[i] = jumlah_barang[i] * harga_barang[i];
        // total harga keseluruhan
        total += sub_total[i];
    }

    cout << endl;
    cout << "                          === Detail Tagihan === \n";
    for (int index = 0; index < 72; index++)
    {
        printf("-", index);
    }

    cout << endl;

    // menampilkan semua isi array
    cout << "No           Nama           Jumlah            Harga          Sub Total";
    cout << endl;

    for (int i = 0; i < jumlah_beli; i++)
    {
        cout << i + 1 << setw(19) << nama_barang[i] << setw(12) << jumlah_barang[i] << setw(17) << harga_barang[i] << setw(17) << sub_total[i] << endl;
    }

    for (int index = 0; index < 72; index++)
    {
        printf("-", index);
    }

    // diskon
    if (total >= 100000)
    {
        diskon = 0.02 * total;
    }
    else
    {
        diskon = 0;
    }
    cout << endl;

    // Hasil
    // Jumlah bayar tahap awal
    cout << "Jumlah Bayar        : Rp. " << total << endl;
    // Menampilkan diskon
    cout << "Diskon              : Rp. " << diskon << endl;
    // Total harga tahap akhir
    cout << "Total Harga Bayar   : Rp. " << total - diskon << endl;
    // Pembayaran dari pelanggan
    cout << "Uang Pelanggan      : Rp. ";
    cin >> bayar;
    // Kembalian
    cout << "Jumlah Kembalian    : Rp. " << (bayar - (total - diskon));

    return 0;
}