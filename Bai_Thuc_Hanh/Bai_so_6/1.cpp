#include <bits/stdc++.h>
using namespace std;

class PS
{
private:
    int TS, MS;
public:
    PS(/* args */);
    friend istream& operator>>( istream& x, PS& y);
    friend ostream& operator<<( ostream&x, PS y);
    PS operator*( PS B);
    PS operator/( PS B);
    PS operator+( PS B);
    PS operator-( PS B);
};

PS::PS(/* args */)
{
}

istream& operator>>( istream& x, PS& y)
{
    cout<<"TS = ";      x>>y.TS;
    cout<<"MS = ";      x>>y.MS;
    return x;
}

ostream& operator<<( ostream&x, PS y)
{
    x<<y.TS<<"/"<<y.MS<<endl;
    return x;
}

PS PS::operator*( PS B)
{
    PS C;
    C.TS = TS*B.TS;
    C.MS = MS*B.MS;
    return C;
}

PS PS::operator/( PS B)
{
    PS C;
    C.TS = TS * B.MS;
    C.MS = MS * B.TS;
    return C;
}

PS PS::operator+( PS B)
{
    PS C;
    C.TS = TS * B.MS + MS * B.TS;
    C.MS = MS * B.MS;
    return C;
}

PS PS::operator-( PS B)
{
    PS C;
    C.TS = TS * B.MS - MS * B.TS;
    C.MS = MS * B.MS;
    return C;
}

int main(int argc, char const *argv[])
{
    PS A, B;
    cin>>A;
    cin>>B;
    PS C = A * B;
    cout<<C;
    PS D = A / B;
    cout<<D;
    PS E = A + B;
    cout<<E;
    PS F = A - B;
    cout<<F;
    return 0;
}
