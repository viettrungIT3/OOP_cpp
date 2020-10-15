#include <bits/stdc++.h>

using namespace std;
class GUN
{
    char Weaponname[30];
    int ammoNumber;
public:
    GUN()
    {
        strcpy(Weaponname,"");
        ammoNumber=0;
    }
    int Load(int x);
    int Shoot(int x);
    friend void TH(GUN A, GUN B);
};
int GUN::Load(int x)
{
    ammoNumber+=x;
    cout<<"Da nap "<<x<<" dan"<<endl;
    return ammoNumber;
}
int GUN::Shoot(int x)
{
    if(ammoNumber==0)
        cout<<"het dan";
    else ammoNumber-=x;
    return ammoNumber;
}
void TH(GUN A, GUN B)
{
    cout<<"Nhap loai sung cua A: "; fflush(stdin);  gets(A.Weaponname);
    cout<<"Nhap loai sung cua B: "; fflush(stdin);  gets(B.Weaponname);
    cout<<"Moi ben co 30 vien dan: "<<endl;
    A.Load(30);
    B.Load(30);
    int k;
    cout<<"Nhap so dan ban 1 lan: "; cin>>k;
    cout<<"Game bat dau"<<endl;
    while(A.Shoot(k)!=0 && B.Shoot(k)!=0)
    {
        A.Shoot(k);
        if(A.Shoot(k)==20)
        {
            cout<<"\nTrung dc buff them 20 vien"<<endl;
            A.Load(20);
        }
        B.Shoot(k);
        cout<<"CHiu"<<endl;
    }
    if(A.Shoot(k)==0 && B.Shoot(k)==0)
        cout<<"\nHoa";
    else if(A.Shoot(k)==0)
        cout<<"\nA Lose";
    else
        cout<<"\nB Win";

}
int main()
{
    GUN A;
    GUN B;
    TH(A,B);

    return 0;
}
