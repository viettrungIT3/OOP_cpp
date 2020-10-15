#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string hoTen;
    string ngaySInh;
    string queQuan;
public:
    
};

class KySu : public Person
{
private:
    string nganh;
    int namTN;
public:
    void Nhap();
    void Xuat();
};

void KySu::Nhap()
{
    
    cout<<"Nhap ho ten: ";          fflush(stdin);      getline( cin, hoTen);
    cout<<"Nhap ngay sinh: ";       fflush(stdin);      getline( cin, ngaySInh);
    cout<<"Nhap que quan: ";        fflush(stdin);      getline( cin, queQuan);
    cout<<"Nhap nganh: ";           fflush(stdin);      getline( cin, nganh);
    cout<<"Nhap nam tot nghiep: ";                      cin>>namTN;
}

void KySu::Xuat()
{
    // cout<<"Ho ten: "<<hoTen<<endl;
    // cout<<"Ngay sinh: "<<ngaySInh<<endl;
    // cout<<"Que quan: "<<queQuan<<endl;
    // cout<<"Nganh: "<<nganh<<endl;
    // cout<<"Nam tot nghiep: "<<namTN<<endl;
    cout<<setw(30)<<left<<hoTen<<setw(20)<<left<<ngaySInh<<setw(30)<<left<<queQuan<<setw(20)<<left<<nganh<<setw(15)<<left<<namTN<<endl;
}

int main(int argc, char const *argv[])
{
    KySu *A;
    int n;      
    cout<<"Nhap n = ";      cin>>n;
    A = new KySu[n+5];
    for (int i = 0; i < n; i++)
    {
        A[i].Nhap();
    }
    cout<<setw(30)<<left<<"hoTen"<<setw(20)<<left<<"ngaySInh"<<setw(30)<<left<<"queQuan"<<setw(20)<<left<<"nganh"<<setw(15)<<left<<"namTN"<<endl;
    for (int i = 0; i < n; i++)
    {
        A[i].Xuat();
    }
    

    return 0;
}

