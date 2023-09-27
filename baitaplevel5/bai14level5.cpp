// nhap x va n tinh C(k,n)=n!/(k!*(n-k)!)
#include<iostream>
#include<math.h>
using namespace std;
double tinhC(int n,int k);
int giaiThua(int x);
void nhap(int &n,int &k);
void xuat(double ketqua);
int main()
{
	int n,k ;
	nhap(n,k);
	double ketqua=tinhC(n,k);
	xuat(ketqua);
}
int giaiThua(int x)
{
	long gt=1;
	if(x==0)
	    return 1;
	for (int i=1;i<=x;i++)
	{
		gt=gt*i;
	}
	return gt;	
}
void nhap(int &n,int &k)
{
	do{
    cout<<"nhap so nguyen k la:";
	cin>>k;
	cout<<"nhap so nguyen n la:";
	cin>>n;
	}while(k>n || n < 1);
}
double tinhC(int n,int k)
{
	double ketqua;
    ketqua = giaiThua(n) / (giaiThua(k)*giaiThua(n - k));
	return ketqua;
}
void xuat(double ketqua)
{
    cout<<"ket qua cua phep tong hop C(n,k) la:"<<ketqua;
}			
		
