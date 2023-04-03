#include <iostream>
using namespace std;

struct AlamatDetail
{
    char desa[20];
    char kota[20];
};

struct mahasiswa
{
    char NIM[12];
    char nama[25];
    AlamatDetail alamat;
    int umur;
};


int main() {
    mahasiswa mhs[3];

    for (int i = 0; i < 3; i++) {
        cout << "Masukan NIM :";
        cin.getline(mhs[i].NIM, 12);
        cout << "Masukan Nama :";
        cin.getline(mhs[i].nama, 25);
        cout << "Alamat :";
        cout << "\n\tMasukkan Desa :";
        cin.getline(mhs[i].alamat.desa, 20);
        cout << "\n\tMasukan Kota ;";
        cin.getline(mhs[i].alamat.kota, 20);
        cout << "Masukan Umur :";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "\n\nNIM = " << mhs[i].NIM;
        cout << "\nNama =" << mhs[i].nama;
        cout << "\nDesa = " << mhs[i].alamat.desa;
        cout << "\nKota = " << mhs[i].alamat.kota;
        cout << "\nUmur = " << mhs[i].umur;
    }
};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
