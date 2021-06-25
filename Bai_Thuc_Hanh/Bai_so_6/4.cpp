#include <bits/stdc++.h>
using namespace std;

class MATRIX
{
private:
    int m, n;
    double **a;

public:
    MATRIX(/* args */);
    friend istream& operator>>( istream& x, MATRIX& y);
    friend ostream& operator<<( ostream& x, MATRIX y);
    MATRIX operator-();
    MATRIX operator+( MATRIX y);
    MATRIX operator-( MATRIX y);
};

MATRIX::MATRIX(/* args */)
{
}

istream& operator>>( istream& x, MATRIX& y)
{
    cout<<"n = ";   cin>>y.n;
    cout<<"m = ";   cin>>y.m;
    y.a = new double*[y.n];
    for (int i = 0; i < y.n; i++)
    {
        y.a[i] = new double[y.m];
        for (int j = 0; j < y.m; j++)
        {
            x>>y.a[i][j];
        }
    }
    return x;
}

ostream& operator<<( ostream& x, MATRIX y)
{
    for ( int i = 0; i< y.n; i++)
    {
        for ( int j = 0; j < y.m; j++)
            x<<y.a[i][j]<<" ";
        x<<endl;
    }
    return x;
}

MATRIX MATRIX::operator-()
{
    for ( int i = 0; i < n ; i ++)
        for ( int j = 0; j < m; j++)
            a[i][j] = - a[i][j];
    return *this;
}

MATRIX MATRIX::operator+( MATRIX y)
{
    MATRIX z;
    if ( m == y.m && n == y.n)
    {
        z.n = n;
        z.m = m;
        z.a = new double*[n];
        for (int i = 0; i < n; i++)
            z.a[i] = new double[m];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                z.a[i][j] = a[i][j] + y.a[i][j];
    }
    else
    {
        z.n = 0;
        z.m = 0;
        cout<<"hai ma tran khong cung kich thuoc, nen khong cong dc hai ma tran"
    }
    return z;
}

MATRIX MATRIX::operator-( MATRIX y)
{
    MATRIX z;
    if ( m == y.m && n == y.n)
    {
        z.n = n;
        z.m = m;
        z.a = new double*[n];
        for (int i = 0; i < n; i++)
            z.a[i] = new double[m];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                z.a[i][j] = a[i][j] - y.a[i][j];
    }
    else
    {
        z.n = 0;
        z.m = 0;
        cout<<"hai ma tran khong cung kich thuoc, nen khong cong dc hai ma tran"
    }
    
    
    return z;
}

int main()
{
    MATRIX A, B;
    cin>>A;
    cout<<A;
    cin>>B;
    cout<<B;
    //K = -K;
    MATRIX C = A + B;
    MATRIX D = A - B;
    cout<<C;
    cout<<D;
}









































