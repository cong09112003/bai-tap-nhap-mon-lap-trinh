#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
void nhap(float &a,float &b,float &c,float &d);
float timMax(float a,float b,float c,float d);
void xuat(float kt);
int main()
{
	float a,b,c,d;
	nhap(a,b,c,d);
	float kt = timMax(a,b,c,d);
	xuat(kt);
}
void nhap(float &a,float &b,float &c,float &d)
{
	cout<<"nhap a:""\n";
	cout<<"nhap b:""\n";
	cout<<"nhap c:""\n";
	cout<<"nhap d:""\n";	
	cin>>a>>b>>c>>d;
}
float timMax(float a,float b,float c,float d)
{
	if ((a>b)&&(a>c)&&(a>d))
	    return a;
	if ((b>c)&&(b>a)&&(b>d))
	    return b;
	if((c>a)&&(c>d)&&(c>b))
	{
	    return c;
	}
	return d;
}
void xuat(float kt)
{
	cout<<"so lon nhat la:"<< kt <<endl;
}
		
		
	
	
	
	
	
	
