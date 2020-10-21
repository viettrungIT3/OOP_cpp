// Học Operators

#include <bits/stdc++.h>
using namespace std;

class REC
{
private:
    float a, b, c;
public:
    void Nhap();
    void Xuat();
    REC operator+( REC B);
    float operator++();
};

REC REC::operator+( REC B)
{
    REC C;
    C.a = a + B.a;
    C.b = b + B.b;
    C.c = c + B.c;
    return C;
}

float REC::operator++()
{
    float p = ( a+ b+ c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

void REC::Nhap()
{
    cout<<"Nhap lan luot do dai a, b, c: ";     cin>>a>>b>>c;
}

void REC::Xuat()
{
    cout<<"Do dai lan luot cua tam giac la: "<<a<<", "<<b<<", "<<c<<"."<<endl;
}

int main(int argc, char const *argv[])
{
    REC A, B;
    A.Nhap();
    B.Nhap();
    REC C = A + B;
    C.Xuat();
    cout<<"Dien tich C = "<<++C;
    return 0;
}
