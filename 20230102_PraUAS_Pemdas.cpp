// 20230102_PraUAS_Pemdas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// L A T I H A N   P R A  U A S
// buatkan fungsi untuk konversi suhu derajat celcius, reamur, farenheit, kelvin   
// input:   2. masukkan pilihan satuan suhu awal (C, R, F, K)
//          1. masukkan nilai derajat suhu tersebut
//          3. masukkan pilihan satuan suhu konversi yang dituju (C, R, F, K)
//          4. OUTPUT: deskripsi konversi nilai
// jadikan 3 inputan tersebut menjadi parameter dari fungsi tersebut
// -------------------------------------------------------------------------------

float konversiSuhu(char _unit1, float _nilai, char _unit2) {
    float nilaiKonv = _nilai;

    if (_unit1 == 'C')
    {
        if (_unit2 == 'R')
        {
            nilaiKonv = 4 * _nilai / 5;
        }
        else if (_unit2 == 'F')
        {
            nilaiKonv = 9 * _nilai / 5 + 32;
        }
        else if (_unit2 == 'K')
        {
            nilaiKonv = _nilai + 273.15;
        }
        else
        {
            return nilaiKonv;
        }
    }
    else if (_unit1 == 'R')
    {
        if (_unit2 == 'C')
        {
            nilaiKonv = 5 * _nilai / 4;
        }
        else if (_unit2 == 'F')
        {
            nilaiKonv = 9 * _nilai / 4 + 32;
        }
        else if (_unit2 == 'K')
        {
            nilaiKonv = 5 * _nilai / 4 + 273.15;
        }
        else
        {
            return nilaiKonv;
        }
    }
    else if (_unit1 == 'F')
    {
        if (_unit2 == 'C')
        {
            nilaiKonv = (_nilai - 32) * 5 / 9;
        }
        else if (_unit2 == 'R')
        {
            nilaiKonv = (_nilai - 32) * 4 / 9;
        }
        else if (_unit2 == 'K')
        {
            nilaiKonv = (_nilai - 32) * 5 / 9 + 273.15;
        }
        else
        {
            return nilaiKonv;
        }
    }
    else if (_unit1 == 'K')
    {
        if (_unit2 == 'C')
        {
            nilaiKonv = _nilai - 273.15;
        }
        else if (_unit2 == 'R')
        {
            nilaiKonv = (_nilai - 273.15) * 4 / 5;
        }
        else if (_unit2 == 'F')
        {
            nilaiKonv = (_nilai - 273.15) * 9 / 5 + 32;
        }
        else
        {
            return nilaiKonv;
        }
    }
    return nilaiKonv;
}

void Suhu() {
    char unit1, unit2;
    float nilai;
    cout << "Masukkan unit awal suhu (C/R/F/K): ";
    cin >> unit1;
    cout << "Masukkan nilai suhu: ";
    cin >> nilai;
    cout << "Masukkan unit konversi suhu (C/R/F/K): ";
    cin >> unit2;
    cout << nilai << unit1 << " = " << konversiSuhu(unit1, nilai, unit2) << unit2 << endl;
}

// buatkan fungsi untuk mengolah data nilai UAS dari sekian banyak mahasiswa
// sehingga menghasilkan satu nilai rata-rata
// input:   1. masukkan berapa banyak mahasiswa
//          2. masukkan nilai-nilai mahasiswa
//          3. OUTPUT: deskripsi rata-rata nilai mahasiswa
// jadikan 2 inputan tersebut menjadi parameter dari fungsi tersebut
// -------------------------------------------------------------------------------

float rataRata(int _banyak, float _nilai[]) {
    float hasil = 0, jumlah = 0;
    for (int i = 0; i < _banyak; i++)
    {
        jumlah += _nilai[i];
    }
    hasil = jumlah / _banyak;
    return hasil;
}

void Nilai() {
    float nilai[100];
    int n;
    cout << "Masukkan banyak mahasiswa: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai " << i + 1 << ": ";
        cin >> nilai[i];
    }
    cout << "Rata-rata nilainya adalah " << rataRata(n, nilai) << endl;
}

// buatkan aplikasi untuk mengulang pilihan menu utama setelah memilih salah satu menu tersebut
// - diberikan misalkan 3 pilihan menu
// - user memilih salah satu menu
// - setelah menu tersebut digunakan oleh user, di bagian paling akhir terdapat pertanyaan untuk kembali ke menu utama
// - jika memilih 'Y' maka program akan clear screen, dan menampilkan 3 pilihan menu sebelumnya
// - jika memilih 'N' maka program end
// - jika memilih selain 'Y' atau 'N' maka program akan menanyakan kembali untuk kembali ke menu utama
// -------------------------------------------------------------------------------

void Menu() {
    int opt1 = 0, opt2 = 0, opt3 = 0;

    do
    {
        system("cls");
        cout << "MENU UTAMA" << endl;
        cout << "1. 1.0" << endl;
        cout << "2. 2.0" << endl;
        cout << "3. 3.0" << endl;
        cout << "Pilihan Anda: ";
        cin >> opt1;

        if (opt1 == 1)
        {
            do
            {
                if (opt3 == 4) opt3 = 0;

                system("cls");
                cout << "MENU 1.0" << endl;
                cout << "1. 1.1" << endl;
                cout << "2. 1.2" << endl;
                cout << "3. 1.3" << endl;
                cout << "4. Kembali ke menu sebelumnya" << endl;
                cout << "Pilihan Anda: ";
                cin >> opt2;

                if (opt2 == 1)
                {
                    system("cls");
                    cout << "MENU 1.1" << endl;
                    cout << "1. 1.1.1" << endl;
                    cout << "2. 1.1.2" << endl;
                    cout << "3. 1.1.3" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << "Pilihan Anda: ";
                    cin >> opt3;
                }
                else if (opt2 == 2)
                {
                    system("cls");
                    cout << "MENU 1.2" << endl;
                    cout << "1. 1.2.1" << endl;
                    cout << "2. 1.2.2" << endl;
                    cout << "3. 1.2.3" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << "Pilihan Anda: ";
                    cin >> opt3;
                }
                else if (opt2 == 3)
                {
                    system("cls");
                    cout << "MENU 1.3" << endl;
                    cout << "1. 1.3.1" << endl;
                    cout << "2. 1.3.2" << endl;
                    cout << "3. 1.3.3" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << "Pilihan Anda: ";
                    cin >> opt3;
                }
            } while (opt3 == 4);
        }
        else if (opt1 == 2)
        {
            do
            {
                if (opt3 == 4) opt3 = 0;

                system("cls");
                cout << "MENU 2.0" << endl;
                cout << "1. 2.1" << endl;
                cout << "2. 2.2" << endl;
                cout << "3. 2.3" << endl;
                cout << "4. Kembali ke menu sebelumnya" << endl;
                cout << "Pilihan Anda: ";
                cin >> opt2;

                if (opt2 == 1)
                {
                    system("cls");
                    cout << "MENU 2.1" << endl;
                    cout << "1. 2.1.1" << endl;
                    cout << "2. 2.1.2" << endl;
                    cout << "3. 2.1.3" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << "Pilihan Anda: ";
                    cin >> opt3;
                }
                else if (opt2 == 2)
                {
                    system("cls");
                    cout << "MENU 2.2" << endl;
                    cout << "1. 2.2.1" << endl;
                    cout << "2. 2.2.2" << endl;
                    cout << "3. 2.2.3" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << "Pilihan Anda: ";
                    cin >> opt3;
                }
                else if (opt2 == 3)
                {
                    system("cls");
                    cout << "MENU 2.3" << endl;
                    cout << "1. 2.3.1" << endl;
                    cout << "2. 2.3.2" << endl;
                    cout << "3. 2.3.3" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << "Pilihan Anda: ";
                    cin >> opt3;
                }
            } while (opt3 == 4);
        }
        else if (opt1 == 3)
        {
            do
            {
                if (opt3 == 4) opt3 = 0;

                system("cls");
                cout << "MENU 3.0" << endl;
                cout << "1. 3.1" << endl;
                cout << "2. 3.2" << endl;
                cout << "3. 3.3" << endl;
                cout << "4. Kembali ke menu sebelumnya" << endl;
                cout << "Pilihan Anda: ";
                cin >> opt2;

                if (opt2 == 1)
                {
                    system("cls");
                    cout << "MENU 3.1" << endl;
                    cout << "1. 3.1.1" << endl;
                    cout << "2. 3.1.2" << endl;
                    cout << "3. 3.1.3" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << "Pilihan Anda: ";
                    cin >> opt3;
                }
                else if (opt2 == 2)
                {
                    system("cls");
                    cout << "MENU 1.2" << endl;
                    cout << "1. 3.2.1" << endl;
                    cout << "2. 3.2.2" << endl;
                    cout << "3. 3.2.3" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << "Pilihan Anda: ";
                    cin >> opt3;
                }
                else if (opt2 == 3)
                {
                    system("cls");
                    cout << "MENU 1.3" << endl;
                    cout << "1. 3.3.1" << endl;
                    cout << "2. 3.3.2" << endl;
                    cout << "3. 3.3.3" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << "Pilihan Anda: ";
                    cin >> opt3;
                }
            } while (opt3 == 4);
        }
    } while (opt2 == 4);
}

// buatkan aplikasi seperti pengisian ulang pulsa di USSD selular
// PENGISIAN ULANG PULSA
// 1. BULANAN
// 2. MINGGUAN
// 3. HARIAN
// pilihan anda:
// misalkan user memilih bulanan, maka selanjutnya akan muncul
// 1. Paket NETFLIX
// 2. Paket INTERNET FULL
// 3. Paket SOSIAL MEDIA
// 4. KEMBALI KE MENU SEBELUMNYA
// misalkan user memilih Paket NETFLIX, maka selanjutnya akan muncul
// 1. 20 GB
// 2. 10 GB
// 3. 5 GB
// 4. KEMBALI KE MENU SEBELUMNYA
// 
// DST, setiap pilihan lakukan sebanyak 3 level dan terdapat pilihan kembali ke menu utama
// 
//

void Pulsa() {
    int opt1 = 0, opt2 = 0, opt3 = 0;

    do
    {
        system("cls");
        cout << "-----------------------------" << endl;
        cout << "  USSD SELULAR - MENU UTAMA  " << endl;
        cout << "-----------------------------" << endl;
        cout << "Pilih Durasi Paket" << endl;
        cout << "1. HARIAN" << endl;
        cout << "2. MINGGUAN" << endl;
        cout << "3. BULANAN" << endl;
        cout << endl << "Pilihan Anda: ";
        cin >> opt1;

        if (opt1 == 1)
        {
            do
            {
                if (opt3 == 4) opt3 = 0;

                system("cls");
                cout << "-------------------------------" << endl;
                cout << "  USSD SELULAR - PAKET HARIAN  " << endl;
                cout << "-------------------------------" << endl;
                cout << "Pilih Jenis Paket" << endl;
                cout << "1. Paket MULTIMEDIA" << endl;
                cout << "2. Paket SOCIAL MEDIA" << endl;
                cout << "3. Paket INTERNET" << endl;
                cout << "4. Kembali ke menu sebelumnya" << endl;
                cout << endl << "Pilihan Anda: ";
                cin >> opt2;

                if (opt2 == 1)
                {
                    system("cls");
                    cout << "------------------------------------------" << endl;
                    cout << "  USSD SELULAR - PAKET MULTIMEDIA HARIAN  " << endl;
                    cout << "------------------------------------------" << endl;
                    cout << "Pilih Jumlah Kuota" << endl;
                    cout << "1. 100 MB" << endl;
                    cout << "2. 500 MB" << endl;
                    cout << "3. 1 GB" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << endl << "Pilihan Anda: ";
                    cin >> opt3;
                }
                else if (opt2 == 2)
                {
                    system("cls");
                    cout << "--------------------------------------------" << endl;
                    cout << "  USSD SELULAR - PAKET SOCIAL MEDIA HARIAN  " << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << "Pilih Jumlah Kuota" << endl;
                    cout << "1. 100 MB" << endl;
                    cout << "2. 500 MB" << endl;
                    cout << "3. 1 GB" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << endl << "Pilihan Anda: ";
                    cin >> opt3;
                }
                else if (opt2 == 3)
                {
                    system("cls");
                    cout << "----------------------------------------" << endl;
                    cout << "  USSD SELULAR - PAKET INTERNET HARIAN  " << endl;
                    cout << "----------------------------------------" << endl;
                    cout << "Pilih Jumlah Kuota" << endl;
                    cout << "1. 100 MB" << endl;
                    cout << "2. 500 MB" << endl;
                    cout << "3. 1 GB" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << endl << "Pilihan Anda: ";
                    cin >> opt3;
                }
            } while (opt3 == 4);
        }
        else if (opt1 == 2)
        {
            do
            {
                if (opt3 == 4) opt3 = 0;

                system("cls");
                cout << "---------------------------------" << endl;
                cout << "  USSD SELULAR - PAKET MINGGUAN  " << endl;
                cout << "---------------------------------" << endl;
                cout << "Pilih Jenis Paket" << endl;
                cout << "1. Paket MULTIMEDIA" << endl;
                cout << "2. Paket SOCIAL MEDIA" << endl;
                cout << "3. Paket INTERNET" << endl;
                cout << "4. Kembali ke menu sebelumnya" << endl;
                cout << endl << "Pilihan Anda: ";
                cin >> opt2;

                if (opt2 == 1)
                {
                    system("cls");
                    cout << "--------------------------------------------" << endl;
                    cout << "  USSD SELULAR - PAKET MULTIMEDIA MINGGUAN  " << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << "Pilih Jumlah Kuota" << endl;
                    cout << "1. 1 GB" << endl;
                    cout << "2. 2 GB" << endl;
                    cout << "3. 5 GB" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << endl << "Pilihan Anda: ";
                    cin >> opt3;
                }
                else if (opt2 == 2)
                {
                    system("cls");
                    cout << "----------------------------------------------" << endl;
                    cout << "  USSD SELULAR - PAKET SOCIAL MEDIA MINGGUAN  " << endl;
                    cout << "----------------------------------------------" << endl;
                    cout << "Pilih Jumlah Kuota" << endl;
                    cout << "1. 1 GB" << endl;
                    cout << "2. 2 GB" << endl;
                    cout << "3. 5 GB" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << endl << "Pilihan Anda: ";
                    cin >> opt3;
                }
                else if (opt2 == 3)
                {
                    system("cls");
                    cout << "------------------------------------------" << endl;
                    cout << "  USSD SELULAR - PAKET INTERNET MINGGUAN  " << endl;
                    cout << "------------------------------------------" << endl;
                    cout << "Pilih Jumlah Kuota" << endl;
                    cout << "1. 1 GB" << endl;
                    cout << "2. 2 GB" << endl;
                    cout << "3. 5 GB" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << endl << "Pilihan Anda: ";
                    cin >> opt3;
                }
            } while (opt3 == 4);
        }
        else if (opt1 == 3)
        {
            do
            {
                if (opt3 == 4) opt3 = 0;

                system("cls");
                cout << "--------------------------------" << endl;
                cout << "  USSD SELULAR - PAKET BULANAN  " << endl;
                cout << "--------------------------------" << endl;
                cout << "Pilih Jenis Paket" << endl;
                cout << "1. Paket MULTIMEDIA" << endl;
                cout << "2. Paket SOCIAL MEDIA" << endl;
                cout << "3. Paket INTERNET" << endl;
                cout << "4. Kembali ke menu sebelumnya" << endl;
                cout << endl << "Pilihan Anda: ";
                cin >> opt2;

                if (opt2 == 1)
                {
                    system("cls");
                    cout << "-------------------------------------------" << endl;
                    cout << "  USSD SELULAR - PAKET MULTIMEDIA BULANAN  " << endl;
                    cout << "-------------------------------------------" << endl;
                    cout << "Pilih Jumlah Kuota" << endl;
                    cout << "1. 5 GB" << endl;
                    cout << "2. 10 GB" << endl;
                    cout << "3. 20 GB" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << endl << "Pilihan Anda: ";
                    cin >> opt3;
                }
                else if (opt2 == 2)
                {
                    system("cls");
                    cout << "---------------------------------------------" << endl;
                    cout << "  USSD SELULAR - PAKET SOCIAL MEDIA BULANAN  " << endl;
                    cout << "---------------------------------------------" << endl;
                    cout << "Pilih Jumlah Kuota" << endl;
                    cout << "1. 5 GB" << endl;
                    cout << "2. 10 GB" << endl;
                    cout << "3. 20 GB" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << endl << "Pilihan Anda: ";
                    cin >> opt3;
                }
                else if (opt2 == 3)
                {
                    system("cls");
                    cout << "-----------------------------------------" << endl;
                    cout << "  USSD SELULAR - PAKET INTERNET BULANAN  " << endl;
                    cout << "-----------------------------------------" << endl;
                    cout << "Pilih Jumlah Kuota" << endl;
                    cout << "1. 5 GB" << endl;
                    cout << "2. 10 GB" << endl;
                    cout << "3. 20 GB" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << endl << "Pilihan Anda: ";
                    cin >> opt3;
                }
            } while (opt3 == 4);
        }
    } while (opt2 == 4);
}

int main()
{
    Pulsa();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
