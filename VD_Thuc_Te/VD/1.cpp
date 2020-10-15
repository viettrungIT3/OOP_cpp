#include <bits/stdc++.h>
using namespace std;

class Khach
{
private:
    string MaKH;
    string TenKH;
    string DC;
    long SDT;
public:
    void Nhap();
    void Xuat();
    friend class Phieu;
};

void Khach::Nhap()
{
    fflush(stdin);
    cout<<"Nhap Ma Khach Hang: ";       getline( cin, MaKH);
    cout<<"Nhap Ten Khach Hang: ";      getline( cin, TenKH);
    cout<<"Nhap DC Khach Hang: ";       getline( cin, DC);
}

void Khach::Xuat()
{
    cout<<"Ma Khach Hang: "<<MaKH<<setw(20)<<"Ten Khach Hang: "<<TenKH<<endl;
    cout<<"Dia chi: "<<DC<<endl;
}

class Sach
{
private:
    string MaSach;
    string TenSach;
    long DonGia;
    int SL;
public:
    void Nhap();
    void Xuat();
    friend class Phieu;
    friend void TimKiem( Phieu A);
    friend void Sort( Phieu A);
};

void Sach::Nhap()
{
    fflush(stdin);
    cout<<"Nhap Ma Sach: ";       getline( cin, MaSach);
    cout<<"Nhap Ten Sach: ";      getline( cin, TenSach);
    cout<<"Nhap Don Gia: ";       cin>>DonGia;
    cout<<"Nhap So Luong: ";      cin>>SL;
}

void Sach::Xuat()
{
    cout<<setw(15)<<MaSach<<setw(15)<<TenSach<<setw(15)<<DonGia<<setw(15)<<SL;
}

class Phieu
{
private:
    string MaPhieu;
    string Ngay;
    Khach X;
    Sach * Y;
    int n;
public:
    void Nhap();
    void Xuat();
    friend void TimKiem( Phieu A);
    friend void Sort( Phieu A);
};

void Phieu::Nhap()
{
    fflush(stdin);
    cout<<"Nhap Ma Phieu: ";        getline( cin, MaPhieu);
    cout<<"Nhap Ngay Xuat: ";       getline( cin, Ngay);
    X.Nhap();
    cout<<"Nhap n = ";      cin>>n;
    Y = new Sach[n];
    for (int i = 0; i < n; i++)
    {
        Y[i].Nhap();
    }
    //end nhap sach
}

void Phieu::Xuat()
{
    long sumTien = 0;
    cout<<"---------------Diplay----------------"<<endl;
    cout<<"Ma Phieu: "<<MaPhieu<<setw(15)<<Ngay<<endl;
    X.Xuat();
    cout<<setw(15)<<"MaSach"<<setw(15)<<"TenSach"<<setw(15)<<"DonGia"<<setw(15)<<"SL"<<setw(15)<<"DonGia"<<endl;
    for (int i = 0; i < n; i++)
    {
        Y[i].Xuat();
        long sum = (Y[i].DonGia * Y[i].SL);
        sumTien += sum;
        cout<<setw(15)<<sum<<endl;
    }
    cout<<"Tong Tien: "<<sumTien<<endl;
}

void TimKiem( Phieu A)
{
    int dem = 0;
    for (int i = 0; i < A.n; i++)
    {
        if ( A.Y[i].TenSach == 'Toan 6' )
        {
            dem++;
        }
    }
    if (dem == 0 )
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}

void Sort( Phieu &A)
{
    for (int i = 0; i < A.n; i++)
    {
        for (int i = i+1; i < A.n; i++)
        {
            if ( (A.Y[i].DonGia * Y[i].SL) > (A.Y[j].DonGia * Y[j].SL) )
            {
                Sach temp = A.Y[i] ; A.Y[i] = A.Y[j]; A.Y[j] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    Phieu A;
    A.Nhap();
    A.Xuat();
    cout<<"-------------end-----------------";
    return 0;
}
