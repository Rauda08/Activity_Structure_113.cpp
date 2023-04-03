#include <iostream>
using namespace std;

struct mahasiswa
{
    string NIM
        string nama;
    string alamat;
    int umur;
};


int main() {
    mahasiswa mhs1, mhs2;

    mhs1.NIM = "20220140113";
    mhs1.nama = "Raudatul Jannah";
    mhs1.alamat = "Pangkalan Kerinci";
    mhs1.umur = 20;
    
    cout << "Masukan NIM :";
    cin >> mhs2.NIM;
    cout << "Masukan Nama :";
    cin >> mhs2.nama;
    cout << "Masukan Alamat :";
    cin >> mhs2.alamat;
    cout << "Masukan Umur: ";
    cin >> mhs2.umur;

    cout << "\nNIM = " << mhs1.NIM;
    cout << "\nNama = " mhs1.nama;
    cout << "\nAlamat = " << mhs1.alamat;
    cout << "\nUmur = " << mhs1.umur;

    cout << "\nNIM = " << mhs2.NIM;
    cout << "\nNama = " << mhs2.nama;
    cout << "\nAlamat = " << mhs2.alamat;
    cout << "\nUmur = " << mhs2.umur;


}
{
    std::cout << "Hello World!\n";
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
