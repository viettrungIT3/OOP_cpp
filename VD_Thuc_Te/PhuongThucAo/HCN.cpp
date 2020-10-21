#include <bits/stdc++.h>
using namespace std;

class Hinh
{
protected:
    int MS;
    int VI;
public:
    virtual void Nhap();
    virtual void Xuat();
};

void Hinh::Nhap()
{
    cout<<"Nhap thong tin cua hinh: "<<endl;
    cout<<"Mau sac: ";  cin>>MS;
    cout<<"Vien:    ";  cin>>VI;
}

void Hinh::Xuat()
{
    cout<<"Thong tin cua hinh: "<<endl;
    cout<<"Mau sac: "<<MS<<setw(10)<<"Vien: "<<VI<<endl;
}

class HCN : public Hinh
{
private:
    int D, R;
public:
    void Nhap();
    void Xuat();
};

void HCN::Nhap()
{
    Hinh::Nhap();
    cout<<"Nhap thong tin hinh chu nhat: "<<endl;
    cout<<"Dai =  ";     cin>>D;
    cout<<"Rong = ";     cin>>R;
}

void HCN::Xuat()
{
    Hinh::Xuat();
    cout<<"Dai = "<<D<<setw(10)<<"Rong = "<<R<<endl;
}

int main(int argc, char const *argv[])
{
    Hinh P;
    HCN Q;
    Hinh *K = &Q;
    K->Nhap();
    K->Xuat();
    return 0;
}
