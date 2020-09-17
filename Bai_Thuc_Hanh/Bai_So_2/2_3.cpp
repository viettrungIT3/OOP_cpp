#include <Bits/stdc++.h>
using namespace std;

/*
    Sinh viên tự thiết kế lớp, các thuộc tính, các phương thức cần thiết để cho phép trong
chương trình chính, nhập vào một mảng gồm n số thực, tìm và in ra phần tử lớn nhất và
phần tử nhỏ nhất của mảng. In mảng ra màn hình.
*/

void FindMax_Min( float *a, int n)
{
    float max = *a;
    float min = *a;
    for (int i = 0; i < n; i++)
    {
        if ( a[i] > max )
        {
            max = a[i];
        }
        if ( a[i] < min )
        {
            min = a[i];
        }
    }
    cout<<"Max of Array: "<<max<<endl;
    cout<<"Min of Array: "<<min<<endl;
}

class Array
{
private:
    int n;
    float *Arr;
public:
    void input();
    void output();
};

void Array::input()
{
    fflush(stdin);
    cout<<"Enter n: ";  cin>>n;
    Arr = new float[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\ta["<<i<<"]=";
        cin>>Arr[i];
    }
}

void Array::output()
{
    FindMax_Min( Arr, n);
}

int main(int argc, char const *argv[])
{
    Array a;
    a.input();
    a.output();
    return 0;
}


