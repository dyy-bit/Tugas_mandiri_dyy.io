// kode3.21.cpp

#include <iostream>
#include <cstring> // mendeklarasi strlen(), strcpy
int main()
{
    using namespace std;
    char binatang[20] = "beruang"; // binatang memuat beruang
    const char * burung = "cendrawasih"; // burung memuat alamat string
    char * ps; // tidak diinisialisasi
    cout << binatang << " dan "; // menampilkan beruang
    cout << burung << "\n"; // menampilkan cendrawasih
    // cout << ps << "\n"; // bisa menyebabkan crash
    cout << "Memasukkan nama seekor binatang: ";
    cin >> binatang; // ok jika massukan < 20 karakter
    // cin >> ps; Kesalahan besar! pointer ps tidak menunjukkan ke memori yang teralokasi
    ps = binatang; // menetapkan pointer ps menunjukan binatang
    cout << binatang << "beralamat pada " << (int *) binatang << endl;
    cout << "Sebelum menggunakan strcpy() :\n";
    cout << binatang << "beralamat pada " << (int *) binatang << endl;
    cout << ps << "beralamat pada " << (int *) ps << endl;
    ps = new char[strlen(binatang) + 1]; // dapatkan penyimpanan baru
    cout << "Setelah penggunaan strcpy():\n";
    cout << binatang << "beralamat pada " << (int *) binatang << endl;
    delete[]ps;
    return 0;
}