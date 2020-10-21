#include <bits/stdc++.h>
using namespace std;

class Hang
{
private:
    string maHang;
    string tenHang;
    int DG;
    int SL;
    int NamSX;
public:
    Hang(/* args */){
        maHang = "";
        tenHang = "";
        DG = 0;
        SL = 0;
        NamSX = 0;
    }
    Hang(string maHang, string tenHang, int DG, int SL, int NamSX);
    void Nhap();
    void Xuat();
    friend ostream& operator<<( ostream& x, Hang y);
    friend void Tim( Hang *K, int n);
    friend void SAP( Hang *K, int n);
    friend void XOA( Hang *K, int &n);
    friend void XOA_20( Hang *K, int &n);
};

ostream& operator<<( ostream& x, Hang y)
{
    x<<setw(20)<<y.maHang<<setw(20)<<y.tenHang<<setw(15)<<y.DG<<setw(10)<<y.SL<<setw(15)<<y.DG*y.SL<<setw(10)<<y.NamSX<<endl;
    return x;
}

Hang::Hang(string maHang, string tenHang, int DG, int SL, int NamSX)
{
    this->maHang = maHang;
    this->tenHang = tenHang;
    this->DG = DG;
    this->SL = SL;
    this->NamSX = NamSX;
}

void Hang::Nhap() 
{
    cout<<"Nhap ma hang: ";     fflush( stdin);     getline( cin, maHang);
    cout<<"Nhap ten hang: ";    fflush(stdin);      getline( cin, tenHang);
    cout<<"Nhap don gia: ";     cin>>DG;
    cout<<"Nhap so luong: ";    cin>>SL;
    cout<<"Nam san xuat: ";     cin>>NamSX;
}

void Hang::Xuat()
{
    cout<<setw(20)<<maHang<<setw(20)<<tenHang<<setw(15)<<DG<<setw(10)<<SL<<setw(15)<<DG*SL<<setw(10)<<NamSX<<endl;
}

void Tim( Hang *K, int n) 
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (K[i].tenHang == "IPhone 12")
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout<<"Khong co IP 12";
    }
    else
    {
        cout<<"Co IP 12.";
    }
}

void SAP( Hang *K, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ( K[i].DG*K[i].SL > K[j].DG*K[j].SL)
            {
                Hang temp = K[i];
                K[i] = K[j];
                K[j] = temp;
            }
        }
    }  
}

void XOA( Hang *K, int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (K[i].maHang == "H005")
        {
            for (int j = i; j < n; j++)
            {
                K[i] = K[i+1];
            }
            n--;
            i--;
        }
    }
    K = (Hang*) realloc ( K, n*sizeof(Hang));
}

void XOA_20( Hang *K, int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (K[i].DG < 20)
        {
            for (int j = i; j < n; j++)
            {
                K[i] = K[i+1];
            }
            n--;
            i--;
        }
    }
    K = (Hang*) realloc ( K, n*sizeof(Hang));
}

int main(int argc, char const *argv[])
{
    Hang *K;
    int n;
    cout<<"Nhap n = ";      cin>>n;
    K = new Hang[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap hang thu "<<i+1<<endl;
        K[i].Nhap();
    }
    cout<<"Danh sach hang: "<<endl;
    cout<<setw(20)<<"maHang"<<setw(20)<<"tenHang"<<setw(15)<<"DG"<<setw(10)<<"SL"<<setw(15)<<"Thanh tien"<<setw(10)<<"NamSX"<<endl;
    for (int i = 0; i < n; i++)
    {
        K[i].Xuat();
    }
    ofstream f("Xuat.txt", ios::out);
    f<<K;
    f.close();

    Tim( K, n);
    SAP( K, n);
    cout<<"\nDanh sach hang sau khi sap xep: "<<endl;
    cout<<setw(20)<<"maHang"<<setw(20)<<"tenHang"<<setw(15)<<"DG"<<setw(10)<<"SL"<<setw(15)<<"Thanh tien"<<setw(10)<<"NamSX"<<endl;
    for (int i = 0; i < n; i++)
    {
        K[i].Xuat();
    }
    XOA( K, n);
    cout<<"\nDanh sach hang sau khi xoa ma hang H005: "<<endl;
    cout<<setw(20)<<"maHang"<<setw(20)<<"tenHang"<<setw(15)<<"DG"<<setw(10)<<"SL"<<setw(15)<<"Thanh tien"<<setw(10)<<"NamSX"<<endl;
    for (int i = 0; i < n; i++)
    {
        K[i].Xuat();
    }
    XOA_20( K, n);
    cout<<"\nDanh sach hang sau khi xoa DG < 20: "<<endl;
    cout<<setw(20)<<"maHang"<<setw(20)<<"tenHang"<<setw(15)<<"DG"<<setw(10)<<"SL"<<setw(15)<<"Thanh tien"<<setw(10)<<"NamSX"<<endl;
    for (int i = 0; i < n; i++)
    {
        K[i].Xuat();
    }

    return 0;
}
