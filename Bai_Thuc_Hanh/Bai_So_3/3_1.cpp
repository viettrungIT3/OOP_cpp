#include <bits/stdc++.h>
using namespace std;

class DATE
{
private:
    int D;
    int M;
    long Y;
public:
    void NHAP();
    void XUAT();
};

void DATE::NHAP()
{
    fflush(stdin);
    cout<<"Nhap ngay thang nam: "; 
	cin>>D>>M>>Y;
}

void DATE::XUAT()
{
    cout<<D<<"/"<<M<<"/"<<Y<<endl;
}

class NHANSU
{
private:
    string MaNhanSu;
    string HoTen;
    DATE NS;
public:
    void NHAP();
    void XUAT();
};

void NHANSU::NHAP()
{
    fflush(stdin);
    cout<<"Nhap Ma Nhan Su: ";  getline( cin, MaNhanSu);
    cout<<"Nhap Ho va  Ten: ";  getline( cin, HoTen);
    NS.NHAP();
}

void NHANSU::XUAT()
{
    cout<<setw(10)<<MaNhanSu<<setw(20)<<HoTen<<setw(10);    NS.XUAT();
}

int main(int argc, char const *argv[])
{
    NHANSU a;
    a.NHAP();
    a.XUAT();
    return 0;
}

