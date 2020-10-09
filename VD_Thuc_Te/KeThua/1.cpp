#include <bits/stdc++.h>
using namespace std;

class Nguoi
{
protected:
    string HoTen;
    int Tuoi;
    string GT;

private:
    
public:
    void Nhap();
    void Xuat();
};

void Nguoi::Nhap()
{
    cout<<"Nhap Ho Ten: ";      fflush(stdin);      getline( cin, HoTen);
    cout<<"Nhap Tuoi: ";        cin>>Tuoi;
    cout<<"Nhap Gioi Tinh: ";   fflush(stdin);      getline( cin, GT);
}

void Nguoi::Xuat()
{
    cout<<setw(20)<<"Ho Ten: "<<HoTen<<setw(10)<<"Tuoi: "<<Tuoi<<setw(15)<<"Gioi Tinh:"<<GT<<endl;
}

class SinhVien : public Nguoi
{
private:
    string MSV;
    string Nganh;
    string Truong;
public:
    void Nhap();
    void Xuat();
};

void SinhVien::Nhap()
{
    Nguoi::Nhap();
    cout<<"Nhap MSV: ";         fflush(stdin);       getline( cin, MSV);
    cout<<"Nhap Nganh: ";       fflush(stdin);       getline( cin, Nganh);
    cout<<"Nhap Truong: ";      fflush(stdin);       getline( cin, Truong);
}

void SinhVien::Xuat()
{
    Nguoi::Xuat();
    cout<<setw(20)<<"MSV: "<<MSV<<setw(20)<<"Nganh: "<<Nganh<<setw(20)<<"Truong: "<<Truong<<endl;
}

int main(int argc, char const *argv[])
{
    SinhVien K;
    K.Nhap();
    K.Xuat();
    return 0;
}
