#include <bits/stdc++.h>
using namespace std;

class HCN
{
private:
    float D;
    float R;
public:
    void NHAP();
    void VE();
    float DIENTICH();
    float CHUVI();
};

void HCN::NHAP()
{
    cout<<"Nhap chieu dai: ";   cin>>D;
    cout<<"Nhap chieu rong: ";   cin>>R;
    fflush(stdin);
}

void HCN::VE()
{
    cout<<"Hinh 1: "<<endl;
    for (int i = 0; i < R; i++)
    {
        if ( i == 0 || i == R-1 )
        {
            for (int j = 0; j < D ; j++)
            {
                cout<<"*  ";
            }
        }
        else
        {
            for (int j = 0; j < D; j++)
            {
                if ( j == 0 || j == D-1 )
                {
                    cout<<"*  ";
                }
                else
                {
                    cout<<"   ";
                }
            }
        }
        cout<<endl;
    }
    // end hinh ve 1 
    cout<<"Hinh 2: "<<endl;
    for (int i = 0; i < D; i++)
    {
        if ( i == 0 || i == D-1 )
        {
            for (int j = 0; j < R ; j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            for (int j = 0; j < R; j++)
            {
                if ( j == 0 || j == R-1 )
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    cout<<endl;
}

float HCN::CHUVI()
{
    return 2*(D+R);
}

float HCN::DIENTICH()
{
    return D*R;
}

int main(int argc, char const *argv[])
{
    HCN a;
    a.NHAP();
    cout<<"-----------------------------"<<endl;
    a.VE();
    cout<<"-----------------------------"<<endl;
    cout<<"Chu Vi: "<<a.CHUVI()<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Dien Tich: "<<a.DIENTICH()<<endl;
    return 0;
}

