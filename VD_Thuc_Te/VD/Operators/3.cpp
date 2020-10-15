#include <bits/stdc++.h>
using namespace std;

class Arr
{
private:
    int n;
    float *a;
public:
    void Nhap();
    void Xuat();
    Arr operator+( Arr B);
    Arr operator-();
    Arr operator++();
    float operator!();
};

void Arr::Nhap()
{
    cout<<"Nhap n: ";     cin>>n;
    a = new float[n];
    cout<<"Nhap lan luot "<<n<<" so thuc: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}

void Arr::Xuat()
{
    // cout<<"Show Arr: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

Arr Arr::operator+( Arr B)
{
    Arr C;
    if ( n != B.n )
    {
        C.n = 0;
        C.a = NULL;
    }
    else
    {
        C.n = n;
        C.a = new float[n];
        for (int i = 0; i < n; i++)
        {
            C.a[i] = a[i] + B.a[i]; 
        }
    }
    return C;
}

Arr Arr::operator-()
{
    for (int i = 0; i < n; i++)
    {
        a[i] = -a[i];
    }
    return *this;
}

Arr Arr::operator++()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; i++)
        {
            if (a[i] > a[j])
            {
                swap( a[i], a[j]);
            }
        }
    }
    return *this;
}

float Arr::operator!()
{
    float max = a[0];
    for (int i = 1; i < n; i++)
    {
        if ( max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

int main(int argc, char const *argv[])
{
    Arr A, B;
    A.Nhap();
    B.Nhap();
    Arr C = A + B;
    cout<<"Tong: ";
    C.Xuat();
    
    cout<<"Sap xep: ";
    C = ++C;
    C.Xuat();

    cout<<"Doi dau: ";
    C = -C;
    C.Xuat();
    
    cout<<"Max = "<<!C<<endl;
    return 0;
}
