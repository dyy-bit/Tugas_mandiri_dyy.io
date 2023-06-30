// kode3.18.cpp

#include <iostream>
int main()
{
    using namespace std;
    int * pt = new int; // alokasi memori untuk suatu int
    *pt = 1001; // simpan suatu nilali di sana
    cout << "nilai ";
    cout << "int = " << *pt << ": lokasi = " << pt << endl;
    double * pd = new double; // alokasi memori untuk suatu double
    *pd = 10000001.0; // simpan suatu nilai di sana
    cout << "nilai";
    cout << "double" << *pd << ": lokasi = " << pd << endl;
    cout << "ukuran pt = " << sizeof(pt);
    cout << "ukuran *pt = " << sizeof(*pt) << endl;
    cout << "ukuran pd = " << sizeof pd;
    cout << "ukuran *pd = " << sizeof(*pd) << endl;
    return 0; 
}