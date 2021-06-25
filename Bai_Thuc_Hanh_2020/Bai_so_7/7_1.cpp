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
    cout<<"Nhap ngay: ";    cin>>D;
    cout<<"Nhap thang: ";   cin>>M;
    cout<<"Nhap nam: ";     cin>>Y;
}

void Date::Xuat()
{
    cout<<"Ngay nhap: "<<D<<"/"<<M<<"/"<<Y<<endl;
}

class NSX
{
private:
    string tenNSX;
    string diaChi;
public:
    void Nhap();
    void Xuat();
    friend class  Hang;
};

void NSX::Nhap()
{
    cout<<"Nhap ten NSX: ";     fflush(stdin);  getline( cin, tenNSX);
    cout<<"Nhap dia chi: ";     fflush(stdin);  getline( cin, diaChi);
}

void NSX::Xuat()
{
    cout<<"Ten NSX: "<<tenNSX<<setw(15)<<"Dia chi: "<<diaChi<<endl;
}

class  Hang
{
protected:
    string tenHang;
    NSX x;
    double donGia;
public:
     Hang();
    void Nhap();
    void Xuat();
};

 Hang:: Hang()
{
    tenHang = "";
    donGia = 0;
    x.tenNSX = "";
    x.diaChi = "";
}

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

class Tivi : public Hang
{
private:
    float kichThuoc;
    Date ngayNhap;
public:
    Tivi(/* args */) ;
    void Nhap();
    void Xuat();
};

Tivi::Tivi()
{

}

void Tivi::Nhap()
{
    Hang::Nhap();
    cout<<"Nhap kich thuoc: ";      cin>>kichThuoc;
    ngayNhap.Nhap();
}

void Tivi::Xuat()
{
    Hang::Xuat();
    cout<<"Kich thuoc: "<<kichThuoc<<endl;
    ngayNhap.Xuat();
}

int main(int argc, char const *argv[])
{
    Tivi K;
    K.Nhap();
    cout<<endl;
    K.Xuat();
    return 0;
}
