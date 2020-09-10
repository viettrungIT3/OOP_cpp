#include <bits/stdc++.h>
using namespace std;

class Sach
{
    string MaSach;
    string TenSach;
    int SoTrang;
    float NamXB;
public:
    void NHAP();
    void XUAT();
};

void Sach::NHAP()
{
    cout<<"Nhap ma sach: ";    getline( cin, MaSach);
    cout<<"Nhap ten sach: ";     getline( cin, TenSach);
    cout<<"Nhap so trang: ";    cin>>SoTrang;
    cout<<"Nhap Nam XB: ";    cin>>NamXB;
}

void Sach::XUAT()
{
    cout<<setw(10)<<MaSach<<setw(20)<<TenSach<<setw(20)<<SoTrang<<setw(20)<<NamXB<<endl;
}

int main(int argc, char const *argv[])
{
    Sach *a; int n;
    n = 3;
    a = new Sach[n];
    for (int i = 0; i < n; i++)
    {
        a[i].NHAP();
    }
    cout<<endl;
    cout<<setw(10)<<"MaSach"<<setw(20)<<"TenSach"<<setw(20)<<"SoTrang"<<setw(20)<<"NamXB"<<endl;
    for (int i = 0; i < n; i++)
    {
        a[i].XUAT();
    }
    
    return 0;
}

class vdnew1
{
private:
    /* data */
public:
    vdnew1(/* args */);
    ~vdnew1();
};

vdnew1::vdnew1(/* args */)
{
}

vdnew1::~vdnew1()
{
}
