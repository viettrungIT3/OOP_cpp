#include <Bits/stdc++.h>
using namespace std;

/*
    Thiết kế một lớp Doanh Nghiệp bao gồm các thuộc tính: Tên doanh nghiệp, Địa chỉ doanh
nghiệp, Số nhân viên, Doanh thu và các phương thức cần thiết để trong chương trình
chính nhập vào thông tin cho một danh sách gồm n doanh nghiệp. In các thông tin vừa
nhập ra màn hình.
*/

class DoanhNghiep
{
private:
    string TenDN;
    string address;
    int SoNV;
    long DoanhThu;
public:
    void input();
    void output();
};

void DoanhNghiep::input()
{
    fflush(stdin);
    cout<<"\tNhap ten Doanh Nghiep: ";    getline( cin, TenDN);
    cout<<"\tNhap dia chi doanh nghiep: ";    getline( cin, address);
    cout<<"\tNhap so nhan vien: ";     cin>>SoNV;
    cout<<"\tNhap doanh thu: ";   cin>>DoanhThu;
}

void DoanhNghiep::output()
{
    cout<<setw(20)<<TenDN<<setw(30)<<address<<setw(12)<<SoNV<<setw(15)<<DoanhThu<<endl;
}


int main(int argc, char const *argv[])
{
    DoanhNghiep *X;
    int n;
    cout<<"Enter n = "; cin>>n;
    X =new DoanhNghiep[n];
    cout<,"Nhap thong tin:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap Danh Nghiep thu"<<i+1<<endl;
        X[i].input();
    }
    cout<<"------------------------Display-------------------------"<<endl;
    cout<<setw(20)<<"Ten Doanh nghiep"<<setw(30)<<"Address"<<setw(12)<<"So NV"<<setw(15)<<"Doanh Thu"<<endl;
    for (int i = 0; i < n; i++)
    {
        X[i].output();
    }
    
    return 0;
}
