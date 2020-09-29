#include <bits/stdc++.h>
using namespace std;

class NSX
{
private:
    string MaNSX;
    string TenNSX;
    string DCNSX;
public:
    friend class Hang;
};

class Hang
{
private:
    string MaHang;
    string TenHang;
    long DonGia;
    int TrongLuong;
    NSX x;
public:
    void Nhap();
    void Xuat();
};

void Hang::Nhap()
{
    fflush(stdin);
    cout<<"Nhap ma hang: ";     getline( cin, MaHang);
    cout<<"Nhap ten hang: ";    getline( cin, TenHang);
    cout<<"Nhap don gia: ";     cin>>DonGia;
    cout<<"Nhap trong luong: "; cin>>TrongLuong;
    cout<<"Nhap thong tin nha san xuat: "<<endl;
    cout<<"\tNhap ma NSX: ";        fflush(stdin);      getline( cin, x.MaNSX);
    cout<<"\tNhap ten NSX: ";       fflush(stdin);      getline( cin, x.TenNSX);
    cout<<"\tNhap dia chi NSX: ";   fflush(stdin);      getline( cin, x.DCNSX);
}

void Hang::Xuat()
{
    cout<<"-----------------Diplay----------------"<<endl;
    cout<<"Ma hang: "<<MaHang<<endl;
    cout<<"Ten hang: "<<TenHang<<endl;
    cout<<"Don gia: "<<DonGia<<endl;
    cout<<"Trong luong: "<<TrongLuong<<endl;
    cout<<"Ma NSX: "<<x.MaNSX<<endl;
    cout<<"Ten NSX: "<<x.TenNSX<<endl;
    cout<<"Dia chi NSX: "<<x.DCNSX<<endl;
}

int main(int argc, char const *argv[])
{
    Hang A;
    A.Nhap();
    A.Xuat();
    return 0;
}
