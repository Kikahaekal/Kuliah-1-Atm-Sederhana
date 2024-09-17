#include <iostream>

using namespace std;

int main()
{
    // Mulai program
    int pilihan;         // Deklarasi variabel pilihan
    int saldo = 1000000; // Deklarasi variabel saldo dengan nilai 1 juta / 1000000
    cout << "Selamat datang di atm sederhana" << endl;
    cout << endl;
    cout << "Saldo anda tersisa: " << saldo << endl;
    cout << "Pilih menu yang tersedia" << endl;
    cout << "1. Tarik tunai 100.000" << endl;
    cout << "2. Tarik tunai 200.000" << endl;
    cout << "3. Tarik tunai 300.000" << endl;
    cout << "4. Tarik tunai 1.000.000" << endl;
    cout << "5. Tarik tunai 1.500.000" << endl;
    cout << "6. Jumlah lain" << endl;
    cout << "7. Setor tunai" << endl;
    cout << "8. Pengecekan Saldo" << endl;
    cout << "Pilihan: ";
    cin >> pilihan; // Input pilihan sesuai dengan yang tersedia di menu

    // Mengkondisikan pilihan
    switch (pilihan)
    {
    // Jika pilihan adalah fitur 1
    case 1:
        // Saldo tidak akan dikurangi jika saldo kurang dari 100 ribu
        if (saldo < 100000)
        {
            cout << "Saldo anda tidak cukup" << endl;
            break;
        }

        saldo = saldo - 100000;
        cout << "Saldo anda tersisa: " << saldo << endl;
        break;

    // Jika pilihan adalah fitur 2
    case 2:
        // Saldo tidak akan dikurangi jika saldo kurang dari 200 ribu
        if (saldo < 200000)
        {
            cout << "Saldo anda tidak cukup" << endl;
            break;
        }

        saldo = saldo - 200000;
        cout << "Saldo anda tersisa: " << saldo << endl;
        break;

    // Jika pilihan adalah Fitur 3
    case 3:
        // Saldo tidak akan dikurangi jika saldo kurang dari 300 ribu
        if (saldo < 300000)
        {
            cout  << "Saldo anda tidak cukup" << endl;
            break;
        }

        saldo = saldo - 300000;
        cout << "Saldo anda tersisa: " << saldo << endl;
        break;

    // Jika pilihan adalah fitur 4
    case 4:
        // Saldo tidak akan dikurangi jika saldo kurang dari 1 juta
        if (saldo < 1000000)
        {
            cout << "Saldo anda tidak cukup" << endl;
            break;
        }

        saldo = saldo - 1000000;
        cout << "Saldo anda tersisa: " << saldo << endl;
        break;

    // Jika pilihan adalah fitur 5
    case 5:
        //Saldo tidak akan dikurangi jika saldo kurang dari 1 juta 500 ribu
        if (saldo < 1500000) 
        {
            cout << "saldo anda tidak cukup" << endl;
            break;
        }

        saldo = saldo - 1500000;
        cout << "Saldo anda tersisa: " << saldo << endl;
        break;

    // Jika pilihan adalah fitur 6
    case 6:
        int jml; // Deklarasi variabel jml
        cout << "Masukkan jumlah yang ingin anda tarik: ";
        cin >> jml; // Input variabel jml

        // Saldo tidak akan dikurangi jika saldo kurang dari variabel jml yang di input
        if (saldo < jml)
        {
            cout << "Saldo anda tidak cukup" << endl;
            break;
        }

        saldo = saldo - jml;
        cout << "Saldo anda tersisa: " << saldo << endl;
        break;

    // Jika pilihan adalah fitur 7
    case 7:
        int nominal; // Deklarasi variabel nominal
        cout << "Masukkan nominal yang ingin anda tambah: ";
        cin >> nominal; // Input variabel nominal

        saldo = saldo + nominal;
        cout << "Saldo anda tersisa: " << saldo << endl;
        break;

    // Jika pilihan adalah fitur 8
    case 8:
        cout << "Saldo anda: " << saldo << endl;
        break;

    // Jika pilihan tidak sesuai dengan fitur yang tersedia
    default:
        cout << "tidak ada pilihan yang anda pilih" << endl;
        break;
    }

    // Program selesai
}