// kode3.17.cpp

#include <iostream>

int main()
{
    using namespace std;
    int martin = 5;
    int * pt = &martin;
    cout << "Nilai martin = " << martin
    << "; Alamat martin = " << &martin << endl;
    cout << "Nilai *pt = " << *pt
    << "; Nilai pt = " << pt << endl;
    return 0;
}