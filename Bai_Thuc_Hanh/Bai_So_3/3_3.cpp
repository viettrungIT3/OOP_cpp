#include <bits/stdc++.h>
using namespace std;

class HANG
{
private:
    string MaHang;
    string TenHang;
    long DonGia;
public:
    void Nhap();
    void Xuat();
    friend class PHIEU;
};

void HANG::Nhap()
{
    fflush(stdin);
    cout<<"\tNhap ma hang: ";     getline( cin, MaHang);
    cout<<"\tNhap ten hang: ";     getline( cin, TenHang);
    cout<<"\tNhap don gia: ";   cin>>DonGia;
}

void HANG::Xuat()
{
    cout<<setw(15)<<MaHang<<setw(20)<<TenHang<<setw(15)<<DonGia<<endl;
}

class PHIEU
{
private:
    string MaPhieu;
    HANG *x;
    int n;
public:
    void Nhap();
    void Xuat();
};

void PHIEU::Nhap()
{
    fflush(stdin);
    cout<<"Nhap ma phieu: ";      getline( cin, MaPhieu);
    cout<<"Nhap n: ";   cin>>n;
    x = new HANG[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap mat hang thu "<<i+1<<endl;
        x[i].Nhap();
    }
}

void PHIEU::Xuat()
{
    cout<<"Ma phieu: "<<MaPhieu<<endl;
    for (int i = 0; i < n; i++)
    {
        x[i].Xuat();
    }
    
}


int main(int argc, char const *argv[])
{
    PHIEU X;
    X.Nhap();
    X.Xuat();

    return 0;
}
