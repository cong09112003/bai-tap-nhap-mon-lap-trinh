// tim UCLN cua phan nguyen hai so thuc
#include<iostream>
using namespace std;
void xuat(int x);
void timUCLNphanNguyen(int x,int y,int &xx,int &yy);
void nhap(float &x,float &y);
int UCLN(int x,int y);
int main()
{
	float x,y;
	int xx,yy;
	nhap(x,y);
	timUCLNphanNguyen(x,y,xx,yy);
	xuat;
	return 0;
}
void nhap(float &x,float &y)
{
	cin>>x;cout<<" ";
	cin>>y;
}
int UCLN(int x,int y)
{
	if(x==y)
	    return x;
	while(x!=y)
	{
		if(x>y)
		    x=x-y;
		else
		    y=y-x;    
	}
	return x;	
}	
void timUCLNphanNguyen(int x,int y,int &xx,int &yy)
{
	xx=int (x);
	yy=int (y);
	int UCLNmax=UCLN(xx,yy);
	xuat(UCLNmax);
}
void xuat(int x)
{
	cout<<x;
}	
	
