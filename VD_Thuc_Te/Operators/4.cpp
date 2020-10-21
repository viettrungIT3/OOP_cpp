// Cài đặt 1 lớp SinhVien với các thược tính MaSV, HoTen, Tuoi, Diem 
// Cài đặt toán tử nhập/xuất cho 1 SinhViem

#include <bits/stdc++.h>
using namespace std;

class SV
{
private:
    char MaSV[30];
    char HoTen[30];
    int Tuoi;
    float Diem;
public:
    friend istream& operator>>(istream& x, SV &y);
    friend ostream& operator<<( ostream& x, SV y);
};

istream& operator>>(istream& x, SV &y)
{
    cout<<"Ma SV:  ";   fflush(stdin);      x.getline( y.MaSV, 30);
    cout<<"Ho ten: ";   fflush(stdin);      x.getline( y.HoTen, 30);
    cout<<"Tuoi:   ";   x>>y.Tuoi;
    cout<<"Diem:   ";   x>>y.Diem;
    return x;
}

ostream& operator<<( ostream& x, SV y)
{
    x<<"Ma SV:  "<<y.MaSV<<endl;
    x<<"Ho ten: "<<y.HoTen<<endl;
    x<<"Tuoi:   "<<y.Tuoi<<endl;
    x<<"Diem:   "<<y.Diem<<endl;
    return x;
}

int main(int argc, char const *argv[])
{
    SV K;
    cin>>K;
    ofstream f("4_Xuat.txt", ios::app);
    f<<K;
    f.close();
    return 0;
}
