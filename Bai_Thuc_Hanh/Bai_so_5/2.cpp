#include <bits/stdc++.h>
using namespace std;

class Printer
{
protected:
    float trongLuong;
    string hangSX;
    int namSX;
    string tocDo;
public:
    
};

class DOTPRINTER : public Printer
{
private:
    string matDoKim;
public:
    void Nhap();
    void Xuat();
};

void DOTPRINTER::Nhap()
{
    cout<<"\tNhap thong tin may in kim"<<endl;
    cout<<"Nhap trong luong: ";     cin>>trongLuong;
    cout<<"Nhap hang san xuat: ";   fflush(stdin);      getline( cin, hangSX);
    cout<<"Nhap hang nam san xuat: ";   cin>>namSX;
    cout<<"Nhap toc do(so trang/phut): ";              fflush(stdin);  getline( cin, tocDo);
    cout<<"Nhap mat do kim: ";          fflush(stdin);  getline( cin, matDoKim);
}

void DOTPRINTER::Xuat()
{
    cout<<"\n\tThong tin cua May in kim"<<endl;
    cout<<"Trong luong: "<<trongLuong<<endl;
    cout<<"Hang SX: "<<hangSX<<endl;
    cout<<"Nam SX: "<<namSX<<endl;
    cout<<"Toc Do: "<<tocDo<<endl;
    cout<<"Mat do kim: "<<matDoKim<<endl;
}

class LASERPRINTER : public Printer
{
private:
    string doPhanGiai;
public:
    void Nhap();
    void Xuat();
};

void LASERPRINTER::Nhap()
{
	cout<<"\n\tNhap thong tin may in Laser"<<endl;
    cout<<"Nhap trong luong: ";     cin>>trongLuong;
    cout<<"Nhap hang san xuat: ";   fflush(stdin);      getline( cin, hangSX);
    cout<<"Nhap hang nam san xuat: ";   cin>>namSX;
    cout<<"Nhap toc do(so trang/phut): ";               fflush(stdin);  getline( cin, tocDo);
    cout<<"Nhap do phan giai: ";        fflush(stdin);  getline( cin, doPhanGiai);
}

void LASERPRINTER::Xuat()
{
    cout<<"\n\tThong tin cua May in Laser"<<endl;
    cout<<"Trong luong: "<<trongLuong<<endl;
    cout<<"Hang SX: "<<hangSX<<endl;
    cout<<"Nam SX: "<<namSX<<endl;
    cout<<"Toc Do: "<<tocDo<<endl;
    cout<<"Do phan giai: "<<doPhanGiai<<endl;
}


int main(int argc, char const *argv[])
{
    DOTPRINTER A;
    A.Nhap();
    A.Xuat();
    LASERPRINTER B;
    B.Nhap();
    B.Xuat();
    return 0;
}
