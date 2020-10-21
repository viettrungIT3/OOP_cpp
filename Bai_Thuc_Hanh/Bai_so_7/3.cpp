#include <bits/stdc++.h>
using namespace std;

class Truong
{
protected:
    string MaTruong;
    string TenTruong;
    string Address;
public:
    void Nhap();
    void Xuat();
};

void Truong::Nhap()
{
    cout<<"Nhap ma truong: ";       fflush(stdin);      getline( cin, MaTruong);
    cout<<"Nhap ten truong: ";      fflush(stdin);      getline( cin, TenTruong);
    cout<<"Nhap dia chi truong: ";  fflush(stdin);      getline( cin, Address);
}

void Truong::Xuat()
{
    cout<<"Thong tin ve truong: "<<endl;
    cout<<"\tMa truong:  "<<MaTruong<<endl;
    cout<<"\tTen truong: "<<TenTruong<<endl;
    cout<<"\tDia chi:    "<<Address<<endl;
}

class Khoa
{
private:
    string MaKhoa;
    string TenKhoa;
    string TruongKhoa;
public:
    friend class TruongDH;
};

class Ban
{
private:
    string MaBan;
    string TenBan;
    string Date;
public:
    friend class TruongDH;
};

class TruongDH : public Truong
{
private:
    Khoa *x;
    int n;
    Ban *y;
    int m;
public:
    void Nhap();
    void Xuat();
};

void TruongDH::Nhap()
{
    Truong::Nhap();
    cout<<"Nhap so khoa: ";     cin>>n;
    x = new Khoa[n];
    cout<<"Nhap thong tin Khoa: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap thong tin khoa thu "<<i+1<<endl;
        cout<<"\tNhap ma khoa:     ";       fflush(stdin);      getline( cin, x[i].MaKhoa);
        cout<<"\tNhap ten khoa:    ";       fflush(stdin);      getline( cin, x[i].TenKhoa);
        cout<<"\tNhap truong khoa: ";       fflush(stdin);      getline( cin, x[i].TruongKhoa);
    }
    cout<<"Nhap so ban: ";      cin>>m;
    cout<<"Nhap thong tin Ban: "<<endl;
    y = new Ban[m];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap thong tin ban thu "<<i+1<<endl;
        cout<<"\tNhap ma ban:    ";       fflush(stdin);      getline( cin, y[i].MaBan);
        cout<<"\tNhap ten ban:   ";       fflush(stdin);      getline( cin, y[i].TenBan);
        cout<<"\tNgay thanh lap: ";       fflush(stdin);      getline( cin, y[i].Date);
    }
}

void TruongDH::Xuat()
{
    Truong::Xuat();
    cout<<"Thong tin khoa: "<<endl;
    cout<<setw(20)<<"Ma Khoa"<<setw(20)<<"Ten Khoa"<<setw(20)<<"Truong Khoa"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<setw(20)<<x[i].MaKhoa<<setw(20)<<x[i].TenKhoa<<setw(20)<<x[i].TruongKhoa<<endl;
    }
    cout<<"Thong tin ban: "<<endl;
    cout<<setw(20)<<"Ma Ban"<<setw(20)<<"Ten Ban"<<setw(20)<<"Ngay thanh lap"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<setw(20)<<y[i].MaBan<<setw(20)<<y[i].TenBan<<setw(20)<<y[i].Date<<endl;
    }
}

int main(int argc, char const *argv[])
{
    TruongDH A;
    A.Nhap();
    cout<<"------------------------------------------------------------------"<<endl;
    A.Xuat();
    return 0;
}

