#include <bits/stdc++.h>
using namespace std;

class Hang
{
private:
    string Mahang;
    string Tenhang;
    long Dongia;
    int Soluong;
public:
    void NHAP();
    void XUAT();
};

void Hang::NHAP()
{
    fflush(stdin);
    cout<<"\tNhap ma hang: ";     getline( cin, Mahang);
    cout<<"\tNhap ten hang: ";    getline( cin, Tenhang);
    cout<<"\tNhap don gia: ";     cin>>Dongia;
    cout<<"\tNhap do luong: ";    cin>>Soluong;
}

void Hang::XUAT()
{
    cout<<setw(20)<<Mahang<<setw(25)<<Tenhang<<setw(15)<<Dongia<<setw(15)<<Soluong<<endl;
}

int main(int argc, char const *argv[])
{
    Hang a[100]; int n;
    cout<<"Nhap n: "; cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap mat hang thu "<<i+1<<endl;
        a[i].NHAP();
    }
    cout<<setw(20)<<"Ma hang"<<setw(25)<<"Ten hang"<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<endl;
    for (int i = 0; i < n; i++)
    {
        a[i].XUAT();
    }
    
    return 0;
}
