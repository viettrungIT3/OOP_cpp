#include <bits/stdc++.h>
using namespace std;

class Sach
{
private:
    string Masach;
    string Tensach;
    string Nxb;
    int Sotrang;
    long Giatien;
public:
    void NHAP();
    void XUAT();
};

void Sach::NHAP()
{
    fflush(stdin);
    cout<<"\tNhap ma Sach";   getline( cin, Masach);
    cout<<"\tNhap ma Sach";   getline( cin, Tensach);
    cout<<"\tNhap ma Sach";   getline( cin, Nxb);
    cout<<"\tNhap ma Sach";   cin>>Sotrang;
    cout<<"\tNhap ma Sach";   cin>>Giatien;
}

void Sach::XUAT()
{
    cout<<setw(20)<<Masach<<setw(25)<<Tensach<<setw(25)<<Nxb<<setw(15)<<Sotrang<<setw(20)<<Giatien<<endl;
}

int main(int argc, char const *argv[])
{
    Sach *a; int n;
    cout<<"Nhap n: ";   cin>>n;
    cout<<"Nhap thong tin cua "<<n<<" cuon sach: "<<endl;
    a = new Sach[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap thoong tin sach thu "<<i+1<<endl;
        a[i].NHAP();
    }
    cout<<"---------Display----------"<<endl;
    cout<<setw(20)<<"Masach"<<setw(25)<<"Tensach"<<setw(25)<<"Nxb"<<setw(15)<<"Sotrang"<<setw(20)<<"Giatien"<<endl;
    for (int i = 0; i < n; i++)
    {
        a[i].XUAT();
    }
    cout<<"---------End--------";
    return 0;
}

