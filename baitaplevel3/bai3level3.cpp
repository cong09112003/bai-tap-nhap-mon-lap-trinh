// tinh S=1+1/2+1/3+1/4+...+1/n
#include<iostream>
#include<math.h>
using namespace std;
float tinhTongDaoNguoc(int n);
void nhap(int &n);
void xuat(double Tong);
int main()
{
	int n;
	nhap(n);
	double Tong=tinhTongDaoNguoc(n);
	xuat(Tong);
	return 0;
}
float tinhTongDaoNguoc(int n)
{
	double Tong=0;
	int i=1 ;
    for(int i = 1; i <= n; i++)
        Tong = Tong + 1.0 / i;
    return Tong;
} 
void nhap(int &n)
{
	cout<<"nhap so nguyen n :";
	cin>>n;
}
void xuat(double Tong)
{
	cout<<"Tong cac so nguyen dao nguoc tu 1 den n la:"<< Tong << endl;
}
