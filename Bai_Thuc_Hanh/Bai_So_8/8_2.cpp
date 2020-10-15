#include <bits/stdc++.h>
using namespace std;

class SV
{
private:
    string MSV;
    string TenSV;
    string Lop;
    int Khoa;
public:
    void Nhap() {
        cout<<"Nhap MSV: ";     fflush(stdin);      getline( cin, MSV);
        cout<<"Nhap Ten: ";     fflush(stdin);      getline( cin, TenSV);
        cout<<"Nhap Lop: ";     fflush(stdin);      getline( cin, Lop);
    }
    void Xuat() {
        cout<<"Ma sinh vien: "<<MSV<<setw(10)<<left<<"Ten thanh vien: "<<TenSV<<endl;
        cout<<"Lop: "<<Lop<<setw(10)<<left<<"Khoa: "<<Khoa<<endl;
    }
};

class Mon
{
private:
    string TenMon;
    int SoTin;
    int Diem;
public:
    void Nhap() {
        cout<<"Nhap ten mon: ";     fflush(stdin);      getline( cin, TenMon);
        cout<"Nhap So tin: ";       cin>>SoTin;
        cout<<"Nhap diem: ";        cin>>Diem;
    }
    void Xuat() {
        cout<<TenMon<<setw(20)<<left<<SoTin<<setw(20)<<left<<Diem<<endl;
    }
};

class Phieu
{
private:
    SV X;
    Mon * Y;
    int n;
public:
    void Nhap();
    void Xuat();
};

void Phieu::Nhap()
{
    X.Nhap();
    cout<<"Nhap n = ";      cin>>n;
    Y = new Mon[n];
    for (int i = 0; i < n; i++)
    {
        Y[i].Nhap();
    }
}

void Phieu::Xuat()
{
    cout<<setw(30)<<left<<"PHIEU BAO DIEM"<<endl;
    X.Xuat();
    cout<<"TenMon"<<setw(20)<<left<<"SoTin"<<setw(20)<<left<<"Diem"<<endl;
    for (int i = 0; i < n; i++)
    {
        Y[i].Xuat();
    }
    
}

int main(int argc, char const *argv[])
{
    Phieu A;
    A.Nhap();
    A.Xuat();
    return 0;
}
