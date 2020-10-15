#include <bits/stdc++.h>

using namespace std;

class NCC
{
private:
    string MaNCC;
    string TenNCC;
    string DiaChi;
    long SDT;
public:
    void nhap();
    void xuat();
    friend class Phieu;
};

void NCC::nhap()
{
    fflush(stdin);
    cout<<"Nhap ma nha cung cap:  ";     getline( cin, MaNCC);
    cout<<"Nhap ten nha cung cap: ";     getline( cin, TenNCC);
    cout<<"Nhap dia chi:          ";     getline( cin, DiaChi);
    cout<<"Nhap Sdt:              ";     cin>>SDT;
}

void NCC::xuat()
{
    cout<<"Ma nha cung cap: "<<MaNCC<<setw(20)<<"Ten nha cung cap: "<<TenNCC<<endl;
    cout<<"Dia chi: "<<DiaChi<<setw(25)<<"SDT: "<<SDT<<endl;
}
//End class NCC

class SP
{
    string MaSP;
    string TenSP;
    int SL;
    long DG;
    long TT;
public:
    void nhap();
    void xuat();
    friend class Phieu;
};

void SP::nhap()
{
    fflush(stdin);
    cout<<"\tNhap ma SP: ";     getline( cin, MaSP);
    cout<<"\tNhap ten SP: ";    getline( cin, TenSP);
    cout<<"\tNhap so luong: ";  cin>>SL;
    cout<<"\tNhap don gia: ";   cin>>DG;
    TT = SL*DG;
}

void SP::xuat()
{
    cout<<MaSP<<setw(10)<<TenSP<<setw(20)<<SL<<setw(15)<<DG<<setw(15)<<TT<<endl;
}
//end  class SP

class Phieu
{
private:
    string MaPhieu;
    string ngaylap;
    NCC X;
    SP * Y;
    int n;
public:
    void nhap();
    void xuat();
};

void Phieu::nhap()
{
    fflush(stdin);
    cout<<"Nhap ma phieu: ";    getline( cin, MaPhieu);
    cout<<"Nhap ngay lap: ";    getline( cin, ngaylap);
    X.nhap();
    cout<<"Nhap so SP: ";           cin>>n;
    Y = new SP[n];
    for ( int i = 0; i < n; i++)
    {
        cout<<"Nhap SP thu "<<i+1<<endl;
        Y[i].nhap();
    }
}

void Phieu::xuat()
{
    cout<<endl;
    cout<<"Dai hoc Victory"<<endl;
    cout<<"\t\t\tPHIEU NHAP VAN PHONG THAM"<<endl;
    cout<<"Ma phieu:"<<setw(20)<<MaPhieu<<setw(15)<<"Ngay lap: "<<ngaylap<<endl;
    X.xuat();
    cout<<"Ma SP"<<setw(15)<<"Ten san pham"<<setw(20)<<"So luong"<<setw(15)<<"Son gia"<<setw(15)<<"Thanh tien"<<endl;
    for ( int i = 0; i < n; i++)
    {
        Y[i].xuat();
    }
}

int main()
{
    //cout << "Hello world!" << endl;
    Phieu A;
    A.nhap();
    A.xuat();
    return 0;
}
