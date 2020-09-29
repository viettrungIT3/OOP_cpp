#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
private:
    string MaSV;
    string HoTen;
    float DiemToan, DiemLy, DiemHoa;
public:
    void Nhap();
    void Xuat();
    friend void Sort( SinhVien *a, int n);
};

void SinhVien::Nhap()
{
    fflush(stdin);
    cout<<"Nhap ma SV: ";       getline( cin, MaSV);
    cout<<"Nhap Ho Ten:";       getline( cin, HoTen);
    cout<<"Nhap diem Toan:";    cin>>DiemToan;
    cout<<"Nhap diem Ly:";      cin>>DiemLy;
    cout<<"Nhap diem Hoa:";     cin>>DiemHoa;
}

void SinhVien::Xuat()
{
    cout<<setw(15)<<MaSV<<setw(20)<<HoTen<<setw(10)<<DiemToan+DiemLy+DiemHoa<<endl;
}


void Sort( SinhVien *a, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if ( (a[i].DiemToan + a[i].DiemLy + a[j].DiemHoa) > ( a[j].DiemToan + a[j].DiemLy + a[j].DiemHoa))
            {
                SinhVien temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}
int main(int argc, char const *argv[])
{
    SinhVien *a;
    int n;
    cout<<"Nhap so SV: ";   cin>>n;
    a = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        a[i].Nhap();
    }
    for (int i = 0; i < n; i++)
    {
        Sort( a, n);
    }
    cout<<setw(15)<<"Ma SV"<<setw(20)<<"Ho Ten"<<setw(10)<<"Tong"<<endl;
    for (int i = 0; i < n; i++)
    {
        a[i].Xuat();
    }
    
    return 0;
}
