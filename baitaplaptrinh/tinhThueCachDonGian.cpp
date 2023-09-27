#include<iostream>
#include<cmath>
using namespace std;
long long tienThue(long long x);
void nhap(long long &x);
void xuat(long long kq);
int main()
{
	long long x;
	nhap(x);
	long long kq = tienThue(x);
	xuat(kq);
	return 0;
}
long long tienThue(long long x)
{
	if(x <= 5000000)
		return round(x*0.05*12);
	if(x<= 10000000)
		return round((250000+(x-5000000)*0.1)*12);
	if(x <= 18000000)
		return round((250000+500000+(x-10000000)*0.15)*12);
	if(x <= 32000000)
		return round((1950000 + (x-18000000)*0.2)*12);
	if(x <= 52000000)
		return round((4750000+(x-32000000)*0.25)*12);
	if(x <= 80000000)
		return round((9750000+(x-52000000)*0.35)*12);
	return round((18150000+(x-80000000)*0.35)*12);
}
void nhap(long long &x)
{
	cin>>x;
}
void xuat(long long kq)
{
	cout<<kq;
}
