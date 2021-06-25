#include <bits/stdc++.h>
using namespace std;

class PS
{
private:
    int TS;  
    int MS;  
public:
    PS(/* args */);
    PS( int TS, int MS);
    friend istream& operator>>( istream& x, PS& y);
    friend ostream& operator<<( ostream& x, PS y);
    PS operator*( PS B);
    float operator!();
};

PS::PS(/* args */)
{
}
PS::PS( int TS, int MS)
{
    this->TS = TS; 
    this->MS = MS; 
}

istream& operator>>( istream& x, PS& y)
{
    cout<<"TS = ";      x>>y.TS;
    cout<<"MS = ";      x>>y.MS;
    return x;
}

ostream& operator<<( ostream& x, PS y)
{
    x<<y.TS<<"/"<<y.MS<<endl;
    return x;
}

PS PS::operator*( PS B)
{
    PS C;
    C.TS = TS * B.TS;
    C.MS = MS * B.MS;
    return C;
}
float PS::operator!()
{
    return (float)TS/MS;
}

int main(int argc, char const *argv[])
{
    PS a, b;
    cin>>a;
    cin>>b;
    PS c = a * b;
    ofstream f( "PHANSO.txt", ios::out );
    f<<c;
    f<<!c;
    f.close();
    return 0;
}
