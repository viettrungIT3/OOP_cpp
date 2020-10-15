#include <bits/stdc++.h>
using namespace std;

class NCC
{
private:
    string MaNCC;
    string TenNCC;
    string DiaChi;
public:
    void Nhap();
    void Xuat();
    friend class Phieu;
};

void NCC::Nhap()
{
    fflush(stdin);
    cout<<"Nhap ma cung cap: ";         getline( cin, MaNCC);
    cout<<"Nhap ten nha cung cao: ";    getline(cin, TenNCC);
    cout<<"Nhap dia chi: ";             getline( cin, DiaChi);
}

void NCC::Xuat()
{
    cout<<"Ma NCC: "<<MaNCC<<setw(15)<<"Ten NCC: "<<TenNCC<<endl;
    cout<<"Dia chi: "<<DiaChi<<endl;
}

class Hang
{
private:
    string TenHang;
    long DG;
    int SL;
    long TT;
public:
    void Nhap();
    void Xuat();
    friend class Phieu;
};

void Hang::Nhap()
{
    fflush(stdin);
    cout<<"\tNhap Ten hang: ";      getline( cin, TenHang);
    cout<<"\tNhap don gia: ";       cin>>DG;
    cout<<"\tNhap so luong: ";      cin>>SL;
    //TT = SL*DG;
}

void Hang::Xuat()
{
    cout<<TenHang<<setw(20)<<DG<<setw(15)<<SL<<setw(15)<<SL*DG<<endl;
}

class Phieu
{
private:
    string MaPhieu;
    string NgayLap;
    NCC X;
    Hang *Y;
    int n;
public:
    void Nhap();
    void Xuat();
};

void Phieu::Nhap()
{
    fflush(stdin);
    cout<<"Nhap ma phieu: ";    getline( cin, MaPhieu);
    cout<<"Nhap ngay lap: ";    getline( cin, NgayLap);
    X.Nhap();
    cout<<"Nhap n = ";  cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap mat hang thu "<<i+1<<endl;
        Y[i].Nhap();
    }
}

void Phieu::Xuat()
{
    cout<<"Ma Phieu: "<<MaPhieu<<setw(15)<<"Ngay Lap: "<<NgayLap<<endl;
    X.Xuat();
    cout<<"TenHang"<<setw(20)<<"DonGia"<<setw(15)<<"So Luong"<<setw(15)<<"Tong tien"<<endl;
    for (int i = 0; i < n; i++)
    {
        Y[i].Xuat();
    }
    long sumTT = 0;
    for (int i = 0; i < n; i++)
    {
        sumTT += (Y[i].SL)*(Y[i].DG);
    }
    cout<<"Cong thanh tien: "<<sumTT<<endl;
}

int main(int argc, char const *argv[])
{
    Phieu A;
    A.Nhap();
    A.Xuat();
    return 0;
}
