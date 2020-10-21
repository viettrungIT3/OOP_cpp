#include <bits/stdc++.h>
using namespace std;

class Hang
{
private:
    string TenHang;
    int DonGia;
    int SL;
public:
    void Nhap();
    void Xuat();
    friend class Phieu;
};

void Hang::Nhap()
{
    cout<<"\tNhap ten hang: ";      fflush(stdin);      getline( cin, TenHang);
    cout<<"\tNhap don gia:  ";      cin>>DonGia;
    cout<<"\tnhap so luong: ";      cin>>SL;
}

void Hang::Xuat() 
{
    cout<<setw(15)<<TenHang<<setw(15)<<DonGia<<setw(15)<<SL<<setw(15)<<DonGia*SL<<endl;
}

class Phieu
{
private:
    string MaPhieu;
    string NgayLap;
    Hang *x;
    int n;
public:
    void Nhap();
    void Xuat();
};

void Phieu::Nhap()
{
    cout<<"Nhap ma phieu: ";    fflush(stdin);      getline( cin, MaPhieu);
    cout<<"Nhap ngay lap: ";    fflush(stdin);      getline( cin, NgayLap);
    cout<<"Nhap so hang n = ";  cin>>n;
    x = new Hang[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap mat hang thu "<<i+1<<endl;
        x[i].Nhap();
    }
}

void Phieu::Xuat()
{
    cout<<setw(30)<<"PHIEU MUA HANG"<<endl;
    cout<<"Ma phieu: "<<MaPhieu<<setw(25)<<"Ngay lap: "<<NgayLap<<endl;
    cout<<setw(15)<<"TenHang"<<setw(15)<<"DonGia"<<setw(15)<<"So Luong"<<setw(15)<<"Thanh tien"<<endl;
    for (int i = 0; i < n; i++)
    {
        x[i].Xuat();
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += x[i].DonGia*x[i].SL;
    }
    cout<<"Cong thanh tien: "<<sum<<endl;
}


int main(int argc, char const *argv[])
{
    Phieu A;
    A.Nhap();
    A.Xuat();
    return 0;
}
