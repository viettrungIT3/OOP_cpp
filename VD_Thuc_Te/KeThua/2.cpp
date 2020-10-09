#include <bits/stdc++.h>
using namespace std;

class May
{
protected:
    string MaMay;
    string LoaiMay;
    string NhanHieu;
    int Gia;
private:
    /* data */
public:
    // void Nhap();
    // void Xuat();
};

// void May::Nhap()
// {
//     cout<<"Nhap Ma May: ";         fflush(stdin);      getline( cin, MaMay);
//     cout<<"Nhap loai May: ";       fflush(stdin);      getline( cin, LoaiMay);
//     cout<<"Nhap Nhan hieu: ";      fflush(stdin);      getline( cin, NhanHieu);
// }

// void May::Xuat()
// {

// }

class MayTinh : public May
{
protected:
    
private:
    string CPU;
    int RAM;
    int HDD;
public:
    void Nhap();
    void Xuat();
};

void MayTinh::Nhap()
{
    //May::Nhap();
    cout<<"Nhap Ma May: ";         fflush(stdin);      getline( cin, MaMay);
    cout<<"Nhap loai May: ";       fflush(stdin);      getline( cin, LoaiMay);
    cout<<"Nhap Nhan hieu: ";      fflush(stdin);      getline( cin, NhanHieu);
    cout<<"Nhap Gia: ";            cin>>May::Gia;
    cout<<"Nhap CPU: ";            fflush(stdin);      getline( cin, CPU);
    cout<<"Nhap RAM: ";            cin>>
}

void MayTinh::Xuat()
{
    cout<<"Ma May: "<<May::MaMay<<endl;
    cout<<"Loai May: "<<May::LoaiMay<<endl;
    cout<<"Nhan Hieu: "<<May::NhanHieu<<endl;
    cout<<"Gia: "<<May::Gia<<endl;
    cout<<"CPU: "<<CPU<<endl;
    cout<<"RAM: "<<RAM<<endl;
    cout<<"HDD: "<<HDD<<endl;
}

int main(int argc, char const *argv[])
{
    MayTinh K;
    K.Nhap();
    K.Xuat();
    return 0;
}
