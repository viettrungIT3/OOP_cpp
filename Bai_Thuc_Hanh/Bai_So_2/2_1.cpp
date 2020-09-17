#include <bits/stdc++.h>
using namespace std;

class PT_b2
{
private:
    float a;
    float b;
    float c;
public:
    void input();
    void output();
};

void PT_b2::input()
{
    fflush(stdin);
    do
    {
        cout<<"Nhap lan luot cac he so a, b, c: ";
        cin>>a>>b>>c;
    } while ( a == 0 );
    
}
void PT_b2::output()
{
    float Denta = b*b - 4*a*c;
    if ( Denta > 0 )
    {
        cout<<"Phuong trinh co 2 nghiem phan biet: "<<( - b + sqrt(Denta))/(2*a)<<" va "<< (-b - sqrt(Denta))/(2*a)<<endl;
    }
    else if ( Denta == 0 )
    {
        cout<<"Phuong trinh co 1 nghiem kep: "<< -b/(2*a)<<endl;
    }
    else
    {
        cout<<"Phuong trinh vo nghiem."<<endl;
    }
}

int main(int argc, char const *argv[])
{
    PT_b2 X;
    X.input();
    X.output();
    return 0;
}
