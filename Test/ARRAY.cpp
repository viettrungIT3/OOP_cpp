#include <bits/stdc++.h>
using namespace std;

class ARRAY
{
private:
    int n;
    int *VALUE;
public:
    ARRAY(/* args */);
    ARRAY( int m);
    ~ARRAY();
    friend istream& operator>>( istream& x, ARRAY& y);
    friend ostream& operator<<( ostream& x, ARRAY y);
};

ARRAY::ARRAY(/* args */)
{
    this->n = 0;
    this->VALUE = NULL;
}

ARRAY::ARRAY( int n )
{
    this->n = n;
    this->VALUE = new int[n];
}

ARRAY::~ARRAY()
{
    this->n = 0;
    delete VALUE;
}

istream& operator>>( istream& x, ARRAY& y)
{
    cout<<"Enter n = ";     x>>y.n;
    y.VALUE = new int[y.n];
    cout<<"Enter Array: ";
    for (int i = 0; i < y.n; i++)
    {
        x>>y.VALUE[i];
    }
    return x;
}

ostream*& operator<<( ostream& x, ARRAY y)
{
    x<<"Show Array: ";
    for (int i = 0; i < y.n; i++)
    {
        x<<y.VALUE[i];
    }
    return x;
}

int main(int argc, char const *argv[])
{
    ARRAY K;
    cin>>K;
    cout<<K;
    return 0;
}

