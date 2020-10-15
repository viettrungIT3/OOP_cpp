#include <bits/stdc++.h>
using namespace std;

class NhanVien
{
private:
    string TenNV;
    string CV;
public:
    void Nhap() {
        fflush(stdin);
        cout<<"Nhap ten nhan vien: ";       getline( cin, TenNV);
        cout<<"Nhap chuc vu: ";             getline( cin, CV);
    }
    void Xuat() {
        cout<<"Nhan vien kiem ke: "<<TenNV<<setw(20)<<"Chuc vu: "<<CV<<endl;
    }
    friend class Phieu;
};

class Phong
{
private:
    string TenPhong;
    string MaPhong;
    string TP;
public:
    void Nhap() {
        fflush(stdin);
        cout<<"Nhap Ten Phong: ";           getline( cin, TenPhong);
        cout<<"Nhap Ma Phong: ";            getline( cin, MaPhong);
        cout<<"Nhap Truong Phong: ";        getline( cin, TP);
    }
    void Xuat() {
        cout<<"Kiem ke tai phong: "<<MaPhong<<setw(15)<<"Ma phong:"<<MaPhong<<endl;
        cout<<"Truong phong: "<<endl;
    }
    friend class Phieu;
};

class TaiSan
{
private:
    string TenTaiSan;
    int SL;
    string TinhTrang;
public:
    void Nhap() {
        fflush(stdin);
        cout<<"Nhap ten tai san: ";     getline( cin, TenTaiSan);
        cout<<"Nhap so luong: ";        cin>>SL;    fflush(stdin);
        cout<<"Nhap tinh trang: ";      getline( cin, TinhTrang);
    }
    void Xuat() {
        cout<<setw(20)<<left<<TenTaiSan<<setw(20)<<left<<SL<<setw(20)<<left<<TinhTrang<<endl;
    }
    friend class Phieu;
};

class Phieu
{
private:
    string MaPhieu;
    string Day;
    NhanVien X;
    Phong Y;
    TaiSan * Z;
    int n;

public:
    void Nhap();
    void Xuat();
};

void Phieu::Nhap()
{
    fflush(stdin);
    cout<<"Nhap ma Phieu: ";        getline( cin, MaPhieu);
    cout<<"Nhap ngay kiem ke: ";    getline( cin, Day);
    X.Nhap();
    Y.Nhap();
    cout<<"Nhap n= ";       cin>>n;
    Z = new TaiSan[n];
    for (int i = 0; i < n; i++)
    {
        Z[i].Nhap();
    }
    cout<<endl;
}

void Phieu::Xuat()
{
    cout<<setw(30)<<"PHIEU KIEM KE TAI SAN"<<endl;
    cout<<"Ma phieu: "<<MaPhieu<<setw(20)<<"Ngay kiem ke: "<<Day<<endl;
    X.Xuat();
    Y.Xuat();
    cout<<setw(20)<<left<<"TenTaiSan"<<setw(20)<<left<<"SL"<<setw(20)<<left<<"TinhTrang"<<endl;
    for (int i = 0; i < n; i++)
    {
        Z[i].Xuat();
    }
    cout<<"So tai san da kiem ke"<<n;
    int sumSL = 0;
    for (int i = 0; i < n; i++)
    {
        sumSL = Z[i].SL;
    }
    cout<<"\t\tTong so luong: "<<sumSL;
}

int main(int argc, char const *argv[])
{
    Phieu A;
    A.Nhap();
    A.Xuat();
    return 0;
}
