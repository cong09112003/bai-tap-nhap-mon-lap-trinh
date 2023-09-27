#include<iostream>
#include<math.h>
using namespace std;
int timNghiem(int a,int b,float &x);
void nhap(int &a,int &b);
void xuat(int kt,float x);
int main()
{
	int a,b;
	cout<<"nhap a="<<"\n";
	cout<<"nhap b="<<"\n";
	nhap(a,b);
	float x;
	int kt= timNghiem(a,b,x);
	xuat (kt,x);
}
int timNghiem(int a,int b,float &x)
{
	if (a==0)
	{
		if (b==0)
		    return 1;
		else 
		    return 0;
	}
	else
	{
		x=- (float)b/a;
		return 2;
	}
}
void nhap(int &a,int &b)	
{
	cin>>a>>b;
}
void xuat(int kt,float x)
{
	if (kt==0)
	cout<<"phuong trinh vo nghiem";
	else
	{
		if (kt==2)
	    cout<<"phuong trinh co nghiem x ="<< x << endl;
	    else
	    cout<<"phuong trinh co vo so nghiem";
    }
}


	

