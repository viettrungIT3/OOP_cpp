#include <bits/stdc++.h>
using namespace std;

class PT2
{
private:
    float a, b, c;
public:
    void Nhap();
    void Xuat();
    void Giai();
    PT2();
    PT2( float x, float y, float z);
};

void PT2::Nhap()
{
    cout<<"Nhap lan luot cac he so a, b, c: ";     cin>>a>>b>>c;
}

void PT2::Xuat()
{
    cout<<"Phuong trinh bac 2: "<<a<<"X"<<(char)253<<" + "<<b<<"X"<<" + "<<c<<" = 0"<<endl;
}

void PT2::Giai()
{
    double delta = b*b - 4*a*c;
    if (delta > 0 )
    {
        cout<<"Phuong trinh co 2 nghiem phan biet: "<<((-b-sqrt(delta))/(2*a))<<" va "<<((-b+sqrt(delta))/(2*a))<<endl;
    }
    else if (delta == 0 )
    {
        cout<<"Phuong trinh co nghiem duy nhat: "<<(-b/(2*a))<<endl;
    }
    else
    {
        cout<<"Phuong trinh vo nghiem."<<endl;
    }
}

PT2::PT2()
{
    a = b = c = 0;
}

PT2::PT2( float x, float y, float z)
{
    a = x; b = y; c = z;
}


int main(int argc, char const *argv[])
{
    PT2 P( 1, 2, 1);    P.Xuat();   P.Giai();
    PT2 Q;              Q.Nhap();   Q.Xuat();   Q.Giai(); 
    return 0;
}
