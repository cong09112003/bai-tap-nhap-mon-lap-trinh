// nhap x va n tinh S=1+x/1!+(x^2)/2!+(x^3)/3!+...(x^n)/n!
#include<iostream>
#include<math.h>
using namespace std;
int giaiThua(int x);
void nhap(int &n,int &x);
long double tinhS(int n,int x);
void xuat(double ketqua);
int main()
{
	int n,x;
	nhap(n,x);
	long double ketqua=tinhS(n,x);
	xuat(ketqua);
}
int giaiThua(int x)
{
	int gt=1;
	if(x==0)
	    return 1;
	for (int i=1;i<=x;i++)
	{
		gt=gt*i;
	}
	return gt;	
}
void nhap(int &n,int &x)
{
    cout<<"nhap so nguyen n la:";
	cin>>n;
	cout<<"nhap so nguyen x la:";
	cin>>x;
}
long double tinhS(int n,int x)
{
	double ketqua=0;
	for(int i=0;i<=n;i++)
	{
		ketqua=ketqua + (pow(x,i)/(giaiThua(i)));
	}
	return ketqua;
}
void xuat(double ketqua)
{
    cout<<"ket qua cua S(n) la:"<<ketqua;
}			
		
