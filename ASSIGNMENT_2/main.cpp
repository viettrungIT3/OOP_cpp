#include <iostream>
#include <iomanip>

using namespace std;
class LopHoc;
class Nguoi
{
protected:
    string HoTen;
    string NgaySinh;
    string QueQuan;
public:
    void Nhap();
    void Xuat();
};

void Nguoi::Nhap()
{
    cout<<"Nhap Ho Ten: ";      fflush(stdin);      getline( cin, HoTen);
    cout<<"Nhap Ngay Sinh: ";   fflush(stdin);      getline( cin, NgaySinh);
    cout<<"Nhap Que Quan: ";    fflush(stdin);      getline( cin, QueQuan);
}

void Nguoi::Xuat()
{
    cout<<setw(30)<<left<<HoTen<<setw(15)<<left<<NgaySinh<<setw(20)<<left<<QueQuan;
}

class SinhVien : public Nguoi
{
private:
    string MSV;
    string Nganh;
    int KhoaHoc;
public:
    void Nhap();
    void Xuat();
    friend  void TIM_K11( LopHoc A);
    friend void SAP( LopHoc &A);
};

void SinhVien::Nhap()
{
    cout<<"Nhap MSV: ";     fflush(stdin);      getline( cin, MSV);
    Nguoi::Nhap();
    cout<<"Nhap Ten Nganh: ";   fflush(stdin);  getline( cin, Nganh);
    cout<<"Nhap Khoa: ";        cin>>KhoaHoc;
}

void SinhVien::Xuat()
{
    cout<<setw(15)<<left<<MSV;
    Nguoi::Xuat();
    cout<<setw(15)<<left<<Nganh<<setw(15)<<left<<KhoaHoc<<endl;
}

class LopHoc
{
private:
    string MaLH;
    string TenLH;
    string NgayMo;
    SinhVien* X;
    int n;
    string GiaoVien;
public:
    void Nhap();
    void Xuat();
    friend  void TIM_K11( LopHoc A);
    friend void SAP( LopHoc &A);
};

 void LopHoc::Nhap()
 {
     cout<<"Nhap Ma Lop: ";     fflush(stdin);      getline( cin, MaLH);
     cout<<"Nhap Ten Lop: ";    fflush(stdin);      getline( cin, TenLH);
     cout<<"Nhap ngay mo: ";    fflush(stdin);      getline( cin, NgayMo);
     cout<<"Nhap so SV: ";      cin>>n;
     X = new SinhVien[n];
     for ( int i = 0; i <n ; i++)
     {
         cout<<"Nhap SV thu "<<i+1<<endl;
         X[i].Nhap();
     }
     cout<<"Giao Vien: ";       fflush(stdin);      getline( cin, GiaoVien);
 }

 void LopHoc::Xuat()
 {
    cout<<"\n--------------Display------------"<<endl;
    cout<<"Ma Lop: "<<MaLH<<endl;
    cout<<"Ten Lop: "<<TenLH<<endl;
    cout<<"Ngay mo: "<<NgayMo<<endl;
    cout<<"Giao Vien: "<<GiaoVien<<endl;
    cout<<"Danh sach Sinh Vien: "<<endl;
    cout<<setw(15)<<left<<"MSV"<<setw(30)<<left<<"HoTen"<<setw(15)<<left<<"NgaySinh"<<setw(20)<<left<<"QueQuan"<<setw(15)<<left<<"Nganh"<<setw(15)<<left<<"KhoaHoc"<<endl;
    for ( int i = 0; i < n; i++)
        X[i].Xuat();
 }

 void TIM_K11( LopHoc A)
 {
     int count = 0;
     for ( int i = 0; i < A.n ; i++)
         if ( A.X[i].KhoaHoc == 11 )
            count++;
    if ( count == 0 )
        cout<<"Khong co SV khoa 11 nao."<<endl;
    else
        cout<<"Co "<<count<<" SV khoa 11."<<endl;
 }

 void SAP( LopHoc &A)
 {
     for ( int i = 0; i < A.n; i++)
     {
         for ( int j = 0; j < A.n; j++)
         {
             if ( A.X[i].KhoaHoc < A.X[j].KhoaHoc )
             {
                 SinhVien temp = A.X[i];
                 A.X[i] = A.X[j];
                 A.X[j] = temp;
             }
         }
     }
     cout<<"\nDanh sach SV sau khi Sap Xep theo khoa: "<<endl;
     cout<<setw(15)<<left<<"MSV"<<setw(30)<<left<<"HoTen"<<setw(15)<<left<<"NgaySinh"<<setw(20)<<left<<"QueQuan"<<setw(15)<<left<<"Nganh"<<setw(15)<<left<<"KhoaHoc"<<endl;
     for (int i = 0; i < A.n; i++)
     {
         A.X[i].Xuat();
     }
     
 }

int main()
{
    LopHoc A;
    A.Nhap();
    A.Xuat();
    TIM_K11( A);
    SAP( A);
    return 0;
}
