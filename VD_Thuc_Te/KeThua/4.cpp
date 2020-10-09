#include <bits/stdc++.h>
using namespace std;

class BenhNhan;
class Nguoi
{
protected:
    char HT[30];
    int Tuoi;
private:
    
public:
    void Nhap();
    void Xuat();
};

void Nguoi::Nhap()
{
    cout<<"Nhap Ho Ten: ";      fflush(stdin);      gets( HT);
    cout<<"Nhap Tuoi: ";        cin>>Tuoi;
}

class BenhVien
{
private:
    char TenBV[30];
    char DCBV[30];
    Nguoi GD;
public:
    friend class BenhNhan;
};

class BenhNhan : public Nguoi
{
private:
    char MaBN[20];
    char TSBN[30];
    char CDBN[30];
    BenhVien BV;
public:
    void Nhap();
    void Xuat();
    friend void TIM( BenhNhan* a, int n);
    friend void SUA( BenhNhan* a, int n);
};

void BenhNhan::Nhap()
{
    cout<<"Nhap ma Benh Nhan: ";       fflush(stdin);   gets(MaBN);
    Nguoi::Nhap();
    cout<<"Mhap Tien Su: ";         fflush(stdin);      gets( TSBN);
    cout<<"Mhap chuan doan: ";      fflush(stdin);      gets( CDBN);
    cout<<"Nhap thong tin benh vien: "<<endl;
    cout<<"Nhap Ten BV: ";      fflush(stdin);      gets( BV.TenBV);
    cout<<"Nhap DC  BV: ";      fflush(stdin);      gets( BV.DCBV);
    cout<<"Nhap Giam Doc: "<<endl;
    BV.GD.Nhap();
}

void BenhNhan::Xuat()
{
    cout<<"Ma Benh Nhan: "<<MaBN<<endl;
    Nguoi::Xuat();
    cout<<"Tien su benh: "<<TSBN<<endl;
    cout<<"Chuan Doan: "<<CDBN<<endl;
    cout<<"Ten Benh Vien: "<<BV.TenBV<<endl;
    cout<<"DC Benh Vien: "<<BV.DCBV<<endl;
    cout<<"Giam Doc: "<<endl;
    BV.GD.Xuat();
}

void TIM( BenhNhan* a, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ( a[i].Tuoi > 30 )
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout<<"Khong co benh nhan nao tren 30 tuoi."<<endl;
    }
    else
    {
        cout<<"Co benh nhen tren 30 tuoi. "<<endl;
    }
}

void SUA( BenhNhan* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if ( strcmp( a[i].MaBN, "BN01") == 0 )
        {
            a[i].Tuoi = 20;
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    BenhNhan* a; int n;
    cout<<"Nhap n = ";      cin>>n;
    a = new BenhNhan[n];
    for (int i = 0; i < n; i++)
    {
        a[i].Nhap();
    }
    for (int i = 0; i < n; i++)
    {
        a[i].Xuat();
    }
    return 0;
}
