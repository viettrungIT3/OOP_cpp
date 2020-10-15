#include <bits/stdc++.h>
using namespace std;

class ARR
{
private:
    int n;
    int *a;
public:
    friend istream& operator>>( istream& x, ARR &y);
    friend ostream& operator<<( ostream& x, ARR y);
};

istream& operator>>( istream& x, ARR &y)
{
    // cout<<"Nhap n = ";      
    x>>y.n;
    y.a = new int[y.n];
    for (int i = 0; i < y.n; i++)
    {
        x>>y.a[i];
    }
    return x;
}

ostream& operator<<( ostream& x, ARR y)
{
    x<<y.n<<endl;
    // x<<"Show ARR: ";
    for (int i = 0; i < y.n; i++)
    {
        x<<y.a[i]<<" ";
    }
    x<<endl;
    return x;
}

int main(int argc, char const *argv[])
{
    ARR A;
    // cin>>A;
    ifstream f("5_Xuat.txt", ios::in);
    f>>A;
    cout<<A;
    // ofstream f("5_Xuat.txt", ios::out);
    // f<<A;
    f.close();
    return 0;
}
