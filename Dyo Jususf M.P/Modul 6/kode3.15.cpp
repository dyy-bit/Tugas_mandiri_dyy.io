// kode3.15.cpp

#include <iostream>

int main ()

{
    using namespace std;
    int cangkir = 6;
    double kue = 4.5;
    cout << "nilai cangkir = " << cangkir;
    cout << "dan alamat cangkir = " << &cangkir << endl;
    // CATATAN: anda mungkin membutuhkan unsigned (&cangkir)
    // dan unsigned (&kue)

    cout << "nilai kue = " << kue;
    cout << "dan alamat kue = " << &kue << endl;
    return 0;
}