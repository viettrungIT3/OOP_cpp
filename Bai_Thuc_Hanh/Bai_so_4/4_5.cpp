#include <bits/stdc++.h>
using namespace std;

class ARRAY
{
private:
    int *VALUE;
    int n;
public:
    ARRAY( );
    ARRAY( int x);
    ~ARRAY();
    void Nhap();
    void Xuat();
};

ARRAY::ARRAY()
{
     n = 0;
     VALUE = NULL;
}

ARRAY::ARRAY( int x)
{
    n = x;
    VALUE = new int[n];
    for (int i = 0; i < n; i++)
        VALUE[i] = 0;
}

ARRAY::~ARRAY()
{
    delete [] VALUE;
}

void ARRAY::Nhap()
{
    if ( n == 0 )
    {
        cout<<"Nhap n = ";  
        cin>>n;
    }
    if ( VALUE == NULL )
        VALUE = new int[n];
        cout<<"Enter Array: ";
        for (int i = 0; i < n; i++)
            cin>>VALUE[i];
}

void ARRAY::Xuat()
{
    cout<<"Display Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<VALUE[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    ARRAY A;        A.Nhap();   A.Xuat();
    ARRAY B(5);     B.Nhap();   B.Xuat();
    return 0;
}
