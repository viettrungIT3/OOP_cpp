#include <bits/stdc++.h>
using namespace std;

class ARRAY
{
private:
    int n;
    float *VALUE;
public:
    ARRAY(/* args */);
    ~ARRAY();
    friend istream& operator>>( istream& x, ARRAY& y);
    friend ostream& operator<<( ostream& x, ARRAY y);
    ARRAY operator++();
    ARRAY operator--();
};

ARRAY::ARRAY(/* args */)
{
}

ARRAY::~ARRAY()
{
}

istream& operator>>( istream& x, ARRAY& y)
{
    cout<<"Enter n = ";  cin>>y.n;
    y.VALUE = new float[y.n];
    cout<<"Enter Array: ";
    for (int i = 0; i < y.n; i++)
    {
        x>>y.VALUE[i];
    }
    return x;
}

ostream& operator<<( ostream& x, ARRAY y)
{
    x<<"Show Array: ";  
    for (int i = 0; i < y.n; i++)
    {
        x<<y.VALUE[i]<<" ";
    }
    x<<endl;
    return x;
}

ARRAY ARRAY::operator++()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ( VALUE[i] > VALUE[j] )
            {
                float temp = VALUE[i];
                VALUE[i] = VALUE[j];
                VALUE[j] = temp;
            }
        }
    }
    return *this;
}
ARRAY ARRAY::operator--()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ( VALUE[i] < VALUE[j] )
            {
                float temp = VALUE[i];
                VALUE[i] = VALUE[j];
                VALUE[j] = temp;
            }
        }
    }
    return *this;
}

int main(int argc, char const *argv[])
{
    ARRAY K;
    cin>>K;
    cout<<K;
    cout<<++K;
    cout<<--K;
    return 0;
}
