#include <bits/stdc++.h>
using namespace std;

class SP
{
private:
    int PT, PA;
public:
    SP(/* args */);
    SP(int PT, int PA);
    friend ostream& operator<<( ostream& x, SP y);
    SP operator+( SP B);
    SP operator-( SP B);
};

SP::SP(/* args */)
{
}
SP::SP(int PT, int PA)
{
    this->PT = PT;
    this->PA = PA;
}

ostream& operator<<( ostream& x, SP y)
{
    x<<y.PT<<" + i*("<<y.PA<<")"<<endl;
    return x;
}

SP SP::operator+( SP B)
{
    SP C;
    C.PT = PT + B.PT;
    C.PA = PA + B.PA;
    return C;
}
SP SP::operator-( SP B)
{
    SP C;
    C.PT = PT - B.PT;
    C.PA = PA - B.PA;
    return C;
}

int main(int argc, char const *argv[])
{
    SP A(1, 2);
    SP B(3, 4);
    SP C = A + B;
    cout<<C;
    SP D = A - B;
    cout<<D;
    return 0;
}
