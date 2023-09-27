// tinh Tien Dien
#include<iostream>
using namespace std;
int tienDien(int n);
void nhap(int &n);
void xuat(long n);
int main()
{
	int n;
	nhap(n);
	long tien=tienDien(n);
	xuat(tien);
	return 0;
}	
void nhap(int &n)
{
	cin>>n;
}	
int tienDien(int n)
{
	long tien=0;
	int x=n;
	if(x <= 48)
	{
		tien=x*600;	
		return tien;
	}	
	else
	{
	    tien=tien+48*600;
	    n-=48;
	}	 
	if( x > 48 && x <=96)
	{
		tien=tien+(x-48)*1004;
		return tien;
	}	
	else
	{
		tien=tien+48*1004;
		n-=48;
	}	
	if(x>96 && x<=144)
	{
		tien=tien+(x-96)*1214;
		return tien;
	}	
	else
	{
		tien=tien+48*1214;
		n-=48;
	}	
	while (n>=1)
	{
		tien=tien+1594;
		n--;
	}
	return tien;
}
void xuat(long n)
{
	cout<<n;
}	
