#include <bits/stdc++.h>
using namespace std;

class Date
{
private:
    int Day;
    int Month;
    int Year;
public:
    friend class NhanVien;
};

class PhongBan
{
private:
    int MaPB;
    char TenPB[30];
    char TruongPhong[30];
    int SoNV;
public:
    friend class NhanVien;
};

class NhanVien
{
private:
    int MaNV;
    char HoDem[30];
    char Ten[30];
    Date NgaySinh;
    PhongBan Phong;
public:
    void Nhap();
    void Xuat();
    friend void SAP(NhanVien * A, int n);
    friend void Insert( NhanVien *A, int &n, int k);
    friend void Delete123( NhanVien *A, int &n );
};

void NhanVien::Nhap()
{
    cout<<"Nhap Ma Nhan vien: ";        cin>>MaNV;
    cout<<"Nhap Ho Dem: ";              fflush(stdin);      gets( HoDem );
    cout<<"Nhap Ten Nhan vien: ";       fflush(stdin);      gets( Ten );
    cout<<"Nhap Ngay Thang Nam: "<<endl;
    cout<<"\tNhap Ngay: ";      cin>>NgaySinh.Day;
    cout<<"\tNhap Thang: ";     cin>>NgaySinh.Month;
    cout<<"\tNhap Nam: ";       cin>>NgaySinh.Year;
    cout<<"Nhap Phong Ban: "<<endl;
    cout<<"\tNhap Ma Phong: ";  cin>>Phong.MaPB;
    cout<<"\tNhap Ten Phong Ban: ";     fflush(stdin);      gets( Phong.TenPB);
    cout<<"\tNhap Truong  Phong: ";     fflush(stdin);      gets( Phong.TruongPhong);
    cout<<"\tNhap So Nhan Vien: ";      cin>>Phong.SoNV;
}

void NhanVien::Xuat()
{
    cout<<"Ma Nhan vien: "<<MaNV<<endl;
    cout<<"Ho Ten Nhan vien: "<<HoDem<<" "<<Ten<<endl;
    cout<<"Ngay Thang Nam: "<<NgaySinh.Day<<"/"<<NgaySinh.Month<<"/"<<NgaySinh.Year<<endl;
    cout<<"Phong Ban: "<<endl;
    cout<<"\tMa Phong: "<<Phong.MaPB<<endl;
    cout<<"\tTen Phong Ban: "<<Phong.TenPB<<endl;
    cout<<"\tTruong  Phong: "<<Phong.TruongPhong<<endl;
    cout<<"\tSo Nhan Vien: "<<Phong.SoNV<<endl;
}

void SAP(NhanVien * A, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ( strcmp( A[i].Ten, A[j].Ten) > 0 )
            {
                NhanVien temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
            
        }
        
    }
    
}

void Insert( NhanVien *A, int &n, int k)
{
    if ( k > n)
    {
        cout<<" k > n => exit"<<endl;
    }
    else
    {
        for (int i = n; i > k; i--)
        {
            A[i] = A[i-1];
        }
        A[k].Nhap();
        n++;
    }
}


void Delete123( NhanVien *A, int &n )
{
    for (int i = 0; i < n; i++)
    {
        if ( A[i].MaNV == 123 )
        {
            for ( int j = i; j < n; j++)
            {
                A[j] = A[j+1];
            }
            n--;
        }
    }
}

int main()
{
    int n, k;
    cout<<"Nhap n = ";      cin>>n;
    //cout<<"Nhap k = ";      cin>>k;     k--;
    NhanVien * A;
    A = new NhanVien[n+5];
    for (int i = 0; i < n; i++)
    {
        A[i].Nhap();
    }
    SAP( A, n);
    cout<<"Nhap k = "; cin>>k;  k--;
    Insert( A, n, k);
    Delete123( A, n);
    cout<<"--------------Display--------------"<<endl;
    for (int i = 0; i < n; i++)
    {
        A[i].Xuat();
    }
    return 0;
}
