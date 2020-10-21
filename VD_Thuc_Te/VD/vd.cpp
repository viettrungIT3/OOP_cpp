#include <bits/stdc++.h>
using namespace std;

class Hang
{
    string MAHANG;
    string TENHANG;
    long DONGIA;
    string NSX;
public:
    void NHAP();
    void XUAT();
};

void Hang::NHAP()
{
    cout<<"Nhap ma hang: ";     getline( cin, MAHANG);
    cout<<"Nhap ten hang: ";     getline( cin, TENHANG);
    cout<<"Nhap don gia: ";     getline( cin, DONGIA);
    cout<<"Nhap NSX: ";     getline( cin, NSX);
}

void Hang::XUAT()
{
    cout<<setw(10)<<MAHANG<<setw(20)<<setw(20)<<TENHANG<<setw(20)<<DONGIA<<set(20)<<NSX<<endl;
}


int main(int argc, char const *argv[])
{
    Hang *a, int n;
    a.NHAP();
    a.XUAT();
    return 0;
}

