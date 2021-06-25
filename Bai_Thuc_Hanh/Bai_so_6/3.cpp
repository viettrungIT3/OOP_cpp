#include <bits/stdc++.h>
using namespace std;

class PT2
{
private:
    float a, b, c;
public:
    PT2(/* args */);
    PT2( float a, float b, float c);
    friend ostream& operator<<( ostream& x, PT2 y);
    PT2 operator-();
    PT2 operator+( PT2 B);
    PT2 operator-( PT2 B);
};

PT2::PT2(/* args */)
{
}

PT2::PT2( float a, float b, float c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

ostream& operator<<( ostream& x, PT2 y)
{
    x<<"PT bac 2 co dang: "<<y.a<<"X"<<char(253)<<" + "<<y.b<<"X + "<<y.c<<" = 0 "<<endl;
    return x;
}

PT2 PT2::operator-()
{   
    PT2 C;
    C.a = -a;
    C.b = -b;
    C.c = -c;
    return C;
}

PT2 PT2::operator+( PT2 B)
{
    PT2 C;
    C.a = a + B.a;
    C.b = b + B.b;
    C.c = c + B.c;
    return C;
}

PT2 PT2::operator-( PT2 B)
{
    PT2 C;
    C.a = a - B.a;
    C.b = b - B.b;
    C.c = c - B.c;
    return C;
}


int main(int argc, char const *argv[])
{
    PT2 A( 1, 2, 1);
    PT2 B( 3, 2, 4);
    PT2 C = -A;
    PT2 D = A + B;
    PT2 E = A - B;
    cout<<"Dao dau PT A: "<<endl;
    cout<<C;
    cout<<"PT A + B: "<<endl;
    cout<<D;
    cout<<"PT A - B: "<<endl;
    cout<<E;
    return 0;
}
