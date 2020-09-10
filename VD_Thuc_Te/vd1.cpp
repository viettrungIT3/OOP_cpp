#include <bits/stdc++.h> 
using namespace std;

class Tacgia
{
    string TenTg;
    string Diachi;
public:
    void input();
    void output();
};

void Tacgia::input()
{
    cout<<"Nhap Ten tac gia: ";  getline( cin, TenTg );
    cout<<"Nhap Dia chi: ";  getline( cin, Diachi);
}

void Tacgia::output()
{
    cout<<"-----------------Display-----------------"<<endl;
    cout<<"Ten tac gia la:"<<TenTg<<endl;
    cout<<"Dia chi la: "<<Diachi<<endl;
}

class NXB
{
    string TenNXB;
    string Diachi;
    friend class Sach;
    friend void In(Sach *a, int n);
};

class Sach
{
    string TenSach;
    Tacgia x;
    NXB y;
public:
    void input();
    void output();
    friend void In(Sach *a, int n);
};

void Sach::input()
{
    cout<<"Nhap ten sach: ";    getline( cin, TenSach);
    x.input();
    cout<<"Nhap ten NXB: ";     getline( cin, y.TenNXB);
    cout<<"Nhap dia chi NXB: ";     getline( cin, y.Diachi);
}

void Sach::output()
{
    cout<<"Ten sach: "<<TenSach<<endl; 
    x.output();
    cout<<"Ten NXB: "<<y.TenNXB<<endl;
    cout<<"Dia chi NXB: "<<y.Diachi<<endl;
}

void In(Sach a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i].output();
    }
}

int main(int argc, char const *argv[])
{
    Sach *a; int n;
    n = 5;
    a =  new Sach[n];
    for (int i = 0; i < n; i++)
    {
        a[i].input();
    }
    In( a, n);
    return 0;
}
