// kode3.20.cpp

#include <iostream>
int main()

{
    using namespace std;
    double gaji [3] = { 10000.0 , 20000.0 , 30000.0 };
    short antrian [3] = { 3 , 2 , 1 };
    // Terdapat dua cara untuk mendapatkan alamat suatu array
    double * pw = gaji; // nama suatu array = alamat element pertama suatu array
    short * ps = & antrian [0]; // atau gunakan operator alamat
    // gunakan element array
    cout << "pw = " << ",*p = " << *pw << endl;
    pw = pw + 1;
    cout << "tambahkan pada pointer pw : \n ";
    cout << "pw = " << pw << " , * pw = " << * pw << "\n\n";
    cout << "ps = " << ps << " , * ps = " << * ps << endl;
    ps = ps + 1;
    cout << "tambahkan pada pointer ps : \n ";
    cout << "ps = " << ps << " , * ps = " << * ps << "\n\n";
    cout << "akses dua element dengan notasi array \n ";
    cout << "antrian [0] = " << antrian [0]
    << " , antrian [1] = " << antrian << endl;
    cout << "akses dua element dengan notasi pointer \n";
    cout << " * antrian = " << * antrian
    << " * (antrian + 1) = " << (antrian + 1) << endl;
    cout << sizeof (gaji) << " = ukuran array gaji \n ";
    cout << sizeof (pw) << " = ukuran pointer pw \n ";
    return 0;
}