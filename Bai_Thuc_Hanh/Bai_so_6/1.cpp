#include <bits/stdc++.h>
using namespace std;

class PS
{
private:
    int TS;
    int MS;
public:
    void Nhap();
    void Xuat();
    PS operator+( PS B);
};

void PS::Nhap() {
    // cout<<"Nhap Ts và MS: ";       
    cin>>TS>>TS;
}

void PS::Xuat() {
    cout<<TS<<"/"<<MS<<endl;
}

PS PS::operator+( PS B) {
    PS C;
    C.TS = TS*B.MS + MS*B.TS;
    C.MS = MS*B.MS;
    return C;
}

int main(int argc, char const *argv[])
{
    PS A, B;
    A.Nhap();   B.Nhap();
    PS C = A + B;
    C.Xuat();
    return 0;
}
