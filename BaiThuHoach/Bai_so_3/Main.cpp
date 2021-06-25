#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
#include <malloc.h>
using namespace std;

class HANG
{
private:
    char MaH[20];
    char TenH[30];
    int SL,NamSX;
    float DG;
public:
    HANG();
    HANG(char *a, char *b, int x, int y, float z);
    friend istream& operator>>(istream&w, HANG &k);
    friend ostream& operator<<(ostream&w, HANG k);
    void friend CHECK(HANG *m, int &n);
    void friend SORT(HANG *m, int &n);
    void friend DELETE1(HANG *m, int &n);
    void friend DELETE2(HANG *m, int &n);
};
HANG::HANG()
{
    strcpy(MaH," ");    strcpy(TenH," ");
    DG=0;
    SL=0;
    NamSX=0;
}
HANG::HANG(char *a, char *b, int x, int y, float z)
{
    strcpy(MaH,a);      strcpy(TenH,b);
    SL = x;
    NamSX = y;
    DG = z;
}
istream& operator>>(istream&w, HANG &k)
{
    cout<<"Nhap ma hang:";      fflush(stdin);      gets(k.MaH); // k la hang ma muon mah khong phai thuoc tinh cua operator => k.MaH;
    cout<<"Nhap ten hang:";      fflush(stdin);      gets(k.TenH);
    cout<<"Nhap so luong:";     w>>k.SL;
    cout<<endl<<"Nhap nam san xuat:";     w>>k.NamSX;
    cout<<endl<<"Nhap don gia :";     w>>k.DG;
    return w; // luon phai nho la return khong la hong het
}
ostream& operator<<(ostream&w, HANG m)
{
    w<<"Ma hang :"<<m.MaH;
    w<<"Ten hang :"<<m.TenH;
    w<<"So luong :"<<m.NamSX;
    w<<"Nam san xuat :"<<m.NamSX;
    w<<"Don gia :"<<m.DG;
    return w; // luon phai nho la return khong la hong het
}
void CHECK(HANG *m, int &n)
{
    int dem =0;
    for(int i=0; i<n; i++)
    {
        (strcmp(m[i].TenH,"iphone 12") == 0);
            dem ++;
    }
    if(dem == 0)
        cout<<"Khong co iphone 12 !";
    else
    {
        cout<<"Co iphone 12 ";
    }
}
void SORT(HANG *m, int &n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
            if((m[i].DG*m[i].SL) > (m[j].DG*m[i].SL))
        {
            HANG tg = m[i];
            m[i]    = m[j];
            m[j]    = tg;
        }
    }
}
void DELETE1(HANG *m, int &n)
{
    for(int i=0; i<n; i++)
        if(strcmp(m[i].MaH,"H005") == 0)
    {
        for(int j=i; j<n-1; j++)
            m[j] = m[j+1];
            n--;
    }
    m = (HANG *) realloc(m, n*sizeof(HANG));
}
void DELETE2(HANG *m, int &n)
{
    for(int i=0; i<n; i++)
    {
        while(m[i].DG < 20)
        {
            for(int j=i; j<n-1; j++)
            {
                m[j] = m[j+1];
                n--;
            }
        }
    m = (HANG *) realloc(m, n*sizeof(HANG));
    }
}
int main(){
    HANG *m;
    int n;
    cout<<"Nhap n :";   cin>>n;
    m = new HANG[n];
    for(int i=0; i<n; i++)
    cin>>m[i];
    ofstream f("D:/HANGNHAP.DAT", ios::app);
    for(int i=0; i<n; i++)
        f<<m[i];
    f.close();
    SORT(m, n);
    f.open("D:/HANGSORT.TXT", ios::app);
    for(int i=0; i<n; i++)
        f<<m[i];
    f.close();
    DELETE1(m, n);
    f.open("D:/HANGDELETE1.TXT", ios::app);
    for(int i=0; i<n; i++)
        f<<m[i];
    f.close();
    DELETE2(m, n);
    f.open("D:/HANGDELETE2.TXT", ios::app);
    for(int i=0; i<n; i++)
        f<<m[i];
    f.close();
    return 0;
}
