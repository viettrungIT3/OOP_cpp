#include <bits/stdc++.h>
using namespace std;

class DATE 
{
private:
    int D;
    int M;
    long Y;
public:
    friend class Hang;
};

class Hang
{
private:
    string MaHang;
    string TenHang;
    DATE NgaySX;
public:
    void Nhap();
    void Xuat();
};

void Hang::Nhap()
{
    fflush(stdin);
    cout<<"Nhap ma hang: ";     getline( cin, MaHang);
    cout<<"Nhap ten hang: ";    getline( cin, TenHang);
    cout<<"Nhap Ngay SX: ";     cin>>NgaySX.D>>NgaySX.M>>NgaySX.Y;
}

void Hang::Xuat()
{
    cout<<"-------------Diplay-------------"<<endl;
    cout<<"Ma hang: "<<MaHang<<endl;
    cout<<"Ten hang: "<<TenHang<<endl;
    cout<<"Ngay SX: "<<NgaySX.D<<"/"<<NgaySX.M<<"/"<<NgaySX.Y<<endl;
}

int main(int argc, char const *argv[])
{
    Hang A;
    A.Nhap();
    A.Xuat();
    return 0;
}
