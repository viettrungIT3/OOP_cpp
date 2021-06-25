#include <bits/stdc++.h>

using namespace std;
class HANG
{
    char MAH[30], TENH[30];
    int SL, NAM;
    float DG;
public:
    HANG();
    HANG(char*x, char*y, int z, float t, int q);
    friend istream& operator>>(istream&x, HANG&y);
    friend ostream& operator<<(ostream& x, HANG y);
    friend void CHECK(HANG*k, int n);
    friend void SORT(HANG*k, int n);
    friend void DELETE1(HANG *k, int &n);
    friend void DELETE2(HANG *k, int &n);
};
HANG::HANG()
{
    strcpy(MAH,"");
    strcpy(TENH,"");
    SL  = 0;
    DG  = 0;
    NAM = 0;
}
HANG::HANG(char*x, char*y, int z, float t, int q)
{
    strcpy(MAH,x);
    strcpy(TENH,y);
    SL  = z;
    DG  = t;
    NAM = q;
}
istream& operator>>(istream&x, HANG&y)
{
    cout<<"MA HANG : "; fflush(stdin); x.getline(y.MAH, 30);
    cout<<"TEN HANG: "; fflush(stdin); x.getline(y.TENH, 30);
    cout<<"DON GIA : "; x>>y.DG;
    cout<<"SL      : "; x>>y.SL;
    cout<<"NAM SX  : "; x>>y.NAM;
}
ostream& operator<<(ostream& x, HANG y)
{
    x<<setw(15)<<y.MAH<<setw(15)<<y.TENH<<setw(10)<<y.SL
    <<setw(10)<<y.DG<<setw(10)<<y.SL*y.DG<<setw(10)
    <<y.NAM<<endl;
}
void CHECK(HANG*k, int n)
{
    int d = 0;
    for(int i=0; i<n; i++)
        if(strcmp(k[i].TENH, "IPHONE 12")==0)
        d++;
    if(d==0)
        cout<<"CO IPHONE 12"<<endl;
    else
        cout<<"KHONG CO IPHONE 12"<<endl;
}

void SORT(HANG*k, int n)
{
    for(int i=0; i<n; i++)
    for(int j=i+1; j<n; j++)
    if(k[i].DG*k[i].SL > k[j].DG*k[j].SL)
    {
        HANG tg = k[i]; k[i]=k[j]; k[j]=tg;
    }
}
void DELETE1(HANG *k, int &n)
{
    for(int i=0; i<n; i++)
        if(strcmp(k[i].MAH, "H005")==0)
        {
            for(int j=i; j<n-1; j++)
            k[j] = k[j+1];
            n--;
        }
    k = (HANG*) realloc(k, n*sizeof(HANG));
}
void DELETE2(HANG *k, int &n)
{
    for(int i=0; i<n; i++)
        while(k[i].DG<20)
        {
             for(int j=i; j<n-1; j++)
                k[j] = k[j+1];
            n--;
        }
    k = (HANG*) realloc(k, n*sizeof(HANG));
}
int main()
{
    HANG*k; int n;
    cout<<"n="; cin>>n;
    k = new HANG[n];
    for(int i=0; i<n; i++)
        cin>>k[i];
	
	CHECK(k, n);
	
    ofstream f("HANGNHAP.DAT", ios::app);
    for(int i=0; i<n; i++)
        f<<k[i];
    f.close();

    SORT(k, n);
    f.open("HANGSORT.TXT", ios::app);
    for(int i=0; i<n; i++)
        f<<k[i];
    f.close();

    DELETE1(k, n);
    f.open("HANGREMOVE.TXT", ios::app);
    for(int i=0; i<n; i++)
        f<<k[i];
    f.close();

    DELETE2(k, n);
    f.open("HANGREMOVE.TXT", ios::app);
    for(int i=0; i<n; i++)
        f<<k[i];
    f.close();



}
