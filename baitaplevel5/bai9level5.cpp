// nhap vao 4 so a b c d tính a/b + c/d dua ve dang toi gian
#include<iostream>
#include<math.h>
using namespace std;
int Ucln(int x, int y);
void nhap(int &x,int &y);
void congHaiPhanSo(int a,int b,int c,int d,int &tongmau,int &tongtu);
void xuat(int tongmau,int tongtu);
int main()
{
	int a,b,c,d,tongmau,tongtu;
	nhap(a,b);
	nhap(c,d);
	congHaiPhanSo(a,b,c,d,tongmau,tongtu);
	xuat(tongtu,tongmau);
	return 0;
}
int Ucln(int x,int y)
{
	x=abs(x);
	y=abs(y);
	while(x!=y)
	{
		if(x > y)
			x -= y;
		else
		    y -= x;
	}
	return x;			
}
void nhap(int &x,int &y)
{
	do{
	cout<<"nhap tu so la :";
	cin>>x;
	cout<<"nhap mau so la :";
	cin>>y;
	}
	while( y==0);	    
}	
void congHaiPhanSo(int a,int b,int c,int d,int &tongmau,int &tongtu)
{
    tongtu=a*d+b*c;
    tongmau=b*d;
	int u=Ucln(tongtu,tongmau);
	tongmau /= u;
	tongtu /= u;
}
void xuat(int tongmau,int tongtu)
{
	cout<<"tong hai phan so vua nhap la:"<<tongmau<<" / "<<tongtu;
}
	
				
