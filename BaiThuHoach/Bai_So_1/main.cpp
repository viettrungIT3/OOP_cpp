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
    friend ostream& operator<<(ostream& x, Hang y);
    friend istream& operator>>(istream&x, Hang&y);
    friend void Tim( Hang *K, int n);
    friend void SAP( Hang *K, int n);
    friend void XOA( Hang *K, int &n);
    friend void XOA_20( Hang *K, int &n);
};

Hang::Hang(string maHang, string tenHang, int DG, int SL, int NamSX)
{
    this->maHang = maHang;
    this->tenHang = tenHang;
    this->DG = DG;
    this->SL = SL;
    this->NamSX = NamSX;
}

istream& operator>>(istream&x, Hang&y)
{
    cout<<"Nhap ma hang:  ";    fflush(stdin);  getline( x, y.maHang);
    cout<<"Nhap ten hang: ";    fflush(stdin);  getline( x, y.tenHang);
    cout<<"Nhap don gia:  ";    x>>y.DG;
    cout<<"Nhap so luong: ";    x>>y.SL;
    cout<<"Nam san xuat:  ";    x>>y.NamSX;
}

ostream& operator<<(ostream& x, Hang y)
{
        cout<<setw(20)<<y.maHang<<setw(20)<<y.tenHang<<setw(15)<<y.DG<<setw(10)<<y.SL<<setw(15)<<y.DG*y.SL<<setw(10)<<y.NamSX<<endl;

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
        cout<<"Khong co IP 12"<<endl;
    }
    else
    {
        cout<<"Co IP 12."<<endl;
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
        cin>>K[i];
    }

    ofstream f("HANGNHAP.DAT", ios::out);
    f<<"Danh sach hang: "<<endl;
    f<<setw(20)<<"maHang"<<setw(20)<<"tenHang"<<setw(15)<<"DG"<<setw(10)<<"SL"<<setw(15)<<"Thanh tien"<<setw(10)<<"NamSX"<<endl;
    for(int i=0; i<n; i++)
        f<<K[i];
    f.close();

    Tim( K, n);

    // SAP( K, n);
    f.open("HANGSORT.TXT", ios::out);
    f<<"Danh sach hang sau khi sap xep: "<<endl;
    f<<setw(20)<<"maHang"<<setw(20)<<"tenHang"<<setw(15)<<"DG"<<setw(10)<<"SL"<<setw(15)<<"Thanh tien"<<setw(10)<<"NamSX"<<endl;
    for(int i=0; i<n; i++)
        f<<K[i];
    f.close();

    f.open("HANGREMOVE.TXT", ios::out);
    // XOA( K, n);
    f<<"Danh sach hang sau khi xoa ma hang H005: "<<endl;
    f<<setw(20)<<"maHang"<<setw(20)<<"tenHang"<<setw(15)<<"DG"<<setw(10)<<"SL"<<setw(15)<<"Thanh tien"<<setw(10)<<"NamSX"<<endl;
    for(int i=0; i<n; i++)
        f<<K[i];
    f.close();

    ofstream f3 ("\nHANGREMOVE.TXT", ios::out);
    // XOA_20( K, n);
    f3<<"Danh sach hang sau khi xoa DG < 20: "<<endl;
    f3<<setw(20)<<"maHang"<<setw(20)<<"tenHang"<<setw(15)<<"DG"<<setw(10)<<"SL"<<setw(15)<<"Thanh tien"<<setw(10)<<"NamSX"<<endl;
    for(int i=0; i<n; i++)
        f3<<K[i];
    f3.close();

    return 0;
}
