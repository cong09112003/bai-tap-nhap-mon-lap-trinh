// nhap n va cho biet n co bao nhieu chu so la so nguyen to.
#include<iostream>
using namespace std;
int kiemTraCacSoNguyenTo(int n);
void nhap(int &n);
void xuat(int so);
int main()
{
	int n;
	nhap(n);
	int so=kiemTraCacSoNguyenTo(n);
	xuat(so);
}
int kiemTraCacSoNguyenTo(int n)
{
	int so;
	while( n>0 )
	{
		int x=n%10;
		n/=10;
		if (x==2||x==3||x==5||x==7)
		so++;
	}
	return so;
}
void nhap(int &n)
{
	cout<<"nhap so nguyen n la:";
	cin>>n;
}
void xuat(int so)
{
	cout<<"so cac so nguyen to cua n la:"<< so <<endl;
}
	    
	    

	
	
	

