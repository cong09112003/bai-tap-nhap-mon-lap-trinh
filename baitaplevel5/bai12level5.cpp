// tinh s(n)=1+(1+2)/2!+...+(1+2+3+...n)/n!
#include<iostream>
#include<math.h>
using namespace std;
int giaiThua(int x);
double tinhS(int n);
void nhap(int &n);
void xuat(double ketqua);
int main()
{
	int n;
	nhap(n);
	double ketqua=tinhS(n);
	xuat(ketqua);
}
int giaiThua(int x)
{
	long gt=1;
	if(x==0)
	    return 1;
	for(int i=1; i<=x; i++)
	{
		gt=gt * i;
	}
	return gt;		
}
double tinhS(int n)
{
	double ketqua;
	double  sum=0;
	for(int i=1; i<=n;i++)
	{
		sum=sum+i;
		ketqua=ketqua + double((sum)/(giaiThua(i)));
	}
	return ketqua;
}	
void nhap(int &n)
{
	do{
		cout<<"nhap n la:";
		cin>>n;
	}
	while(n<1);
}
void xuat(double ketqua)
{
    cout<<"ket qua cua S(n) la: "<<ketqua;
}	
	
