#include <iostream>
#include <string.h>
#include <iomanip> 
using namespace std;

class NSX
{
private:
    string MaNSX;
    string TenNSX;
    string DcNSX;
public:
    void NHAP();
    void XUAT();
    friend class HANG;
};

void NSX::NHAP()
{
    fflush(stdin);
    cout<<"Nhap Ma NSX: ";    getline( cin, MaNSX);
    cout<<"Nhap Ten NSX: ";    getline( cin, TenNSX);
    cout<<"Nhap Dia chi NSX: ";    getline( cin, DcNSX);
}

void NSX::XUAT()
{
   cout<<setw(15)<<MaNSX<<setw(15)<<TenNSX<<setw(15)<<DcNSX<<endl; 
}

class HANG
{
private:
    string MaHang;
    string TenHang;
    NSX x;
public:
    void NHAP();
    void XUAT();
};

void HANG::NHAP()
{
    fflush(stdin);
    cout<<"Nhap Ma Hang: ";     getline( cin, MaHang);
    cout<<"Nhap Ten Hang: ";     getline( cin, TenHang);
    x.NHAP();
}

void HANG::XUAT()
{
    cout<<MaHang<<setw(15)<<TenHang; x.XUAT();
    //cout<<setw(15)<< (x.MaNSX)<<setw(15)<< (x.TenNSX)<<setw(15)<<( x.DcNSX)<<endl;
}

int main(int argc, char const *argv[])
{
    HANG X;
    X.NHAP();
    X.XUAT();
    return 0;
}
