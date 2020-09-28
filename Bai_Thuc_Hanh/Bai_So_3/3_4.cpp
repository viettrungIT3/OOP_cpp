#include <bits/stdc++.h>
using namespace std;

class QuanLy
{
private:
    string MaQL;
    string HoTen;
public:
    void Nhap();
    void Xuat();
    friend class PhongMay;
};

void QuanLy::Nhap()
{
    fflush(stdin);
    cout<<"Nhap Ma Quan Ly: ";      getline( cin, MaQL);
    cout<<"Nhap Ho va Ten: ";       getline( cin, HoTen);
}

void  QuanLy::Xuat()
{
    cout<<"Thong tin quan ly: "<<endl;
    cout<<"Ma quan ly:"<<MaQL<<endl;
    cout<<"Ho va ten"<<HoTen<<endl;
}

class May
{
private:
    string MaMay;
    string KieuMay;
    string TinhNang;
public:
    void Nhap();
    void Xuat();
    friend class PhongMay;
};

void May::Nhap()
{
    fflush(stdin);
    cout<<"\tNhap Ma May: ";      getline( cin, MaMay);
    cout<<"\tNhap Kieu May: ";       getline( cin, KieuMay);
    cout<<"\tNhap Tinh Nang: ";       getline( cin, TinhNang);
}

void May::Xuat()
{
    cout<<setw(15)<<MaMay<<setw(20)<<KieuMay<<setw(25)<<TinhNang<<endl;
}

class PhongMay
{
private:
    string MaPhong;
    string TenPhong;
    int DienTich;
    QuanLy x;
    May *y;
    int n;
public:
    void Nhap();
    void Xuat();
};

void PhongMay::Nhap()
{
    fflush(stdin);
    cout<<"Nhap Ma Phong: ";    getline( cin, MaPhong);
    cout<<"Nhap Ten Phong: ";    getline( cin, TenPhong);
    cout<<"Nhap Dien Tich Phong: ";     cin>>DienTich;
    x.Nhap();
    cout<<"Nhap n: ";   cin>>n;
    y = new May[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap may "<<i+1<<endl;
        y[i].Nhap();
    }
}

void PhongMay::Xuat()
{
    cout<<"-------------------Show-----------------"<<endl;
    cout<<"Ma Phong: "<<MaPhong<<endl;
    cout<<"Ten Phong: "<<TenPhong<<" m2"<<endl;
    cout<<"Dien Tich: "<<DienTich<<endl;
    x.Xuat();
    cout<<setw(15)<<"Ma May"<<setw(20)<<"Kieu May"<<setw(25)<<"Tinh Nang"<<endl;
    for (int i = 0; i < n; i++)
    {
        y[i].Xuat();
    }
    
}

int main(int argc, char const *argv[])
{
    PhongMay A;
    A.Nhap();
    A.Xuat();
    return 0;
}
