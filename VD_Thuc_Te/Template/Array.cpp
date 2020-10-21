#include <bits/stdc++.h>
using namespace std;

template <class T> class Array
{
private:
    int n;
    T *a;
public:
    // Array(/* args */) {
    //     n = 0;
    //     a = NULL;
    // }
    // Array( int n);
    //Xoa bo phuong thuc khoi tao
    void Nhap();
    void Xuat();
};

// Array::Array( int n)
// {
//     this->n = n;
//     a = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = 0;
//     }
    
// }

template <class T> void Array<T>::Nhap()
{
    cout<<"Enter n = ";  cin>>n;
    a = new T[n];
    cout<<"Enter Array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}

template <class T> void Array<T>::Xuat()
{
    cout<<"Show Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    Array<int> K;
    K.Nhap();
    K.Xuat();
    return 0;
}
