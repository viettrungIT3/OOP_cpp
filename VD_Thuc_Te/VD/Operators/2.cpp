#include <bits/stdc++.h>
using namespace std;

class PT2
{
private:
    float a, b, c;
public:
    void Nhap();
    void Xuat();
    PT2 operator+( PT2 B);
    PT2 operator-();
    float operator++();
    
};

void PT2::Nhap()
{
	cout<<"Nhap lan luot cac he so cua phuong trinh bac 2: ";	cin>>a>>b>>c;
}

void PT2::Xuat()
{
    cout<<"Phuong trinh: "<<a<<"X"<<(char)253<<" + "<<b<<"X + "<<c<<" = 0"<<endl;
}

PT2 PT2::operator+( PT2 B)
{
    PT2 C;
    C.a = a + B.a;
    C.b = b + B.b;
    C.c = c + B.c;
    return C;
    
}


PT2 PT2::operator-()
{
//    PT2 C;
//    C.a = -c;
//    C.b = -b;
//    C.c = -c;
//    return C;
     a = -a;
     b = -b;
     c = -c;
     return *this;
}

float PT2::operator++()
{
    return (a+b+c);
}

int main(int argc, char const *argv[])
{
    PT2 A, B;
    A.Nhap();
    B.Nhap();
    PT2 C = A + B;
    C.Xuat();
    C = -C;
    C.Xuat();
    cout<<"Tong he so cua PT C: "<<++C<<endl;
    return 0;
}
