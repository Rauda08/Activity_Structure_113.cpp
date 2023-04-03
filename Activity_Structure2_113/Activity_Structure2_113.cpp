#include <iostream>
using namespace std;

struct AlamatDetail
{
    string desa;
    string kota;
};

struct Mahasiswa
{
    string NIM;
    string nama;
    AlamatDetail alamat;
    int umur;
};


int main() {
    Mahasiswa mhs;

    cout << "Masukan NIM :";
    cin >> mhs.NIM;
    cout << "Masukan Nama :";
    cin >> mhs.nama;
    cout << "Alamat :";
    cout << "\n\tMasukan Desa :";
    cin >> mhs.alamat.desa;
    cout << "\tMasukan Kota :";
    cin >> mhs.alamat.kota;
    cout << "Masukan Umur : ";
    cin >> mhs.umur;

    cout << "\nNIM = " << mhs.NIM;
    cout << "\nNama = " << mhs.nama;
    cout << "\nAlamat = " << mhs.alamat.desa;
    cout << "\nAlamat = " << mhs.alamat.kota;
    cout << "\nUmur = " << mhs.umur;
}