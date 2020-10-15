#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
protected:
    string nhanHieu;
    int namSX;
    string hang;
public:
    void Nhap();
    void Xuat();
};

void Vehicle::Nhap()
{
    cout<<"Nhap nhan hieu: ";       fflush(stdin);      getline( cin, nhanHieu);
    cout<<"Nhap nam SX: ";          cin>>namSX;
    cout<<"Nhap hang SX: ";         fflush(stdin);      getline( cin, hang);
}

void Vehicle::Xuat();
{
    cout<<"Nhan hieu: "<<nhanHieu<<endl;
    cout<<"Nam SX: "<<namSX<<endl;
    cout<<"Hang: "<<hang<<endl;
}

class OTO : public Vehicle
{
private:
    int soChoNgoi;
    int dungTich;
public:
    void Nhap();
    void Xuat();
};

void OTO::Nhap()
{
    cout<<"\n\tTHong tin ve xe OTO: "<<endl;
    Vehicle::Nhap();
    cout<<"Nhap so cho ngoi: ";     cin>>soChoNgoi;
    cout<<"Nhap dung tich: ";       cin>>dungTich;
}

void OTO::Xuat()
{
    cout<<"\tThong tin OTO"<<endl;
    Vehicle::Xuat();
    cout<<"So cho ngoi: "<<soChoNgoi;
    cout<<"Dung tich: "<<dungTich;
}

class MOTO : public Vehicle
{
private:
    int phanKhoi;
public:
    void Nhap();
    void Xuat();
};

void OTO::Nhap()
{
    cout<<"\n\tTHong tin ve xe MOTO: "<<endl;
    Vehicle::Nhap();
    cout<<"Nhap Phan khoi: ";       cin>>phankhoi;
}

void OTO::Xuat()
{
    cout<<"\tThong tin OTO"<<endl;
    Vehicle::Xuat();
    cout<<"Phan khoi: "<<phanKhoi<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
