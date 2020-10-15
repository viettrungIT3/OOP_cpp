#include <bits/stdc++.h>
using namespace std;

class Date
{
private:
    int D;
    int M;
    int Y;
public:
    void Nhap();
    void Xuat();
};

void Date::Nhap()
{
    cout<<"Nhap ngay thang nam( cach nhau boi dau cach: ";      cin>>D>>M>>Y;
}

void Date::Xuat()
{
    cout<<"Date: "<<D<<"/"<<M<<"/"<<Y<<endl;
}

class NSX
{
private:
    string tenNSX;
    string diaChi;
public:
    void Nhap();
    void Xuat();
};

void NSX::Nhap()
{
    cout<<"Nhap ten NSX: ";     fflush(stdin);      getline( cin, tenNSX);
    cout<<"Nhap dia chi: ";     fflush(stdin);      getline( cin, diaChi);
}

void NSX::Xuat()
{
    cout<<"Ten NSX: "<<tenNSX<<".\tDia chi: "<<diaChi<<endl;
}

class Hang
{
protected:
    string tenHang;
    NSX x;
    int donGia;
public:
    Hang(/* args */) {
	}
    void Nhap();
    void Xuat();
};

void Hang::Nhap()
{
    cout<<"Nhap ten hang: ";    fflush(stdin);  getline( cin, tenHang);
    x.Nhap();
    cout<<"Nhap don gia: ";     cin>>donGia;
}

void Hang::Xuat()
{
    cout<<"Ten hang: "<<tenHang<<endl;
    x.Xuat();
    cout<<"Don gia: "<<donGia<<endl;
}

class TIVI : public Hang
{
private:
    int kichThuoc;
    Date ngayNhap;
public:
    TIVI(/* args */){
	}
    void Nhap();
    void Xuat();
};

void TIVI::Nhap()
{
    Hang::Nhap();
    cout<<"Nhap kich thuoc: ";  cin>>kichThuoc;
    ngayNhap.Nhap();
}

void TIVI::Xuat()
{
    Hang::Xuat();
    cout<<"Kich thuoc: "<<kichThuoc<<endl;
    ngayNhap.Xuat();
}

int main()
{
    TIVI A;
    A.Nhap();
    A.Xuat();
    return 0;
}
