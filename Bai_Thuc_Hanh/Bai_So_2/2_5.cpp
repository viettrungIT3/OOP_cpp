#include <Bits/stdc++.h>
using namespace std;

/*
    Thiết kế một lớp Ôtô với các thuộc tính: Mã oto, Giá mua mới, Số năm sử dụng, Tỷ lệ
khấu hao/ năm và các phương thức cần thiết để trong chương trình chính nhập vào thông
tin của một danh sách các xe ôtô, in ra các thông tin vừa nhập và giá trị hiện tại của xe.
*/

class Car
{
private:
    string MaCar;
    long GiaMuaMoi;
    int SoNamSD;
    float TyLeKhauhao;
public:
    void input();
    void output();
};

void Car::input()
{
    fflush(stdin);
    cout<<"Nhap ma Oto: ";      getline( cin, MaCar);
    cout<<"Nhap Gia mua moi: "; cin>>GiaMuaMoi;
    cout<<"Nhap so nam su dung: ";  cin>>SoNamSD;
    cout<<"Nhap Ty le khau hao/nam: ";  cin>>TyLeKhauhao;
}

void Car::output()
{
    cout<<setw(15)<<MaCar<<setw(15)<<GiaMuaMoi<<setw(10)<<SoNamSD<<setw(15)<<TyLeKhauhao<<endl;
}

int main(int argc, char const *argv[])
{
    Car *OTO;
    int n;
    cout<<"Enter n = "; cin>>n;
    OTO = new Car[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap OTO thu "<<i+1<<endl;
        OTO[i].input();
    }
    cout<<"______________DisPlay_______________"<<endl;
    cout<<setw(15)<<"Ma car"<<setw(15)<<"Gia Mua Moi"<<setw(10)<<"So Nam SD"<<setw(15)<<"Ty Le Khau Hao"<<endl;
    for (int i = 0; i < n; i++)
    {
        OTO[i].output();
    }
    
    return 0;
}
