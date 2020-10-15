#include <bits/stdc++.h>
using namespace std;

class ELECTRONIC
{
protected:
    int congSuat;
    int dienAp;
    

public:
    ELECTRONIC( int congSuat, int dienAp) {
        this.congSuat = congSuat;
        this.dienAp = dienAp;
    }
};

class MAYGIAT : public ELECTRONIC
{
private:
    int dungTich;
    string loai;
public:
    MAYGIAT(/* args */);
    void Xuat();
};

MAYGIAT::MAYGIAT( int congSuat, int dienAp, int dungTich, string loai) : ELECTRONIC( congSuat, dienAp) 
{
    this.dungTich = dungTich;
    this.loai = loai;
}

void MAYGIAT::Xuat()
{
    cout<<"MAY GIAT: "<<endl;
    cout<<"Cong suat: "<<congSuat<<endl;
    cout<<"Dien ap: "<<dienAp<<endl;
    cout<<"Dung tich: "<<dungTich<<endl;
    cout<<"Loai: "<<loai<<endl;
}

class TULANH : public ELECTRONIC
{
private:
    int dungTich;
    string soNgan;
public:
    TULANH(/* args */);
    void Xuat();
};

TULANH::TULANH( int congSuat, int dienAp, int dungTich, string soNgan) : ELECTRONIC( congSuat, dienAp) 
{
    this.dungTich = dungTich;
    this.soNgan = soNgan;
}

void TULANH::Xuat()
{
    cout<<"MAY GIAT: "<<endl;
    cout<<"Cong suat: "<<congSuat<<endl;
    cout<<"Dien ap: "<<dienAp<<endl;
    cout<<"Dung tich: "<<dungTich<<endl;
    cout<<"soNgan: "<<soNgan<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
