// kode3.23.cpp
#include <iostream>
#include <cstring> // atau string.h
using namespace std;
char * getnama(void); // prototipe fungsi
int main()
{
    char * nama; // menciptakan pointer tapi tidak ada alokasi memori
    nama = getnama(); // menugaskan alamat string pointer nama
    cout << nama << "beralamat pada " << (int *) nama << "\n";
    delete [] nama; // memori dibebaskan
    nama = getnama(); // memakai kembali memori yang dibebaskan
    cout << nama << "beralamat pada " << (int *) nama << "\n";
    delete [] nama; // memori dibebaskan lagi
    return 0;
}
char * getnama() // menghasilkan pointer ke string baru
{
    char temp[80]; // penyimpanan sementara
    cout << "Masukkan nama terakhir: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp); // menggandakan string lebih kecil
    return pn; // penyimpanan sementara terhapus ketika fungsi berakhir
}