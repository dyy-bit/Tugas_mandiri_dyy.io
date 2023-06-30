// kode3.19.cpp

#include <iostream>
int main()
{

    using namespace std;
    double * p3 = new double [3]; // memori untuk 3 douoble
    p3[0] = 0.2; // memperlakukan p3 layaknya suatu array
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] adalah " << p3[1] << ".\n";
    p3 = p3 + 1; // inkremen pointer
    cout << "Sekarang p3[0] adalah " << p3[0] << "dan ";
    cout << "p3[1] adalah " << p3[1] << ".\n";
    p3 = p3 - 1; // menunjukan kembali ke awal
    delete [] p3; // membebaskan memori
    return 0;
}
