#include <bits/stdc++.h>
using namespace std;

class Hinh
{
protected:
    char MS[30];
    char VI[30];
private:
    /* data */
public:
    void Nhap();
    void Xuat();
    Hinh( char *x, char *y);
};

void Hinh::Nhap()
{
    cout<<"Nhap MS: ";      fflush(stdin);      gets( MS);
    cout<<"Nhap VI: ";      fflush(stdin);      gets( VI);
}

void Hinh::Xuat()
{
    cout<<setw(20)<<MS<<setw(20)<<VI;
}

Hinh::Hinh( char *x, char *y)
{
    strcpy(MS, x);
    strcpy(VI, y);
}

class HCN : public Hinh
{
private:
    float D;
    float R;
public:
    void Nhap();
    void Xuat();
    HCN( char *x, char *y, float z, float t);

};

void HCN::Nhap()
{
    Hinh::Nhap();
    cout<<"Nhap dai va rong: "; cin>>D>>R;
}

void HCN::Xuat()
{
    Hinh::Xuat();
    cout<<setw(10)<<D<<setw(10)<<R<<endl;
}

HCN::HCN( char *x, char *y, float z, float t):Hinh( x, y)
{
    D = z;
    R = t;
}


int main(int argc, char const *argv[])
{
    HCN K( "Xanh", "cham", 4, 3);
    K.Xuat();
    return 0;
}
