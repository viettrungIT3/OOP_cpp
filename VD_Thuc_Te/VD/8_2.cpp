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
    void Nhap();
    void Xuat();
    friend class Phieu;
};

void SV::Nhap()
{
    fflush(stdin);
    cout<<"Nhap MSV: ";     getline( cin, MSV);
    cout<<"Nhap Ten SV: ";     getline( cin, TenSV);
    cout<<"Nhap Lop: ";     getline( cin, Lop);
    cout<<"Nhap Khoa: ";    cin>>Khoa;
}

void SV::Xuat()
{
    cout<<"MSV: "<<MSV<<setw(15)<<"Ten SV: "<<TenSV<<endl;
    cout<<"Lop: "<<Lop<<setw(15)<<"Khoa: "<<Khoa<<endl;
}

class Mon
{
private:
    string TenMon;
    int SoTin;
    int Diem;
public:
    void Nhap();
    void Xuat();
    friend class Phieu;
    friend void SuaTen( Phieu A);
};

void Mon::Nhap()
{
    fflush(stdin);
    cout<<"Nhap Ten Mon: ";     getline( cin, TenMon);
    cout<<"Nhap So Tin:  ";     cin>>SoTin;
    cout<<"Nhap Diem:    ";     cin>>Diem;
}

void Mon::Xuat()
{
    cout<<setw(30)<<TenMon<<setw(15)<<SoTin<<setw(15)<<Diem<<endl;
}

class Phieu
{
private:
    SV X;
    Mon * Y;
    int n;
public:
    void Nhap();
    void Xuat();
    friend void SuaTen( Phieu A);
};

void Phieu::Nhap()
{
    X.Nhap();
    cout<<"Mhap n = ";  cin>>n;
    Y = new Mon[n];
    for (int i = 0; i < n; i++)
    {
        Y[i].Nhap();
    }
}

void Phieu::Xuat()
{
    cout<<"------------Phieu Bao Diem------------"<<endl;
    X.Xuat();
    cout<<setw(30)<<"TenMon"<<setw(15)<<"SoTin"<<setw(15)<<"Diem"<<endl;
    for (int i = 0; i < n; i++)
    {
        Y[i].Xuat();
    }
}

void SuaTen( Phieu A)
{
    string temp = "CSDL";
    for (int i = 0; i < A.n; i++)
    {
        if ( A.Y[i].TenMon == "CSDL")
        {
            A.Y[i].TenMon = "HTCSDL";
        }
    }
}

int main(int argc, char const *argv[])
{
    Phieu A;
    A.Nhap();
    A.Xuat();
    return 0;
}

