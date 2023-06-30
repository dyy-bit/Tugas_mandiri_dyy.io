// kode3.16.cpp
#include <iostream>
int main()
{
using namespace std;
int nilai = 6; // mendeklarasikan suatu variabel
int * p_nilai; // mendeklarasikan pointer ke suatu int
p_nilai = &nilai; // menugaskan alamat suatu int ke pointer
// mengekspressikan nilai-nilai dengan dua cara
cout << "nilai = " << nilai;
cout << ", *p_nilai = " << *p_nilai << endl;
// mengekspressikan alamat dengan dua cara
cout << "alamat &nilai = " << &nilai;
cout << ", p_nilai = " << p_nilai << endl;
// menggunakan pointer untuk merubah nilai
*p_nilai = *p_nilai + 1;
cout << "Sekarang nilai = " << nilai << endl;
cout << "Sekarang alamat &nilai = " << &nilai << endl;
return 0;
}
