#include <bits/stdc++.h>
using namespace std;

class MaTrix
{
private:
    int n, m;
    float **a;
public:
    MaTrix operator!();
    friend istream& operator>>( istream& x, MaTrix & y);
    friend ostream& operator<<( ostream& x, MaTrix y);   
};

//MaTrix::MaTrix(/* args */)
//{
//}

// MaTrix MaTrix::operator!()
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             a[j]a[i] = a[i][j];
//         }
//     }
//     swap( n, m);
//     return *this;
// }
// khong nen dung
// MaTrix MaTrix::operator!()
// {

// }

MaTrix MaTrix::operator!()
{
    MaTrix z;
    z.n = m;
    z.m = n;
    z.a = new float*[z.n];
    for (int i = 0; i < z.n; i++)
    {
        z.a[i] = new float[z.m];
    }
    for (int i = 0; i < z.n; i++)
    {
        for (int j = 0; j < z.m; j++)
        {
            z.a[i][j] = a[j][i];
        }
    }
    return z;
}

istream& operator>>( istream& x, MaTrix & y)
{
    // cout<<"n = ";       
    x>>y.n;
    // cout<<"m = ";       
    x>>y.m;
    y.a = new float*[y.n];
    for ( int i = 0; i < y.n; i++)
        y.a[i] = new float[y.m];
    for (int i = 0; i < y.n; i++)
    {
        for (int j = 0; j < y.m; j++)
        {
            // cout<<"a["<<i<<"]["<<j<<"] = ";
            x>>y.a[i][j];
        }
    }
    return x;
}
ostream& operator<<( ostream& x, MaTrix y)
{
    x<<y.n<<" "<<y.m<<endl;
    for (int i = 0; i < y.n; i++)
    {
        for (int j = 0; j < y.m; j++)
        {
            x<<y.a[i][j] <<" ";
        }
        x<<endl;
    }
    return x;
}

int main(int argc, char const *argv[])
{
    MaTrix K;
    ifstream f("Matrix1.txt", ios::in);
    f>>K;
    f.close();   
    cout<<K; 
    ofstream f1("Matrix1.txt", ios::out);
    f1<<K;
    f1.close();
    K = !K;
    ofstream f2("Matrix2.txt", ios::out);
    f2<<K;
    f2.close();
    return 0;
}
