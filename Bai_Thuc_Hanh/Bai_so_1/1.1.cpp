#include <bits/stdc++.h>
using namespace std;

class SINHVIEN
{
private:
    string Masv;
    string Hoten;
    int Tuoi;
    float Diem;
public:
    void NHAP();
    void XUAT();
};

void SINHVIEN::NHAP()
{
    cout<<"\tNhap Ma SV: ";      getline( cin, Masv);
    cout<<"\tNhap Ho va Ten SV: ";    getline( cin, Hoten);
    cout<<"\tNhap Tuoi: ";    cin>>Tuoi;
    cout<<"\tNhap Diem: ";    cin>>Diem;    fflush(stdin);
}

void SINHVIEN::XUAT()
{
    cout<<setw(10)<<left<<Masv<<setw(20)<<left<<Hoten<<setw(20)<<left<<Tuoi<<setw(20)<<left<<Diem<<endl;
}

int main(int argc, char const *argv[])
{
    SINHVIEN a, b;
    cout<<"Nhap Thong tin cho SV A: "<<endl;
    a.NHAP();
    cout<<"Nhap Thong tin cho SV B: "<<endl;
    b.NHAP();
    cout<<setw(10)<<left<<"Masv"<<setw(25)<<left<<"Hoten"<<setw(25)<<left<<"Tuoi"<<setw(10)<<left<<"Diem"<<endl;
    a.XUAT();
    b.XUAT();
    return 0;
}
