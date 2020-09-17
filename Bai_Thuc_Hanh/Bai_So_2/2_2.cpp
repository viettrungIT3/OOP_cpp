#include <Bits/stdc++.h>
using namespace std;

void Swap( int m, int n )
{
    int temp = m;
    m = n;
    n = temp;
}

void SortArray( int *a, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ( a[i] > a[j] )
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
    }
    // End Sort Array
    for (int i = 0; i < n; i++)
    {
        cout<<"  "<<a[i];
    }
    // End Display
}

class Array
{
private:
    int n;
    int *Arr;
public:
    void input();
    void output();
};

void Array::input()
{
    fflush(stdin);
    cout<<"Enter n: ";  cin>>n;
    Arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\ta["<<i<<"] = ";
        cin>>*(Arr+i);
    }   
}

void Array::output()
{
    cout<<"Array after Sort: ";
	SortArray( Arr, n);
	cout<<endl;
}

int main(int argc, char const *argv[])
{
    Array a;
    a.input();
    a.output();
    return 0;
}
