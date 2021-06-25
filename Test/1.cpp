#include <bits/stdc++.h>
using namespace std;

class NhanSu
{
private:
    char MaNS[15];
    char HoTen[25];
    char NgaySinh[15];
    char MaCV[15];
    char ChucVu[20];
    double HSL;
    double PhuCap;
    double Thuong;
public:
    NhanSu(/* args */){

    }
    NhanSu(char *MaNS, char *HoTen, char *NgaySinh, char *MaCV, char *ChucVu, double HSL, double PhuCap, double Thuong){
        strcpy(this->MaNS, MaNS);
        strcpy(this->HoTen, HoTen);
        strcpy(this->NgaySinh, NgaySinh);
        strcpy(this->MaCV, MaCV);
        strcpy(this->ChucVu, ChucVu);
        this->HSL = HSL;
        this->PhuCap = PhuCap;
        this->Thuong = Thuong;
    }
    ~NhanSu() {
        strcpy(this->MaNS, "");
        strcpy(this->HoTen, "");
        strcpy(this->NgaySinh, "");
        strcpy(this->MaCV, "");
        strcpy(this->ChucVu, "");
        this->HSL = 0;
        this->PhuCap = 0;
        this->Thuong = 0;
    }
    friend istream& operator>>( istream& x, NhanSu& y);
    friend ostream& operator<<( ostream& x, NhanSu y);
    void Xuat2();
};

istream& operator>>( istream& x, NhanSu& y)
{
    cout<<"Nhap ma Nhan Su:   ";  fflush(stdin);  x.getline(y.MaNS, 30);
    cout<<"Nhap ho ten    :   ";  fflush(stdin);  x.getline(y.HoTen, 30);
    cout<<"Nhap ngay sinh :   ";  fflush(stdin);  x.getline(y.NgaySinh, 30);
    cout<<"Nhap ma cong viec: ";  fflush(stdin);  x.getline(y.MaCV, 30);
    cout<<"Nhap chuc vu   :   ";  fflush(stdin);  x.getline(y.ChucVu, 30);
    cout<<"Nhap HSL: ";     x>>y.HSL;
    cout<<"Phu cap:  ";     x>>y.PhuCap;
    cout<<"Thuong:   ";     x>>y.Thuong;
    return x;
}

ostream& operator<<( ostream& x, NhanSu y)
{
    // x<<"Ma nhan su:  "<<y.MaNS;
    // x<<"Ho ten    :  "<<y.HoTen;
    // x<<"Ngay sinh :  "<<y.NgaySinh;
    // x<<"Ma cong viec: "<<y.MaCV;
    // x<<"Chuc vu     : "<<y.ChucVu;
    x<<setw(15)<<left<<y.MaNS<<setw(25)<<y.HoTen<<setw(15)<<y.NgaySinh<<setw(15)<<y.MaCV<<setw(20)<<y.ChucVu;
    x<<setw(10)<<y.HSL<<setw(15)<<y.PhuCap<<setw(15)<<y.Thuong<<endl;
    return x;
}

void NhanSu::Xuat2()
{
    cout<<setw(25)<<HoTen<<setw(15)<<HSL*1150 + PhuCap<<endl;
}

int main(int argc, char const *argv[])
{
    NhanSu *K;
    int n;
    cout<<"Nhap n = ";
    cin>>n;
    K = new NhanSu[n];
    for (int i = 0; i < n; i++)
    {
        cin>>K[i];
    }
    
    // cout<<"Hiem thi K: "<<endl;
    cout<<setw(15)<<left<<"MaNS"<<setw(25)<<"HoTen"<<setw(15)<<"NgaySinh"<<setw(15)<<"MaCV"<<setw(20)<<"ChucVu"<<setw(10)<<"HSL"<<setw(15)<<"PhuCap"<<setw(15)<<"Thuong"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<K[i];
    }
    cout<<setw(25)<<"HoTen"<<setw(15)<<"Luong"<<endl;
    for (int i = 0; i < n; i++)
    {
        K[i].Xuat2();
    }
    
    return 0;
}
